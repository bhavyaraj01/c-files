#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
            int GN,random_number,no_of_guess=0;
            srand(time(NULL));

            printf ("\nWELLCOME TO NUMBER GUESSING GAME:)");
            printf("\nDEVELOPED BY BHAVYARAJ SINGH JHALA");
            random_number=rand()%100+1;
           
           do
           {
            printf("\nwhat is your guess:");
            scanf("%d",&GN);
             no_of_guess++;
            if(GN<random_number){
                printf("guess bigger than your previos\n");
            }
            else if(GN>random_number){
                 printf("guess smaller than your previos\n");
            }
            else{
                printf("\ncongrats you win in %d chance!! your guess is right:)",no_of_guess);
            }
            
           } while (GN!=random_number);

           printf("\nTHANKS FOR PLAYING");
           
    return 0;
}