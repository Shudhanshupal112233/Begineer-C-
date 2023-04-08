#include<stdio.h>
int main(){
    int a[10],i;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
  
    for(i=0;i<10;i++){
       printf(" \nenter  numbers:");
        scanf("%d,",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]>0)
        count1++;
        if(a[i]<0)
        count2++;
        if(a[i]%2==0)
        count3++;
        else 
        count4++;        
    }
    printf("positive number :%d",count1);
     printf(" \nnegative number :%d",count2);
      printf("\neven number :%d",count3);
       printf("\nodd number :%d",count4);

       return 0;

}