#include<stdio.h>
int main()
{
int a[10];
int n,sum,i;
float avg;
scanf("%d",&n);
for(i=1;i<=5;i++)
{
    scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/5;
printf("%d",sum);
printf("\n %f",avg);
return 0;
}
