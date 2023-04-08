#include<stdio.h>
int main(){
    int arr[30],num,i,loc;
    printf("enter the no. of element:");
    scanf("%d",&num);
    printf("enter %d elements",num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter  the  element location to be deleted:");
    scanf("%d",&loc);
    while(loc<num){
        arr[loc-1]=arr[loc];
        loc++;
      
    }
    num--
    for(i=0;i<num;i++){
         printf("\n%d",arr[i]);
    }
    return 0;
}