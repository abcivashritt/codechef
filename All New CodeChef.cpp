#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	cout<<(x<y?"OLD":(x>y?"NEW":"SAME"))<<"\n";
	return 0;
}
