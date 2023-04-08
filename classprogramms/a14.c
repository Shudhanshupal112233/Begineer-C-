#include<stdio.h>
int main(){
    int choice,num,loc,element,a[30],i;
    printf(" enter the choice:\n 1.unsorted array \n 2.sorted array");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
       printf("enter the no. of element:");
       scanf("%d",&num);
       printf("enter the %d element:",num);
       for(i = 0;i<num;i++){
        scanf("%d",&a[i]);
        }
        
        printf("enter the element location to be deleted:");
        scanf("%d",&loc);
        while(loc<num){
            a[loc-1]=a[loc];
            loc++;
        }
        num--;

         for(i=0;i<num;i++){
            printf("%d  ",a[i]);
           break;
    case 2:
      printf("enter the no. of element:");
       scanf("%d",&num);
       printf("enter the %d element:",num);
       for(int i = 0;i<num;i++){
        scanf("%d",&a[i]);
        }
        printf("enter the element for deletion :");
        scanf("%d",&element);
         
         int found=0;
          for(int i = 0;i<num;i++){
            if(a[i]==element){
                found=1;
                loc=i;
               break;
                
            }
            
            }
            if(found==1){
                 for(int i = loc;i<num-1;i++)
                    a[i]=a[i+1];
            }
            else 
            printf(" u entered wrong" );
        
        
        
    
        for(i=0;i<num-1;i++){
            printf("%d  ",a[i]);
        }
        
   break;
    
    default:
    printf("u enter the wrong choice");
        break;
    }

    }
    }