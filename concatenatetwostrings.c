#include <stdio.h>

int main()
{
    char str1[100],str2[200];
    printf("enter two strings: \n");
    scanf("%s%s",str1,str2);
    int i=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    while((str1[i]=str2[j])!='\0')
    {
        i++;
        j++;
    }
    printf("%s\n",str1);
    i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    printf("length of concat string1: %d\n",i);
    return 0;
}

