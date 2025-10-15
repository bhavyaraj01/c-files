#include <stdio.h>

int main(){
            int k=2,arr[4]={1,4,3,2},n=4,indx2,indx1,compare;
//its a sorting problem like
/*input: k=3,arr[]=[1,2,3,1,4,5]
output: yes
explanation:1 is present at index 0 and 3.*/
            for(int i=0;i<n;i++){
                 indx1=arr[i];
                for(int j=i+1;j<n;j++){
             if (arr[i]==arr[j])
               indx2=arr[j];
                }


            }
            compare=arr[indx2]-arr[indx1];


           if(compare<=k){
            printf("yes");
           }
           else
           printf("no");
    return 0;
}

ai code
#include <stdio.h>

int main() {
    int k = 3, arr[] = {1, 2, 3, 1, 4, 5}, n = 6;
    int indx1 = -1, indx2 = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                indx1 = i;
                indx2 = j;
                break; // Exit inner loop once a duplicate is found
            }
        }
        if (indx1 != -1) break; // Exit outer loop once indices are found
    }

    if (indx1 != -1 && indx2 != -1 && (indx2 - indx1) <= k) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}