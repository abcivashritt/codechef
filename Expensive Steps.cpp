#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, x1, y1, x2, y2;
		cin>>n>>x1>>y1>>x2>>y2;
		cout<<min(abs(x1-x2) + abs(y1- y2), 
				min(x1-1, min(n-x1, min(y1-1, n-y1))) + min(x2-1, min(n-x2, min(y2-1, n-y2))) + 2)<<"\n";
	}
	return 0;
}
