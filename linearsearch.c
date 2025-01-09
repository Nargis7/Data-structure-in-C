#include<stdio.h>
int search(int array[],int n,int x){
    // going through array sequentially
    for(int i=0;i<n;i++){
        if(array[i]==x){
           return i;
        }
         
    }
    return -1;
}

int main(){
    int array[]={12,14,0,4,9};
    int n=sizeof(array)/sizeof(array[0]);
    int x=4;
    int result = search(array,n,x);
    if(result==-1)
        printf("not found");
    else
    printf("Elment is found at idx:%d",result);  
    return 0;
}