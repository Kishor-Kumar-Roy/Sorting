#include<stdio.h>
void selectionsort(int a[' '],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int minIndex=i;
        for (j=i+1;j<n;j++)
        {
            if(a[j]<a[minIndex]);
            {
            minIndex=j;
            }
        }
        int temp=a[i];
    a[i]=a[minIndex];
    a[minIndex]=temp;
    }
    
}
void display(int a[' '],int n)
{
    printf("\narray=");
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
}
int main()
{
    int a[' '],n,i,j;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,n);
    selectionsort(a,n);
    display(a,n);
}