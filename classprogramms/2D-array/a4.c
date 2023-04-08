/*#include<stdio.h>
int main(){
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
        printf("enter the value :");
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }}
    
    int sum =0;
     for(i=0;i<3;i++)
    for(j=0;j<3;j++){
    sum+=a[i][j]; }
   printf("sum of elements of matrix:%d",sum);
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
        printf("enter the value :");
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }}
    
    
     for(i=0;i<3;i++){
       
         int sum =0;
    for(j=0;j<3;j++){
    sum+=a[i][j]; }
     }
   
    return 0;}*/
 /*/   #include<stdio.h>
    #include<math.h> 
int main(){
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
        printf("enter the value :");
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",a[j][i]);
    }}
    
      int sum =0;
      j=1;
     int  k=2;
     for(i=0;i<3;i++){
     int   p=pow(-1,i);
       if(i==2)
       k=1;
       sum+= (a[0][i]*(a[1][j]*a[2][k]-a[2][j]*a[1][k]))*p ;
       j=0;}
       
       printf("\n determinant of matrix:%d", sum);
    return 0;}*/
     #include<stdio.h>
     int main(){
        int a[3][4]={{1,2,3,4},{5,6,7,8},{9,8,7,6}};
        int i,j,count =0;
        int *row_addr[3 * 4], *col_addr[3 * 4];
        for(i=0;i<3;i++){
       printf("\n");
       for(j=0;j<4;j++){
        printf("%d\t",a[i][j]);
        row_addr[count] = &a[i][j];
            col_addr[count] = &a[j][i];
            count++;
    }}
     printf("\nRow-major-wise printing of values:\n");
    for(i = 0; i < 3* 4; i++) {
        printf("%d\t", *row_addr[i]);
        printf("Address: %p\n", row_addr[i]);}
        
     printf("\nColumn-major-wise printing of values:\n");
    for(i = 0; i < 3* 4; i++) {
        printf("%d\t", *col_addr[i]);
        printf("Address: %p\n", col_addr[i]);}
    
     return 0;
     }