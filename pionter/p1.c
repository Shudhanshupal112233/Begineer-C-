#include<stdio.h>
int main(){
    int a[5],*p,i;

    for(i=0;i<5;i++){
        printf("enter the number :");
        scanf("%d",&a[i]);
     }
     p=&a[0];
     printf("the array is :");
     for(i=0;i<5;i++){
       printf("%d \t",*(p+i));
     }
     return 0;
}