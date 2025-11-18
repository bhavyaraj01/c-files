#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[5],b[5],times;
	float t,c[5];
	cin>>times;
	for(int i=0;i<times;i++){
	    cin>>a[i]>>b[i]>>c[i];
	}
	
	for(int i=0;i<times;i++){
	    
	    
	    t=(a[i]+b[i])/2.0;
	    if(t>c[i])
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}

return 0;
}
