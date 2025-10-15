#include<iostream>

using namespace std;

int main(){
    int tabl,i,n;
   tabl=0;
    
    cout<<"enter  your number to check prime or not"<<endl;
    cin>>n;

    for(i=1 ;i < n;i++)
    
    {
        if(n%i==0)
        {
        tabl++;
        }


    }
 
    if(tabl==1){
    cout<<"it is prime number";
}
else
cout<<"its not prime";

return 0;
}
