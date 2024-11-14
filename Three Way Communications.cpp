#include <iostream>
#include <cmath>
using namespace std;

double dist(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int r,x1,y1,x2,y2,x3,y3;
		cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
		cout<<(((dist(x1,y1,x2,y2) <= r && dist(x2,y2,x3,y3) <= r) ||
				(dist(x1,y1,x3,y3) <= r && dist(x2,y2,x3,y3) <= r) ||
				(dist(x1,y1,x2,y2) <= r && dist(x1,y1,x3,y3) <= r)) ? "yes" : "no")<<"\n";
	}
	return 0;
}
