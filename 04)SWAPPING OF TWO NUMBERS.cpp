#include<stdio.h>
main()
{
 float a,b,temp=0;
 printf("ENTER TWO NUMBERS");
 scanf("%f%f",&a,&b);
 temp=a;
 a=b;
 b=temp;
 printf("TWO NUMBERS AFTER SWAPPING=%f %f",a,b);	
}
