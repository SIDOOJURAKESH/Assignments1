#include <stdio.h>
#include<string.h>

int main()
{
    char str[10];
    int i,j,n,count=0;
    printf("enter the string: ");
    scanf("%[^\n]s",str);
    n=strlen(str);
    j=n-1;
    for(i=0;i<j;i++,j--)
    {
        if(str[i]==str[j])
        count++;
        
    }
    if(count==n/2)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
