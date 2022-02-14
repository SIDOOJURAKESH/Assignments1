#include<stdio.h>
void inc(int *ptr,int size)
{
    int i,j,temp,flag;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            flag = 0;
            if(*(ptr + j) > *(ptr+j+1))
            {
                temp = *(ptr+j);
                *(ptr + j) = *(ptr + j+1);
                *(ptr + j+1)=temp;
                flag =1;
            }
        }
        if(flag==0)
         break;
    }
    printf("Increment Order\n");
    for(i=0;i<size;i++)
       printf("%d ",*(ptr+i));
       return ;
}


int main()
{
    int arr[]={20,43,88,65,100,30,16,78,2};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    inc(arr,size);
    return 0;
}
