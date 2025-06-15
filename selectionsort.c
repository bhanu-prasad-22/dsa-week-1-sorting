#include<stdio.h>
#include<stdlib.h>
int arr[20];
int n;
void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                  int temp=arr[min];
                  arr[min]=arr[j];
                  arr[j]=temp;
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
         SelectionSort(arr,n);
         printf("After sorting\n");
         for(int i=0;i<n;i++)
         {
            printf("%d ",arr[i]);
         }
}