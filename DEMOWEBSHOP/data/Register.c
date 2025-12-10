Register()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("demowebshop.tricentis.com", 
		"URL=https://demowebshop.tricentis.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Registration");

	web_url("Register", 
		"URL=https://demowebshop.tricentis.com/register", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("register", 
		"Action=https://demowebshop.tricentis.com/register", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/register", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=__RequestVerificationToken", "Value=x0rJo4vYB-N4JuJqnPHZHV_QcU0mXaUxQknd6hhbww4BlxUZp5K9d7MBheHkYtyhRCtfGby58uoVIB5Rz5vpnO5k3WF32n-ZtltBTJVqs-s1", ENDITEM, 
		"Name=Gender", "Value=M", ENDITEM, 
		"Name=FirstName", "Value=Amirdhesh", ENDITEM, 
		"Name=LastName", "Value=S", ENDITEM, 
		"Name=Email", "Value=amirdhesh123@email.com", ENDITEM, 
		"Name=Password", "Value=amir123", ENDITEM, 
		"Name=ConfirmPassword", "Value=amir123", ENDITEM, 
		"Name=register-button", "Value=Register", ENDITEM, 
		LAST);

	web_url("Tricentis Demo Web Shop", 
		"URL=https://demowebshop.tricentis.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/registerresult/1", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Registration",LR_AUTO);

	web_url("Log out", 
		"URL=https://demowebshop.tricentis.com/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
