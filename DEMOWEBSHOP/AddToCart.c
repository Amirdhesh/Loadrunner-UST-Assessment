AddToCart()
{

	lr_start_transaction("add to cart");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(19);

	web_url("health", 
		"URL=https://demowebshop.tricentis.com/health", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/search?q=book", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("1", 
		"Action=https://demowebshop.tricentis.com/addproducttocart/details/22/1", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/health", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=addtocart_22.EnteredQuantity", "Value=1", ENDITEM, 
		LAST);

	lr_end_transaction("add to cart",LR_AUTO);

	return 0;
}
