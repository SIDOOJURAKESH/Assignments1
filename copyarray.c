#include <stdio.h>

int main()

{
    int  i,arr1[]={1,2,3,4,5};
    int length=5;
    int arr2[length];
    for(int i=0;i<length;i++)
    {
    arr2[i]=arr1[i];
    }
    printf("before copy: \n");
    for(int i=0;i<length;i++)
    {
    printf("%d\n",arr1[i]);
}
    printf("after copy: \n");
    for(int i=0;i<length;i++)
    {
    printf("%d\n",arr2[i]);
}

return 0;
}
