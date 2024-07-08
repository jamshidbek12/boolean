#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int x,y;
	x=abs(x2-x1);
	y=abs(y2-y1);
	
	if((x==1 && y==2) || (x==2 && y==1)){
		cout<<"Yurishi mumkin";
	}else{
		cout<<"Yurish mumkin emas";
	}
}
