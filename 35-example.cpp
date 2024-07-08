#include <iostream>
using namespace std;

int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int x = x1+x2, y= y2+y1;
	
	if(x%2 == y%2){
		cout<<"Birxil";
	}else{
		cout<<"Xarxil";
	}
}
