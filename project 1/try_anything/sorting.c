#include <stdio.h>

int main(){
            int arr[5]={4,0,5,1,2},n=5;

            printf("sorting data in acsending order\n");

            for(int i=0;i<n-1;i++){
             int smallindx=i;

             for(int j=i+1;j<n;j++){
              if(arr[smallindx]>arr[j]){
                //swap
       smallindx=j;

                
              }
                 
             }
             //swap
             int swaphelp=arr[i];
             arr[i]=arr[smallindx];
             arr[smallindx]=swaphelp;
            }
            for(int i=0;i<n;i++){
                printf("%d",arr[i]);
            }
    return 0;
}