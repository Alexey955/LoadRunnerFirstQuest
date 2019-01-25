UC01_Find_Flight()
{
	int randNumOne;
	
	int randNumTwo;
	
	lr_think_time(10);

	lr_start_transaction("UC01_TR00_Button_Flights");
	
	//<option value="Frankfurt">Frankfurt</option>
	web_reg_save_param("CityListParameter",
	                   "LB=\">",
	                   "RB=</option>",
	                   "Ord=All",
	                   LAST);

	web_reg_find("Text=Departure City", LAST);
	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC01_TR00_Button_Flights",LR_AUTO);

	lr_think_time(10);
	
	lr_save_string(lr_paramarr_random("CityListParameter"),"DepartureCity");
	lr_save_string(lr_paramarr_random("CityListParameter"),"ArrivalCity");
	
	while(strcmp("{DepartureCity}", "{ArrivalCity}")==0)
		lr_save_string(lr_paramarr_random("CityListParameter"),"ArrivalCity");

	lr_start_transaction("UC01_TR01_Fill_Find_Flight");
	
	randNumOne = rand()%10 +1;
	lr_save_datetime("%m/%d/%Y", (DATE_NOW + ONE_DAY*randNumOne), "DepartureDate");
	
	randNumTwo = rand()%10 +1;
	lr_save_datetime("%m/%d/%Y", (DATE_NOW + ONE_DAY*randNumOne + ONE_DAY+randNumTwo), "ReturnDate");
	
	web_reg_find("Text=Flight departing from", LAST);
	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={DepartureCity}", ENDITEM, 
		"Name=departDate", "Value={DepartureDate}", ENDITEM, 
		"Name=arrive", "Value={ArrivalCity}", ENDITEM, 
		"Name=returnDate", "Value={ReturnDate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value={SeatingPreference}", ENDITEM, 
		"Name=seatType", "Value={TypeOfSeat}", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=62", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);

	lr_end_transaction("UC01_TR01_Fill_Find_Flight",LR_AUTO);

	return 0;
}
