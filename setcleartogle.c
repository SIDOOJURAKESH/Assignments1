#include <stdio.h>

int main()
{
int x,p;
printf("enter the x value: ");
scanf("%d",&x);
printf("enter the p value: ");
scanf("%d",&p);
x=x|(0x1<<p);
printf("after set:%d\n",x);
x=x&(~(0x1<<p));
printf("after clear:%d\n",x);
x=x^(0x1<<p);
printf("after toggle:%d\n",x);
return 0;
}


