#include <stdio.h>
void mystrcpy(char *ptr,char *des)
{
    while(*ptr!='\0')
    {
        *des = *ptr;
        ptr++;
        des++;
    }
    *des = '\0';
    return ;
}
int main()
{
    int i;
    char arr1[15]="Hello world",*ptr,arr2[15],*des;
    ptr = arr1;
    des = arr2;
    mystrcpy(ptr,des);
    for(i=0;*des!='\0';des++,i++);
    printf("String Length :%d\n",i);
    return 0;
}
