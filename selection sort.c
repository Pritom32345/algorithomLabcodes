#include<stdio.h>
void selection_sort(int a[],int n)
{
 for(int i=0;i<n-1;i++){
    int min = i;

 for(int j=i+1;j<n;j++){
    if(a[j]<a[min]){
    min=j;
    }
 }
if(min!=i){
int    temp = a[i];
    a[i]=a[min];
    a[min]=temp;
}
 }
}
int main(){
int a[]={10,5,30,4,9};
selection_sort(a,5);
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}
}

