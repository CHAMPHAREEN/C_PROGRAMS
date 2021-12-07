#include<stdio.h>
main()
{
	float tf,tc=0;
	printf("ENTER TEMPERATURE IN FARENHEIT:");
	scanf("%f",&tf);
	tc=(5*(tf-32))/9;
	printf("TEMPERATURE IN CELSIUS=%f",tc);
}
