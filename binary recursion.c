#include<stdio.h>
int binary_search(int a[],int l,int r,int x){

if(r>=l){
    int mid = l+(r-1)/2;

  if(x == a[mid]){
    return mid;
  }
  else if(a[mid]>x){
   return binary_search(a,l,mid-1,x);
  }
  else if(a[mid]<x){
      return binary_search(a,mid+1,r,x);

  }
}
return -1;
}
int main(){
int a[100],n,x;
printf("Enter number of elements:");
scanf("%d",&n);
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Enter number to search:");
scanf("%d",&x);
int index =binary_search(a,0,n-1,x);
if(index!=-1){
    printf("Found at index %d",index);
}
else{
    printf("Not found");
}
}

