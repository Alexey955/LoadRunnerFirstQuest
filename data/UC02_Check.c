UC02_Check()
{

	lr_think_time(34);

	lr_start_transaction("UC02_TR01_Button_Itinerary");

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC02_TR01_Button_Itinerary",LR_AUTO);

	return 0;
}
