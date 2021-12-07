#include<stdio.h>
main()
{
	int basic,da,pf,hra,lic,netsal;
	printf("ENTER BASIC SALARY:");
	scanf("%d",&basic);
	da=(2*basic)/100;
	hra=(5*basic)/100;
	pf=500;
	lic=(3*basic)/100;
	netsal=basic+da+hra-pf-lic;
	printf("NET SALARY=%d",netsal);
}
