#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		cout<<(x<=100?x:(x<=1000?x-25:(x<=5000?x-100:x-500)))<<"\n";
	}
	return 0;
}
