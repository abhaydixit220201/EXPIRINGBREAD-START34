#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int s=(y*z);
    if(s>=x){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
	// your code goes here
	return 0;
}