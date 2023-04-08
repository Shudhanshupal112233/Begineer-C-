#include<stdio.h>
int main(){
    int arr[30],num,i,loc,element;
    printf("enter the no. of element:");
    scanf("%d",&num);
    printf("enter %d elements",num);
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be inserted:");
    scanf("%d",&element);
    printf("enter  the  element  location   :");
    scanf("%d",&loc);
    for(i=num;i>=loc;i--)
    arr[i]=arr[i-1];
      
      arr[loc-1]= element;
    
    for(i=0;i<num;i++){
         printf("\n%d",arr[i]);
    }
    return 0;
}