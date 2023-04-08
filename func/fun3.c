#include<stdio.h>
void arraysearch(int[],int,int);
int main(){
    int a[100],size ,i,key;
    printf("enter the size:");
        scanf("%d",&size);

       for(i=0;i<size;i++){
        printf("enter the no.:");
        scanf("%d",&a[i]);
        }
         printf("enter the key for linear search:");
         scanf("%d",&key);

        arraysearch(a,size,key);
      
        return 0;

    }


void arraysearch(int a[],int size,int key){
    int flag=0;
   int i;
    int pos;
   
    for(i=0;i<size;i++){
        if(a[i]==key){
        flag=1;
        pos=i+1;
        break;}
  }
     if(flag==1)
  printf("the position of searched no. is %d ",pos);
  else
  printf("u entered wrong no.");
  
 
}