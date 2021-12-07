#include<stdio.h>
main()
{
	int a,b,c,r;
	printf("ENTER VALUES FOR a AND b:");
	scanf("%d %d",&a,&b);
	c=a/b;
	r=a-b*c;
	printf("QUOTIENT AND REMAINDER=%d,%d",c,r);
}
