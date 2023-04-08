#include<stdio.h>
int main(){
    int a[5] ={1,2,3,4,5};
    int i,t;
    printf("before interchange :");
    for(i=0;i<5;i++){
       
        printf(" %d",a[i]);}
    for(i=0;i<5;i=i+2){
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }  
    printf("\nafter interchange:");  
    for(i=0;i<5;i++){
           printf(" %d",a[i]);}
    
        
      

return 0;    
}