UC02_Check_After_Cancel()
{

	lr_think_time(10);

	lr_start_transaction("UCO2_TR01_Button_Itinerary");

	web_reg_find("Text=No flights have been reserved.", LAST);
	web_url("welcome.pl_3", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UCO2_TR01_Button_Itinerary",LR_AUTO);

	return 0;
}
