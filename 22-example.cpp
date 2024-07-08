#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"O'sish atrtibida yozish kerak"<<endl;
	cin>>a>>b>>c;
	
	if((a<b && b<c) || (a>b && b>c)){
		cout<<"TRUE";
	}else{
		cout<<"FALSE";
	}
}
