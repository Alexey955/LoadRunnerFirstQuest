UC04_Cancel()
{
	int number;
	number = find_num_credit_card_current_user();
	
	lr_param_sprintf("resultFlightId", "");

	create_cancel_request(number);

	lr_think_time(4);

	lr_start_transaction("UC04_TR00_Itinerary_Tickets_Cancel");
	
//	web_reg_find("Text=Flight Transaction Summary", LAST);
	web_custom_request("web_custom_request",
		"URL=http://127.0.0.1:1080/cgi-bin/itinerary.pl",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={resultFlightId2}",
		LAST);

	lr_end_transaction("UC04_TR00_Itinerary_Tickets_Cancel",LR_AUTO);
	
	return 0;
}

int find_num_credit_card_current_user(){
	int i;
	
	for(i = 1; i <= lr_paramarr_len("cardArray"); i++){
		if(strcmp (lr_eval_string("{creditCard}"), lr_paramarr_idx("cardArray", i)) == 0){
		 return i;
		}
	}
}

create_cancel_request(int number){
	int i;
	
	lr_param_sprintf("resultFlightId", "");

	for(i = 1; i <= lr_paramarr_len("flightID"); i++){		
		if(i == number){
			lr_param_sprintf("resultFlightId","%s%i=on&%s%s%s", lr_eval_string("{resultFlightId}"), number,"flightID=", lr_paramarr_idx("flightID", i),"&");
		}
		else lr_param_sprintf("resultFlightId","%s%s%s%s",lr_eval_string("{resultFlightId}"),"flightID=", lr_paramarr_idx("flightID", i),"&");	
	}
	
	lr_param_sprintf("resultFlightId2","%s%s",lr_eval_string("{resultFlightId}"), "removeFlights.x=47&removeFlights.y=5&.cgifields=1");
}