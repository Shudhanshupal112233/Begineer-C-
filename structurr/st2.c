#include<stdio.h>
#include<string.h>
struct student{
    int st_id;
    int fees;
    char course[50];

};
int main(){
    struct student a[10];
    int i,flag,key,pos;
    flag=0;
    for(i=0;i<3;i++){
        printf("\nenter the student id");
        scanf("%d",&a[i].st_id);
        printf("\nenter the student fees :");
        scanf("%d",&a[i].fees);
        printf("\n enter the course :");
        scanf("\n%c ", a[i].course);
    }
    printf("\nenter the st.id  for the search:");
    scanf("%d",&key);
    for(i=0;i<3;i++){
    if(a[i].st_id == key){
    flag = 1;
    pos=i;
    break;}
    }

    if(flag==1){
        printf("\nthe details u need is:");
        printf("\nthe student id %d",a[pos].st_id);
        printf("\nthe fees is %d",a[pos].fees);
        printf("\nthe  course  is %c",a[pos].course);
        printf("\npostion is:%d",pos);
    }
    else
    printf(" no records found");

    return 0;
}