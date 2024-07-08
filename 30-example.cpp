#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	bool s = (a==b && a==c && b==c);
	cout<<s;
}
