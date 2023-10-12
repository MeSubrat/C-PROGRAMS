#include<stdio.h>
int binarySearch(int arr[],int high,int low,int mid,int value);
int main()
{
    int arr[]={10,20,30,40,50,60};
    printf("Enter the element to be found : ");
    int value;
    scanf("%d",&value);
    int high=4;
    int low=0;
    int mid=(high+low)/2;
    int location=binarySearch(arr,high,low,mid,value);
    if(location==-1)
    {
        printf("Element not found in the array.\n");
    }
    else{
        printf("Element found at %dth Index\n", location);
        printf("Element found at %dth Position\n", location + 1);
    }
}
int binarySearch(int arr[],int high,int low,int mid,int value)
{
    while(low<=high)
    {
        if(arr[mid]==value)
        {
            return mid;
        }
        else if(arr[mid]>value)
        {
            high=mid-1;
            mid=(high+low)/2;
            binarySearch(arr,high,low,mid,value);
        }
        else
        {
            low=mid+1;
            mid=(high+low)/2;
            binarySearch(arr,high,low,mid,value);
        }
    }
    return -1;
}
