#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int aNumber,count=0,armstrongCheck,firstDigit,midDigit,lastDigit,loopHelp;
    
    cout<<"enter number to check armstrong or not"<<endl<<":";
    cin>>aNumber;
       
 
     loopHelp = aNumber;
    while(loopHelp!=0){
          loopHelp=loopHelp/10;
          count++;
    }

   firstDigit=aNumber/100;
   midDigit=(aNumber/10)%10;
   lastDigit= aNumber%10;

  armstrongCheck=pow(firstDigit,count)+pow(midDigit,count)+pow(lastDigit,count);

  if(aNumber==armstrongCheck){
    cout<<"YES ,it is armstrong";

  }
  else 
  cout<<"NO, its not armstrong";

}