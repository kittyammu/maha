#include <stdio.h>
 int main()
{
    int num;
    scanf("%d", &num);
    if(num > 0)
    {
    printf("POSITIVE");
    }
    else if(num < 0)
    {
        printf("NEGATIVE");
    }
    else
    {
        printf("ZERO");
    }
     return 0;
} 
