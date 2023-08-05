#include<stdio.h>
int binary_search(int a[],int n,int x){
int l,r,mid;
l=0;
r=n-1;
while(l<=r){
    mid=(l+r)/2;
  if(x == a[mid]){
    return mid;
  }
  else if(x>a[mid]){
    l=mid+1;
  }
  else if(x<a[mid]){
        r=mid-1;

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
int index =binary_search(a,n,x);
if(index!=-1){
    printf("Found at index %d",index);
}
else{
    printf("Not found");
}
}
