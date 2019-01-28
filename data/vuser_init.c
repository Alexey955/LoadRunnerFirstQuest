/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1203
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_add_cookie("SRCHD=AF=IESS4N; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=68DC1504E1054ACCBA0DFFF01477392F&dmnchg=1; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20181226; DOMAIN=www.bing.com");

	web_add_cookie("MUID=08D12E060D366887178922D70C476981; DOMAIN=www.bing.com");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	lr_think_time(20);

	lr_start_transaction("UC00_Login");

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=125450.26836776ztfcitipVHQVzzzHDiHVHpAiQAHf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=62", ENDITEM, 
		"Name=login.y", "Value=12", ENDITEM, 
		LAST);

	lr_end_transaction("UC00_Login",LR_AUTO);

	return 0;
}
