Login()
{

	lr_start_transaction("Login");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(13);

	web_url("login", 
		"URL=https://demowebshop.tricentis.com/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("login_2", 
		"Action=https://demowebshop.tricentis.com/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/login", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Email", "Value=amir@email.com", ENDITEM, 
		"Name=Password", "Value=amir123", ENDITEM, 
		"Name=RememberMe", "Value=false", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	return 0;
}
