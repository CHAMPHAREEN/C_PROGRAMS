#include<stdio.h>
main()
{
	int a,b,c;
	printf("ENTER TWO NUMBERS:");
	scanf("%d%d",&a,&b);
	c=a%b;
	printf("remainder of %d divided by %d=%d",a,b,c);
}
