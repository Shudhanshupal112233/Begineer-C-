#include<stdio.h>
int main(){
    char a[50], b[50],c[100];
    int i,j;
    i=j=0;
    printf("\n enter the first string: ");
    gets(a);
      printf("\n enter the second string: ");
    gets(b);
    while(a[i]!='\0'){
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0'){
        c[i]=b[j];
        i++,j++;
    }
    c[i]='\0';
    printf("the conc string:%s",c);
    return 0;
}