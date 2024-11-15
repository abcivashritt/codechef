#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			cout<<(temp == 1 ? 0 : 1)<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
