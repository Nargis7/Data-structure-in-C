#include<stdio.h>
int binarysearch(int array[],int target, int start,int end){
    while(start<=end){
     int mid= start + (end-start)/2;
     if(target==array[mid])
     return mid;
     if(target>array[mid])
     start=mid+1;
     else
       end=mid-1;  
}
return -1;
}
int main(){
    int array[]={2,4,5,7,14,17,19,22};
    int n=sizeof(array)/sizeof(array[0]);
    int target=22;
    int result = binarysearch(array,target,0,n-1);
    if(result==-1)
        printf("not found");
    else
    printf("Elment is found at idx:%d",result);    
    return 0;
}