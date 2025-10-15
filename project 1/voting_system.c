#include <stdio.h>

int main(){
            /*voting system project*/

            int candi_1,candi_2,vote,check_adm_or_voter;
            char ;

            /*first to check is it voter or admin*/
            printf("\nYOU ARE ADMIN OR VOTER");
            printf("\n1->\tvoter\n2->\tadmin\n");
            scanf("%d",&check_adm_or_voter);

           switch (check_adm_or_voter)
            {
            case 1:{
            printf("\nhello EVERYONE this is voting machine or system for your next \"MLA\" ");
            

            printf("\nINFORMATION ABOUT ALL CANDIDATES \n there are three candidates participate in elction \n 1. vijay sir\n 2.rekha lahoti\n 3.abhishek ");

            printf("\nselect from one of them:");
            scanf("%d",&vote);

            switch (vote)
 {
            case 1:
                printf("\nfrom vijay soni\n thank you for believe me and vote me\tyour vote has been recorded wait for result");
            
                break;
            
                case 2: 
                printf("\nfrom rekha lahoti \nthank you for believe me and vote me\tyour vote has been recorded wait for result");
            
                break;
                case 3:
                printf("\nfrom abhishek\nthank you for believe me and vote me\t your vote has been recorded wait for result");
            
                break;
                    
            default:
                break;
  }}
                break;
            case 2:
                
                break;    
            
            default:
                break;
            }


            

            printf("\n:::\tmade by bhamsa\t:::");

            


    return 0;
}