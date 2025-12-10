Logout()
{

	lr_start_transaction("Logout");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("logout", 
		"URL=https://demowebshop.tricentis.com/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	return 0;
}