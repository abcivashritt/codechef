#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, count = 0, x1, x2, x3, y1, y2, y3;
	double a, b, c;
	auto dist = [](int x1, int x2, int y1, int y2) {
		double ret = pow(x1-x2, 2) + pow(y1-y2, 2);
		return ret;
	};
	cin>>n;
	while(n--) {
		cin>>x1>>y1>>x2>>y2>>x3>>y3;

		a = dist(x1, x2, y1, y2);
		b = dist(x1, x3, y1, y3);
		c = dist(x2, x3, y2, y3);

		if(a+b == c || a+c == b || b+c == a)
				count++;
	}
	cout<<count<<"\n";
	return 0;
}
