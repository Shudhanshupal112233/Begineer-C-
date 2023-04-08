#include<stdio.h>
struct employee{
    int code;
    char naam[40];
    float salary;
};
void display(struct employee * );
int main(){
    struct employee aa;
    printf("\nenter code:");
    scanf("%d",&aa.code);
    printf("\nenter name :");
    scanf(" %s",aa.naam);
    printf("\nenter the salary:");
    scanf("%f",&aa.salary);
    display(&aa);
    return 0;

}
void display(struct employee *aa){
    printf("\ncode:%d",aa->code);
    printf("\nname:%s",aa->naam);
    printf("\nsalary:%f",aa->salary);
}
