#include <stdio.h>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(arr[j]>arr[j+1])
    swap(&arr[j],&arr[j+1]);
}
void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d\n",arr[i]);
}
int main ()
{
    int arr[]={12,3,4,6,2,55,23,87};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printf("after sorting:");
    printarray(arr,n);
    return 0;
}
