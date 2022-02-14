#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the values:\n");
    scanf("%d%d",&x,&y);
    printf("before swap:%d %d\n",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("after swap:%d %d\n",x,y);
    return 0;
}



