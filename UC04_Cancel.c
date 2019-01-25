UC04_Cancel()
{
	lr_think_time(10);

	lr_start_transaction("UC04_TR00_CancelPlease");

	web_reg_find("Text=No flights have been reserved.", LAST);
	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=0-0-1B", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=removeAllFlights.x", "Value=71", ENDITEM, 
		"Name=removeAllFlights.y", "Value=13", ENDITEM, 
		LAST);

	lr_end_transaction("UC04_TR00_CancelPlease",LR_AUTO);

	return 0;
}