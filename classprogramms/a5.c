#include<stdio.h>
int main(){
    
    int a[10] = {10,45,67,98,78,90,23,67,34,10};
    int i,j;
    
       for(i=0;i<5;i++){
       for(j=9;j>5;j--){
       if(a[i]==a[j])
       printf(" \nthe  value of a[%d] and a[%d] are equal",i,j);
       continue;}
       }
       return 0;
}