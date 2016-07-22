#include<stdio.h>
int main()
{
int a=10,b=20,sum;;
int *p,*q;
*p=a;
*q=b;
sum=*p+*q;
printf("%d",sum);
return 0;
}
