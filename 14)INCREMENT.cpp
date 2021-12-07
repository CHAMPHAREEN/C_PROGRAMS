#include<stdio.h>
main()
{
	int a=30,b=23,c,d,e;
	d=++a;
	e=b++;
	c=(++a)+(b++);
	//FIRST a BECOMES 31 AND b 24 THEN a BECOMES 32 IN c= THEREFORE c=56
	printf("%d %d %d %d %d",c,d,e,a,b);
}
