#include<stdio.h>
main()
{
	float a,b,c;	
	printf("ENTER VALUES FOR a AND b:");
	scanf("%f %f",&a,&b);
	c=(a<b)?a:b;
	printf("MINIMUM OF a AND b=%f",c);
}
