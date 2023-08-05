
#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int        flag = 0;
 for(int i=0;i<n;i++){

    int min = i;

 for(int j=0;j<n-1-i;j++){
    if(a[j]>a[j+1]){
   int    temp = a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    flag=1;
    }
 }
if(flag==0){
    break;
 }
 }

}
int main(){
int a[]={10,5,30,4,9};
bubble_sort(a,5);
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}
}
