#include<stdio.h>
int main(){
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
        printf("enter the value:");
        scanf("%d",&a[i][j]);
    }
    printf("the no. in 2D array :");
    for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++)
    printf("%d\t",a[i][j]);}
    int sum =0;
    int som =0;
    int sum1=0;
   
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
        if(i==0 && j<3){
            sum = sum+a[i][j]; 
           }
        else if(i==1 && j<3){
            sum1 = sum1+a[i][j];
            }
         else if(i==2 && j<3){
            som = som+a[i][j]; 
          }  
        }    
         printf("\nthe sum of row1 elements of  array%d",sum);
        
        printf("\nthe sum of row2 elements of  array%d",sum1);
     
          printf("\nthe sum of row3 elements of  array%d",som);
    
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++)
        sum=sum+a[j][i];
        printf("\nthe sum of column %d is %d",i+1,sum);
    }
  

    
    return 0;
}

//no. of bytes of datatype
#include<stdio.h>
int main(){
    int i, n,a,rem,rev=0 ;
    printf("enter the no.");
       scanf("%d",&a);
    printf("enter the digits");

    scanf("%d",&n);
    for(i=1;i<=n;i++){
      rem=a%10;
      rev=rev*10+rem;
      a=a/10;
    }
    printf("%d",rev);
}
//swap
#include<stdio.h>
int main(){
    int a=10,b=20;
    int t =a;
    a=b;
    b=t;
    printf("%d %d",a,b);
}
//lower to upper
#include<stdio.h>
int main(){
   int i,n;
   for(n=2;n<=1000;i++){
    for(i=2;i<n;i++){
        if(n%i==0)
        break;
    }}
   
    printf("%d",i);
    return 0;
   }
