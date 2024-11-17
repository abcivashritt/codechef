#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, out;
		bool add;
		cin>>n;
		out = (n+1)/2;
		add = !(n%2);
		for(int i=0;i<n;i++) {
			cout<<out<<" ";
			if(add) {
				add = false;
				out += (i+1);
			}
			else {
				add = true;
				out -= (i+1);
			}
		}
		cout<<"\n";
	}
	return 0;
}
