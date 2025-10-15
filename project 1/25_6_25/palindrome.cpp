#include<iostream>

using namespace std;

int main(){
/*find palindrome from 100 to 999*/
    int a,b,c,n;

    cout<<"enter number to check is is palindrome or not"<<endl;
    cin>>n;

    int ln=n%10;
    int mn=(n/10)%10;
    int fn=(n/10)/10;

    if(ln==fn){
        cout<<"it is palindrome";
    }
    else
    cout<<"not palindrome";


    return 0;
}/*swap by call by value and call by*/