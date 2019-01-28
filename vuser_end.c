vuser_end()
{

	lr_think_time(85);

	lr_start_transaction("UC00_TR01_Sign_Off");

	web_url("welcome.pl_3", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC00_TR01_Sign_Off",LR_AUTO);

	return 0;
}