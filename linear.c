#include<stdio.h>
int linear_search(int a[],int n, int x){
 for(int i=0;i<n;i++){
    if(a[i]==x){
        return i;
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
int index =linear_search(a,n,x);
if(index!=-1){
    printf("Found at %d\n",index);
}
else{
    printf("Not found");
}
}

