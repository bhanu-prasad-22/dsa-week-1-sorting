#include<stdio.h>
#include<stdlib.h>
int arr[20];
int n;
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                  int temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
            }
        }
    }
}
void main(){
         printf("enter no.of elements:");
         scanf("%d",&n);
         printf("\nenter %d elements \n",n);
         for(int i=0;i<n;i++)
         {
            scanf("%d",&arr[i]);
         }
         BubbleSort(arr,n);
         printf("After sorting\n");
         for(int i=0;i<n;i++)
         {
            printf("%d ",arr[i]);
         }
}