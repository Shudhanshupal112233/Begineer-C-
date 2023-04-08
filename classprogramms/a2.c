#include<stdio.h>
int main(){
    int a[5],b[5],i;
    for(i=0;i<5;i++){
        printf("enter the no.:");
        scanf("%d",&a[i]);
    }
    printf("before reversing:");
    for(i=0;i<5;i++){
        printf(" %d,",a[i]);
    }
    for(i=4;i>=0;i--){
       b[i]=a[i];

    }
    printf("\nafter reversing :");
    for(i=4;i>=0;i--){
      
    printf(" %d,",b[i]);
    }

    return 0;
}