#include<stdio.h>
main()
{
	float a,b,c,d;
	int e,f,g;
	printf("ENTER 4 VALUES:");
	scanf("f%f%f%f",&a,&b,&c,&d);
	e=(a>b)&&(c>d);
	f=(a>b)||(c>d);
	g=!(a<b);
	printf("%d %d %d",e,f,g);
}
