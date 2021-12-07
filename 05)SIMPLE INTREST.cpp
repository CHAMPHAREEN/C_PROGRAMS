#include<stdio.h>
main()
{
	float p,t,r,si=0;
	printf("ENTER PRINCIPAL,TIME,RATE OF INTEREST:");
	scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
	printf("SIMPLE INTREST IS=%f",si);
	}
