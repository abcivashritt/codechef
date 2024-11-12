#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,sum=0,temp;
		cin>>n>>x;
		for(int i=0;i<n-1;i++) {
			cin>>temp;
			sum += temp;
		}
		cout<<max(0, n*x-sum)<<"\n";
	}
	return 0;
}
