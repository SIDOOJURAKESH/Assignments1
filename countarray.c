#include<stdio.h>
int main()
{
    int arr[] = {10,20,10,39,34,39,50,20,88,100,10};
    int i,j,size,flag,count;
    size = sizeof(arr)/sizeof(arr[0]);
    int freq[11] = {  };
    for(i=0;i<size;i++)
    {
        flag =0;
        count =1;
        if(freq[i]==0)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                flag =1;
                freq[j] = 1;
            }
        }
     } 
        if(flag==1)
            printf("%d is %d times repeated\n ",arr[i],count);
    }
    return 0;
}
