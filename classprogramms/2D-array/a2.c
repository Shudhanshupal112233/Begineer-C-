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
    printf("\nthe transppose of above matrice is:");
      for(i=0;i<3;i++){
      printf("\n");
    for(j=0;j<3;j++)
    
        printf("%d\t",a[j][i]);
    }
    return 0;
    }