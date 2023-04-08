#include<stdio.h>
int main(){
    int a[5][5],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
        printf("enter the elements:");
        scanf("%d",&a[i][j]);
}
 for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }}
    int max=a[0][0];
    for(i=0;i<3;i++)
     for(j=0;j<3;j++){
        if(a[i][j]>max)
        max=a[i][j];
     }
     printf("\nlargest number from the matrice:%d",max);

    return 0;

}