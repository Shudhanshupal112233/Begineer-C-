#include<stdio.h>
int main(){
    int a[10],i,key,flag=0,count=0;
    printf("enter 10 number:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter the key for search:");
    scanf("%d",&key);
     for(i=0;i<10;i++){
        if(a[i]==key){
            flag =1;
            count++;
        }
    }
    if(flag==1){
        printf("this number is present in the array ");
        printf(" and no. of times it appears in array :%d",count );
    }
    return 0;
}