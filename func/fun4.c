#include<stdio.h>
void addmat(int[][10],int[][10],int ,int);
int main(){
    int a[10][10],b[10][10],row,col, i,j;
    printf("enter the no. of rows and column :");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    for(j=0;j<col;j++){
        printf("\nenter the no. for  first matrix");
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<row;i++)
    for(j=0;j<col;j++){
        printf("\nenter the no. for  second matrix");
        scanf("%d",&b[i][j]);
    }
    addmat(a,b,row,col);
    return 0;
}
void addmat(int a[][10],int b[][10],int row,int col){
    int c[10][10],i,j;
    for(i=0;i<row;i++)
    for(j=0;j<col;j++){
        c[i][j]=a[i][j] *b[i][j];
    }
     printf(" multiplication of above two matrix is :");
    for(i=0;i<row;i++){
        printf("\n");
    for(j=0;j<col;j++)
    printf("%d \t",c[i][j]);
    
}

}