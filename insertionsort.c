 #include<stdio.h>
#include<stdlib.h>
int arr[20];
int n;
void InsertionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
               arr[j+1]=arr[j];
               j=j-1;
               arr[j+1]=key;
           }
    }
        
}
void main()
{
         printf("enter no.of elements:");
         scanf("%d",&n);
         printf("\nenter %d elements \n",n);
         for(int i=0;i<n;i++)
         {
            scanf("%d",&arr[i]);
         }
         InsertionSort(arr,n);
         printf("After sorting\n");
         for(int i=0;i<n;i++)
         {
            printf("%d ",arr[i]);
         }
}