#include <stdio.h>

int main(){
            int n1,n2,cn1,cn2,cn3,cn4,choice;
            char continue_or_not;
            printf("    \n\tWELLCOME TO CALCULATE YOUR STUFF:)\t\n");

do
{
    



            printf("\nenter your number 1:)");
            scanf("%d",&n1);
            printf("\nenter your number 2:)");
            scanf("%d",&n2);
            printf("\nselect your operator");

            printf("\n1 :  -");
            printf("\n2 :  +");
            printf("\n3 :  *");
            printf("\n4 :  /");

        printf("\nenter your choice here:");
        scanf("%d",&choice);


           switch (choice){
         case 1:
                cn1=n1-n2;
                printf("\nnumber 1 - number 2 =%d",cn1);

                break;
        case 2:
                 cn2=n1+n2;
                printf("\nnumber 1 + number 2 =%d",cn2);

                break;
        case 3:
                cn3=n1*n2;
                printf("\nnumber 1 * number 2 =%d",cn3);

                break; 
        case 4:
                cn4=n1/n2;
                printf("\nnumber 1 / number 2 =%d",cn4);

                break;            
            }
                
                printf("\nis your calculations over or would you like to continue?if you need to continue  please write 'Y' otherwise 'N'\n");
                scanf(" %c",&continue_or_not);
                
            } while (continue_or_not=='Y'||continue_or_not=='y');

            printf("thanks for using bhavyaraj calculator");

            
    return 0;
}