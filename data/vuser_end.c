vuser_end()
{

	lr_think_time(23);

	lr_start_transaction("UC00_TR02_Sign_off");

	web_url("welcome.pl_4", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC00_TR02_Sign_off",LR_AUTO);

	return 0;
}