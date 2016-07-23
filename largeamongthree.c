#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d",&a,&b,&c);
if(a<b)
{
 if(a<c)
 printf("a is larger");
}
else if(b<c)
{
printf("b is greater");
}
else
printf("c is greater");
return 0;
}
