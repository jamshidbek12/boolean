#include <iostream>
using namespace std;

int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	
	if((y1-x1==y2-x2) || (y1+x1==y2+x2)){
		cout<<"Yurishi mumkin";
	}else{
		cout<<"Yurish mumkin emas";
	}
}
