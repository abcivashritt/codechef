#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	string s = "Thanks for helping Chef!";
	while(t--) {
		int n;
		cin>>n;
		cout<<(n<10?s:"-1")<<"\n";
	}
	return 0;
}
