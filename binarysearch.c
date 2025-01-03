#include<stdio.h>
#include<conio.h>
void BS(A,i,j,val)
int A[],i,j,val;
{
    int mid;
    if(i<=j)
    {
        mid=(i+j)/2;
        if(val==A[mid])
        printf("Element is found A[%d]=%d",mid,A[mid]);
        else if(val<A[mid])
        BS(A,i,mid-1,val);
        else
        BS(A,mid+1,j,val);
    }
    else
    {
        printf("element not found");
    }
}
void main(){
    int data[100],val,i,n,mid;
    printf("give n:\n");
    scanf("%d",&n);
    printf("n=%d",n);
    for( i = 0; i <n; i++)
    {
        scanf("%d",&data[i]);
    }
    printf("list of data array:\n");
    for ( i = 0; i < n; i++)
    {
        printf("data=[%d]=%d\n",i,data[i]);    
    }
    printf("enter searched element:\n");
    scanf("%d",&val);
    BS(data,0,n-1,val);
}
