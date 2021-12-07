#include<stdio.h>
main()
{
	int a,b;
	printf("ENTER TWO NUMBERS:");
	scanf("%d%d",&a,&b);
	printf("%d bitwise and %d=%d",a,b,a&b);
	printf("\n%d bitwise or %d=%d",a,b,a|b);
	printf("\n%d bitwise exclusive or %d=%d",a,b,a^b);
}
