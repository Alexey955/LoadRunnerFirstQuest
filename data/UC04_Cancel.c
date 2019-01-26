UC04_Cancel()
{

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("SRCHD=AF=IESS4N; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=68DC1504E1054ACCBA0DFFF01477392F&dmnchg=1; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20181226; DOMAIN=www.bing.com");

	web_add_cookie("MUID=08D12E060D366887178922D70C476981; DOMAIN=www.bing.com");

	lr_think_time(13);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=125435.679303362ztfcAQHpHftVzzzHDiHVcpfizfcf", ENDITEM, 
		"Name=username", "Value=login0", ENDITEM, 
		"Name=password", "Value=password0", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=34", ENDITEM, 
		"Name=login.y", "Value=8", ENDITEM, 
		EXTRARES, 
		"Url=https://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Frankfurt", ENDITEM, 
		"Name=departDate", "Value=01/27/2019", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=01/28/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=61", ENDITEM, 
		"Name=findFlights.y", "Value=14", ENDITEM, 
		LAST);

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=r20swj13mr.microsoft.com");

	web_add_cookie("SRCHUID=V=2&GUID=31C4EF16C4CB4DBD80E91254E6BD50CF&dmnchg=1; DOMAIN=r20swj13mr.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20181005; DOMAIN=r20swj13mr.microsoft.com");

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=120;385;01/27/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=31", ENDITEM, 
		"Name=reserveFlights.y", "Value=6", ENDITEM, 
		EXTRARES, 
		"Url=https://r20swj13mr.microsoft.com/ieblocklist/v1/urlblockindex.bin", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(47);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=&#1040;&#1083;&#1077;&#1082;&#1089;&#1077;&#1081;", ENDITEM, 
		"Name=lastName", "Value=&#1042;&#1072;&#1089;&#1080;&#1083;&#1100;&#1077;&#1074;", ENDITEM, 
		"Name=address1", "Value=&#1055;&#1091;&#1096;&#1082;&#1080;&#1085;&#1072;", ENDITEM, 
		"Name=address2", "Value=&#1052;&#1086;&#1089;&#1082;&#1074;&#1072;", ENDITEM, 
		"Name=pass1", "Value=&#1048;&#1084;&#1103; &#1087;&#1072;&#1089;&#1072;&#1078;&#1080;&#1088;&#1072;", ENDITEM, 
		"Name=creditCard", "Value=987654321", ENDITEM, 
		"Name=expDate", "Value=25.22", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=120;385;01/27/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=49", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		LAST);

	lr_think_time(30);

	lr_start_transaction("UC04_TR00_Cancel_Flight");

	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TR00_Cancel_Flight",LR_AUTO);

	lr_think_time(29);

	lr_start_transaction("UC04_TR01_DELETE");

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
		"Name=flightID", "Value=4-0-92", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=removeFlights.x", "Value=44", ENDITEM, 
		"Name=removeFlights.y", "Value=13", ENDITEM, 
		LAST);

	lr_end_transaction("UC04_TR01_DELETE",LR_AUTO);

	lr_think_time(4);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}