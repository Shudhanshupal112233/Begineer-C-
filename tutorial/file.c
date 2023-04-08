#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("file.txt","w");
    fputs("hello to the world of file handling ",fp);
    fclose(fp);
    printf("file created succesfully ");
    getch();
    return 0;
}