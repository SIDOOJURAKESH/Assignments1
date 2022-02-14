#include <stdio.h>
void swap(void *a,void *b)
{
   // *(int *)a = (*(int *)a * *(int *)b) / (*(int *)b = *(int *)a);
   int temp;
   temp=*(int *)a;
   *(int *)a=*(int *)b;
   *(int *)b=temp;
    printf("After swap : a =%d,b=%d\n",*(int*)a,*(int*)b);

}
int main()
{
    int a,b;
    printf("enter the two values: ");
    scanf("%d%d",&a,&b);
    printf("Before swap : a = %d , b =%d\n",a,b);
    swap(&a,&b);
    return 0;
}
