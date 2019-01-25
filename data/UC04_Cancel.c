UC04_Cancel()
{

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	lr_think_time(12);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=125429.379181855ztfVHHDpzQVzzzzHDiHVApztcVf", ENDITEM, 
		"Name=username", "Value=login0", ENDITEM, 
		"Name=password", "Value=password0", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	web_add_cookie("SRCHD=AF=IESS4N; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=68DC1504E1054ACCBA0DFFF01477392F&dmnchg=1; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20181226; DOMAIN=www.bing.com");

	web_add_cookie("MUID=08D12E060D366887178922D70C476981; DOMAIN=www.bing.com");

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Frankfurt", ENDITEM, 
		"Name=departDate", "Value=01/26/2019", ENDITEM, 
		"Name=arrive", "Value=London", ENDITEM, 
		"Name=returnDate", "Value=01/27/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=43", ENDITEM, 
		"Name=findFlights.y", "Value=12", ENDITEM, 
		LAST);

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=120;385;01/26/2019", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=39", ENDITEM, 
		"Name=reserveFlights.y", "Value=1", ENDITEM, 
		LAST);

	lr_think_time(48);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=Pushkina", ENDITEM, 
		"Name=address2", "Value=Moskow", ENDITEM, 
		"Name=pass1", "Value=PassName", ENDITEM, 
		"Name=creditCard", "Value=987654321", ENDITEM, 
		"Name=expDate", "Value=25.22", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=120;385;01/26/2019", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=58", ENDITEM, 
		"Name=buyFlights.y", "Value=9", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(25);

	lr_start_transaction("UC04_TR00_CancelPlease");

	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=0-0-1B", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=removeAllFlights.x", "Value=71", ENDITEM, 
		"Name=removeAllFlights.y", "Value=13", ENDITEM, 
		LAST);

	lr_end_transaction("UC04_TR00_CancelPlease",LR_AUTO);

	return 0;
}