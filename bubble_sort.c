#include<stdio.h>
void bubblesort(int a[' '],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<((n-i)-1);j++)
    {
      if(a[j]>a[j+1])
      {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
}
void display(int a[' '],int n)
{
  int i,j;
  printf("\narray=");
  for(i=0;i<n;i++)
  {
    printf("%3d",a[i]);
  }
}
int main()
{
int n,a[' '],i,j;
printf("enter size of array:");
scanf("%d",&n);
printf("enter elements :");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
display(a,n);
bubblesort(a,n);
printf("\nyour sorted array= \n");
display(a,n);
  return 0;
}