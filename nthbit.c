#include <stdio.h>

int main()
{
    int x,p;
    
    printf("enter the x value: ");
    scanf("%d",&x);
    printf("enter to chek bit: ");
    scanf("%d",&p);
    if(x&(0x1<<p))
    printf("bit is set");
    else
    printf("bit is not set");
    return 0;
}

