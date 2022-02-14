#include<stdio.h>
#define BITS sizeof(int) * 4
int main()
{
    int n,msb;
    printf("enter the number: ");
    scanf("%d",&n);
   
    msb=1<<(BITS-1);
    if((n & msb)==1)
    {
        printf("MSB bit is  set");
    }
    else
    {
        printf("MSB bit is not set");
        
    }
    return 0;
}

