#include<iostream>

using namespace std;

int  main(){
          
/*check fibonicci series or not*/

int series[10],i,j,k;
bool isfibonacci= true;
     
cout<<"enter your series ";
 
  for( i=0;i<10;i++){
     cin>>series[i];
  }

  
  for(i=2;i<10;i++){
            if(series[i]!=series[i-1]+series[i-2]){
              isfibonacci=false;
              break;
            }}

if(isfibonacci){
  cout<<"yes it is fibonicci series";
}

else{
  cout<<"not fibonicci series";
}
  

  return 0;

}
