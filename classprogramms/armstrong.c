
#include<stdio.h>
#include<math.h>
int  main(){
    int i, arm=0,digit=0;
    int num,n, tepm,rem;
    for(i=1;i<=50000;i++){
        num=n=tepm=i;
        while(n>0){
            digit++;
        n=n/10;
        
    }
   
    while(num>0){
        rem=num%10;
        arm =arm + pow(rem,digit);
        num =num/10;

    }
    if(tepm==arm)
    printf(" %d",tepm);
    digit =0;
    arm=0;
    }
   
    return 0;

}

   