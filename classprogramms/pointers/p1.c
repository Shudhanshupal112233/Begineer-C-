/*#include<stdio.h>
//passing element by element (call by value )
int rev(int,int);
int main( )
{
int arr[5],i;
for(i=0;i<5;i++){
    printf("enter the value arr[%d]=",i);
    scanf("%d",&arr[i]);

}
for(i=4;i>=0;i--)
rev(arr[i],i);
return 0;
}
int rev(int x, int j){
    int rev[5];
    printf("\nrev[%d]=%d",4-j,x);
}*/
#include<stdio.h>
//passing element by element (call by reference )
int rev(int*,int);
int main( )
{
int arr[5],i;
for(i=0;i<5;i++){
    printf("enter the value arr[%d]=",i);
    scanf("%d",&arr[i]);}
     
for(i=4;i>2;i--)
rev(&arr[0],i);
for(i=0;i<5;i++){
    printf("\narr[%d]=%d",i,arr[i]);
}

return 0;
}
int rev(int *j,int x){
    int temp,y;
    y=4-x;
    temp=*(j+x);
    *(j+x)=*(j+y);
    *(j+y)= temp ;


}      */

//#include<stdio.h>
//passing entire_array  (call by reference )
/*int rev(int*,int);
int main( )
{
int arr[5],i;
for(i=0;i<5;i++){
    printf("enter the value arr[%d]=",i);
    scanf("%d",&arr[i]);}
    rev(&arr[0],5);
    for(i=0;i<5;i++){
    printf("\narr[%d]=%d",i,arr[i]);
}
    return 0;
    }
     int rev(int*j,int x){
        int temp,i,y;
        y=4;
        for(i=0;i<x/2;i++){
        temp=*(j+i);
        *(j+i)=*(j+y);
         *(j+y)=temp;
         y--;
     }}*/
   //  #include<stdio.h>
// multiply array element by 3 (call by reference )
/*int mod(int*,int);
int main( )
{
int arr[5],i;
for(i=0;i<5;i++){
    printf("enter the value arr[%d]=",i);
    scanf("%d",&arr[i]);}
    mod(&arr[0],5);
    for(i=0;i<5;i++){
        printf("\n arr[%d]=%d",i,arr[i]);
    }
    return 0;
    }
    int mod(int *j,int x){
        for(int i=0;i<x;i++){
            *j=*j*3;
            j++;
        }
    }*/
  #include<stdio.h>
// smallest no passing entire array (call by reference )
/*int small(int*,int);
int main( )
{
int arr[5],i;
for(i=0;i<5;i++){
    printf("enter the value arr[%d]=",i);
    scanf("%d",&arr[i]);}
    small(&arr[0],5);
    return 0;
    }
int small(int *j,int x){
    
   int min= *(j+0);
    for(int i=0;i<x;i++){
        if(min>*j)
        min=*j;
        
        j++;
    }
    printf("min is :%d",min);
}    