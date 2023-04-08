#include<stdio.h>
int main(){
    int i,j;
    int a[3][3],b[3][3];
     printf("\nenter the elements for 1 matrix:.");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
    printf("\nenter the no.");
    scanf("%d",&a[i][j]);}
     printf("\nenter the elements for 2 matrix:.");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
    printf("\nenter the no.");
    scanf("%d",&b[i][j]);}
     printf("\n1 matrix is :.");
     for(i=0;i<3;i++){

     printf("\n");
     for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
     }
      printf("\n 2 matrix is :.");
     for(i=0;i<3;i++){
        printf("\n");
     for(j=0;j<3;j++)
        printf("%d\t",b[i][j]);
     }
     int flag=0;
      for(i=0;i<3;i++)
       for(j=0;j<3;j++){
    
     if(a[i][j]!=b[i][j])
     flag=0;
       }
       if(flag==0)
     printf("the two matices are equal");
     else 
     printf("not equal matrices");
     
      
       
      
     
     
   
     
return 0;

}
#include<stdio.h>
int main(){
   int i,n;
    
   for(n=2;n<=1000;n++){
       int isprime=1;
    for(i=2;i<n;i++){
        if(n%i==0){
        isprime=0;
        break;
    }}
    if(isprime==1)
    printf("%d\t",n);
    }
    return 0;
   }
