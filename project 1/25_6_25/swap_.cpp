#include<iostream>

using namespace std;

int main(){

    /*swap 3 number*/

    int n[3],i,j,swap;

    for(i=0;i<3;i++){
        cout<<"enter number "<<i+1<<endl;
        cin>>n[i];
    }

    for(i=0;i<3;i++){

        for(j=1;j<3;j++){
           swap=n[i];
           n[i]=n[j];
           n[j]=swap;

        }
    }


    for(i=0;i<3;i++){
        cout<<"after swap number"<<i+1<<"="<<n[i]<<endl;
      
    }
}