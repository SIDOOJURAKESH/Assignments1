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
    char arr1[15]="Hello world",*ptr,arr2[15],*des;
    ptr = arr1;
    des = arr2;
    mystrcpy(ptr,des);
    printf("String :%s\n",des);
    return 0;
}
