#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> dec(n), jan(n), diff(n);
    
    vector<string> names(n);

    for(int i=0;i<n;i++){
        cin>>names[i]>>dec[i]>>jan[i];
         diff[i]=jan[i]-dec[i];
    }
    
    //check
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(diff[i]>)
        }
    }
    

        return 0;
}

