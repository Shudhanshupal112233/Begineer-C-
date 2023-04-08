#include<stdio.h>
int modify(int* );
int main(){
  int i;
    int arr[]={12,5,35,87,4,3,9,7,24,6};
    modify(arr);
    for(i=0;i<10;i++){
     printf("%d,",arr[i]);
    }

  }
  int modify(int *ele){
    int i;
    for(i=0;i<10;i++,ele++-)
    *ele *=3;
    
    return *ele;
  }