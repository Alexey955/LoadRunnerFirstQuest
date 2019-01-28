UC03_Ordering()
{
	lr_start_transaction("UC03_TR00_Reservation_Tickets");

	web_reg_find("Text=First Name", LAST);
	web_submit_form("reservations.pl_2", 
		"Snapshot=t190.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM, 
		"Name=reserveFlights.x", "Value=47", ENDITEM, 
		"Name=reserveFlights.y", "Value=4", ENDITEM, 
		LAST);

	lr_end_transaction("UC03_TR00_Reservation_Tickets",LR_AUTO);
	lr_think_time(4);

	create_random_credit_card();
	
	lr_start_transaction("UC03_TR01_Payment_Details");

	web_reg_find("Text=Thank you for booking through Web Tours.", LAST);
	web_submit_form("reservations.pl_3", 
		"Snapshot=t191.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=Pushkina", ENDITEM, 
		"Name=address2", "Value=Moscow", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value={creditCard}", ENDITEM, 
		"Name=expDate", "Value=12/21", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=47", ENDITEM, 
		"Name=buyFlights.y", "Value=5", ENDITEM, 
		LAST);

	lr_end_transaction("UC03_TR01_Payment_Details",LR_AUTO);
	lr_think_time(3);

	return 0;
}

create_random_credit_card(){
	int randNumThree;
	randNumThree = 1000 + rand() % 9999;
	
	lr_param_sprintf("creditCard", "%i", randNumThree);
}