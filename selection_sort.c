#include<stdio.h>
void selectionSort(int a[' '],int n) {
    int i,j,temp,minIndex;
    for(i=0;i<n-1;i++){
        minIndex=i;
        for(j=i+1;j<n;j++) {
            if(a[j]<a[minIndex])
            {
                minIndex=j;
            }
        }
        temp=a[i];
   a[i]=a[minIndex];
   a[minIndex]=temp;
    }
}
void print(int a[],int n){
    int i;
    for( i=0;i<n;i++){
        printf("%3d",a[i]);
    }
}
int main(){
    int n,a[' '],i;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter element of array: ");
    for(i=0;i<n;i++){
        
        scanf("%d",&a[i]);
    }
    printf(" \n your array before sorting: ");
    print(a,n);
    selectionSort(a,n);
printf("\n your array after sorting: ");
print(a,n);
    return 0;
}