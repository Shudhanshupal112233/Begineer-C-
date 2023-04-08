#include<stdio.h>
int main(){
      int num,loc,element,a[30],i;
    printf("enter the no. of element:");
       scanf("%d",&num);
       printf("enter the %d element:",num);
       for(int i = 0;i<num;i++){
        scanf("%d",&a[i]);
        }
        printf("before reversing :");
         for(int i = 0;i<num;i++)
         printf("%d ",a[i]);
         printf("\nafter reversing :");
         for(int i = num-1;i>=0;i--){
            printf(" %d",a[i]);
         }
 return 0;
}