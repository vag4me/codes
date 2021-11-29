#include <stdio.h>
#include <stdlib.h>

int main()
{
	int area;
	printf("this code will help you find the legislation about data protection in you area\n");
	printf(" press 1 and ENDER for the EU\n press 2 and ENTER for the USA\n press 3 and ENDER for South Africa\n press 4 and ENDER for Australia\n press 5 end ENTER for japan\n");
	scanf("%d", &area);// 1η προσπαθεια συλλογης δεδομενου χωρας 
	 

	while (area <= 0 || area > 5)
	{
		printf("error: invalid number_please try again\n");//error γιατι εδωσε νουμερο παν η κατω απο 5
		scanf("%d", &area);// 2η προσπαθεια συλλογης δεδομενου χωρας
	}




	if (area == 1)
	{
		system("start https://ec.europa.eu/info/law/law-topic/data-protection/data-protection-eu_en");
	}
	else if (area == 2)
	{
		system("start https://www.congress.gov/bill/116th-congress/senate-bill/1214/text");
	}
	else if (area == 3)
	{
		system("start https://www.gov.za/sites/default/files/gcis_document/201409/3706726-11act4of2013protectionofpersonalinforcorrect.pdf");
	}
	else if (area == 4)
	{
		system("start https://www.ag.gov.au/rights-and-protections/privacy");
	}
	else if (area == 5)
	{
		system("start https://www.cas.go.jp/jp/seisaku/hourei/data/APPI.pdf");
	}
}