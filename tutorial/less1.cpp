#include<stdio.h>
int main(){
    int a[5],i,j,t;
    for(i=0;i<5;i++){
    printf("\nenter no.");
    scanf("%d" ,&a[i]);}
    for(i=0;i<4;i++)
    for(j=i+1;j<5;j++){
        if(a[i]<a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    printf("array in dsecending ");
    for(i=0;i<5;i++)
    printf("%d",a[i]);
    return 0;
}