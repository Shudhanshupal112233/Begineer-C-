#include<stdio.h>
int main(){
      int a[5],i,max,min;
    for(i=0;i<5;i++){
        printf("enter the no:");
        scanf("%d",&a[i]);

    }
    for(i=0;i<5;i++){
        a[i]=a[i+1];
    }
     for(i=0;i<5;i++){
        printf("a[%d]=%d\n",i,a[i]);
     }
     return 0;

    
}