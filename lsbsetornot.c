#include<stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n & 1 == 1)
    {
        printf("LSB bit is set\n");
    }
    else
    {
        printf("LSB bit is not set");
        
    }
    return 0;
}
