Search()
{

	lr_start_transaction("Search");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("searchtermautocomplete", 
		"URL=https://demowebshop.tricentis.com/catalog/searchtermautocomplete?term=book", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Search", 
		LAST);

	web_url("search", 
		"URL=https://demowebshop.tricentis.com/search?q=book", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://demowebshop.tricentis.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Search",LR_AUTO);

	return 0;
}
