

#include <stdio.h>

int main(){
            int i,j,arr[5]={1,9,3,7,5},n=5,temp=1,k=3;
/*ex  arr[5]={1,4,3,7,5}
k=3

output: 4    { 3rd smallest}*/
            
            for(i=0;i<n-1;i++){
                for(j=i+1;j<n;j++){

                
                if(arr[j]<arr[i]){
                    //swap
                     temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;}
                
            }
            }

           printf("%d",arr[k-1]);
            
    return 0;
}