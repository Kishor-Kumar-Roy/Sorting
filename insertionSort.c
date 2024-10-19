#include<stdio.h>
/*void insertionSort(int a[],int n) {
    int i,j,temp;
    for(i=1;i<n;i++) {
        temp=a[i];
        j=i-1;
        for(;j>=0;j--) {
            if(a[j]>temp) {
                a[j+1]=a[j];
            }
            else {
                break;
            }
        }
        a[j+1]=temp;
       
    }
} */

void insertionsort(int a[], int n) {
    int i,j,temp;
    for(i=1;i<n;i++) {
      temp=a[i];
      j=i-1;
      while(j>=0 && a[j]>temp) {
        a[j+1]=a[j];
        j--;
      }
      a[j+1]=temp;
    }
}
void display(int a[],int n){
    int i;
     for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }
}
int main(){
    int n,a[' '];
    printf("enter size of array: ");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        printf("enter elements of array: ");
        scanf("%d",&a[i]);
    }
    printf("\n your array before sorting: \n ");
    display(a,n);
    insertionSort(a,n);
    printf("\n your array after sorting: \n ");
    display(a,n);
}