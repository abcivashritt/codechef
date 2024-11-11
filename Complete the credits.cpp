#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(n>65 ? "OVERLOAD" : (n<35 ? "UNDERLOAD" : "NORMAL"))<<"\n";
	}
	return 0;
}
