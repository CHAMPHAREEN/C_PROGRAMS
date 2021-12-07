#include<stdio.h>
main()
{
	float a=32.4,c,d,e,f;
	c=++a;
	//C AND A BOTH ARE33.4
	//D GETS PRINTED AS 33.4 BUT A BECOMES 34.4
	d=a++;
	//E AND A ARE 33.4 NOW
	e=--a;
	//F IS PRINTED AS 33.4 BUT A IS 32.4
	f=a--;
	printf("%f \n%f\n%f\n%f\n%f",a,c,d,e,f);
}
