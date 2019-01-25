UC04_Cancel()
{

	lr_think_time(35);

	lr_start_transaction("UC04_TR01_Cancel_Order");

	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=160041495-798-JB", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=removeAllFlights.x", "Value=63", ENDITEM, 
		"Name=removeAllFlights.y", "Value=9", ENDITEM, 
		LAST);

	lr_end_transaction("UC04_TR01_Cancel_Order",LR_AUTO);

	return 0;
}
