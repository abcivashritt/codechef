#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		double x,y,z;
		int mark=0;
		cin>>x>>y>>z;
		x>50?mark+=4:mark;
		y<0.7?mark+=2:mark;
		z>5600?mark+=1:mark;
		switch(mark) {
			case 7:cout<<10;break;
			case 6:cout<<9;break;
			case 3:cout<<8;break;
			case 5:cout<<7;break;
			case 4:
			case 2:
			case 1:
				   cout<<6;break;
			case 0:cout<<5;break;
		}
		cout<<"\n";
	}
	return 0;
}
