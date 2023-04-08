#include<stdio.h>
int main(){
    int *small,a[10];
    int i;
    for(i=0;i<10;i++){
        printf("enter the no.:");
        scanf("%d",&a[i]);

    }
    small=&a[0];

     for(i=1;i<10;i++){
        if(*(a+i)<*small){
            *small= *(a+i) ;
        }

     }
     printf("small is:%d",*small);
    return 0;
}