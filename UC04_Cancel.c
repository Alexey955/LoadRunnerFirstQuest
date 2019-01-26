UC04_Cancel()
{
	int i;

	lr_start_transaction("UCO4_TR00_Cancel_Flight");
	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=1", "Value=on", ENDITEM, 
		"Name=flightID", "Value={flightID_1}", ENDITEM, 
		"Name=.cgifields", "Value={cgifields_1}", ENDITEM, 
		"Name=removeFlights.x", "Value=44", ENDITEM, 
		"Name=removeFlights.y", "Value=13", ENDITEM, 
		LAST);

	lr_end_transaction("UCO4_TR00_Cancel_Flight",LR_AUTO);

	lr_think_time(10);

	return 0;
}