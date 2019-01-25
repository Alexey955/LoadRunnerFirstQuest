/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1203
   ------------------------------------------------------------------------------- */

vuser_init()
{
	
	//<input type="hidden" name="userSession" value="125414.110571081ztfAQiipDVcfDiHAfpQcQiHf"/>
	web_reg_save_param("userSession",
	                   "LB=\"userSession\" value=\"",
	                   "RB=\"/>",
	                   LAST);

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(10);

	lr_start_transaction("UC00_TR00_Login");

	web_reg_find("Text=Using the menu to the left", LAST);
	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value={userSession}", ENDITEM, 
		"Name=username", "Value={Login}", ENDITEM, 
		"Name=password", "Value={Password}", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=27", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		LAST);

	lr_end_transaction("UC00_TR00_Login",LR_AUTO);

	return 0;
}
