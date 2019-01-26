UC02_Check_After_Order()
{

	lr_think_time(10);

	lr_start_transaction("UCO2_TR00_Button_Itinerary");
	
	web_reg_save_param("cgifields","lb=name=\".cgifields\" value=\"","rb=\"  />","ord=all",LAST);
	web_reg_save_param("flightID","lb=name=\"flightID\" value=\"","rb=\"  />","ord=all",LAST);

	web_reg_find("Text=Flight Transaction Summary", LAST);
	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UCO2_TR00_Button_Itinerary",LR_AUTO);

	return 0;
}
