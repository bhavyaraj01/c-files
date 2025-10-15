#include<iostream>
/*codechep*/
using namespace std;

int main(){

    int choice,sum,sub,product;
    float div,a,b;

    cout<<"enter your choice of operation:";
    cout<<"1.add\n2.substraction\n3.multiply\n4.division\n";
    cin>>choice;

    switch (choice)
    {
 case 1:
    cout<<"enter a and b ";
    cin>>a>>b;
      sum=a+b;
    cout<<"sum is "<<sum;
        
        break;
case 2:
    cout<<"enter a and b ";
    cin>>a>>b;
      sub=a-b;
    cout<<"sub is "<<sub;
        
        break;

case 3:
    cout<<"enter a and b ";
    cin>>a>>b;
      product=a*b;
    cout<<"product is "<<product;
        
        break;

case 4:
    cout<<"enter a and b ";
    cin>>a>>b;
      div=a/b;
    cout<<"div is "<<div;
        
        break;
    
    
    
    
    }
    return 0;
}