#include<stdio.h>
int main()
{
    int i=0;
    char str[30] = {"123 This"};
    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
        {
            while(str[i] != ' ')
            {
                printf("%c",str[i]);
                i++;
            }
            i=30;
        }
        i++;
    }
    return 0;
}
