UC04_Cancel()
{
	int i;

	lr_start_transaction("UCO4_TR00_Cancel_Flight");
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
//		"Name=flightID", "Value=4-0-92", ENDITEM, 
//		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=flightID", "Value={flightID_1}", ENDITEM, 
		"Name=.cgifields", "Value={cgifields_1}", ENDITEM, 
		"Name=removeFlights.x", "Value=44", ENDITEM, 
		"Name=removeFlights.y", "Value=13", ENDITEM, 
		LAST);

	lr_end_transaction("UCO4_TR00_Cancel_Flight",LR_AUTO);

//	lr_save_string("1=on&","finalvalue");
//	for(i=1;i<lr_paramarr_len("flightID");i++){
//		lr_save_string(lr_paramarr_idx("flightID",i),"flightID");
//		lr_save_string(lr_paramarr_idx("cgifields",i),"cgifields");
//		lr_save_string(lr_eval_string("{finalvalue}flightID={flightID}&.cgifields={cgifields}&"),"finalvalue");
//	}
	
//	lr_message({flightID});
//	lr_message({cgifields});

	lr_think_time(8);
	
//	web_custom_request("web_custom_request",
//		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl",
//		"Method=POST",
//		"TargetFrame=",
//		"Resource=0",
//		"Referer=",
//		"Body={finalvalue}removeFlights.x=44&removeFlights.y=13",
//		LAST);

	return 0;
}