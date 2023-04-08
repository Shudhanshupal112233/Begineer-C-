#include<stdio.h>
int main(){
    int a[3][3],b[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
        printf("enter the elements:");
        scanf("%d",&a[i][j]);}
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }}
    
    
    int flag=1;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    if(a[i][j]!=a[j][i]){
   flag=0;
   break;}
    }}
    if(flag==1){
        printf("\nmatrix is symmetric ");
    }
    else
    printf("\n not symmetric");
    return 0;
    }