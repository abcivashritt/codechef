#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		double n, v1, v2;
		cin>>n>>v1>>v2;
		cout<<(2*n/v2 < n*sqrt(2)/v1 ? "Elevator" : "Stairs")<<"\n";
	}
	return 0;
}
