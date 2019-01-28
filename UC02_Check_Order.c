UC02_Check_Order()
{

	lr_start_transaction("UC02_TR00_Itinerary");

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC02_TR00_Itinerary",LR_AUTO);

	lr_think_time(43);

//	lr_start_transaction("UC02_TR00_Cancel");
//
//	web_submit_data("itinerary.pl", 
//		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"RecContentType=text/html", 
//		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t193.inf", 
//		"Mode=HTML", 
//		ITEMDATA, 
//		"Name=1", "Value=on", ENDITEM, 
//		"Name=flightID", "Value=160041491-789-JB", ENDITEM, 
//		"Name=.cgifields", "Value=1", ENDITEM, 
//		"Name=removeFlights.x", "Value=49", ENDITEM, 
//		"Name=removeFlights.y", "Value=12", ENDITEM, 
//		LAST);
//
//	lr_end_transaction("UC02_TR00_Cancel",LR_AUTO);

	return 0;
}
