#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, low_i, high_i, x1,y1,x2,y2,x3,y3;
	double a,b,c,s,lowest = 1000001, highest = 0, area;
	auto dist = [](int x1, int y1, int x2, int y2)->double {
		double ret = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
		return ret;
	};

	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		a = dist(x1, y1, x2, y2);
		b = dist(x1, y1, x3, y3);
		c = dist(x2, y2, x3, y3);
		s = (a + b + c)/2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		if(area <= lowest) {
			lowest = area;
			low_i = i+1;
		}
		if(area >= highest) {
			highest = area;
			high_i = i+1;
		}
	}
	cout<<low_i<<" "<<high_i<<"\n";
}
