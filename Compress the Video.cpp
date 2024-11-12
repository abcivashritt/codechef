#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,prev,curr,rep=0;;
		cin>>n;
		cin>>prev;
		for(int i=1;i<n;i++) {
			cin>>curr;
			if(curr == prev)
				rep++;
			prev = curr;
		}
		cout<<n-rep<<"\n";
	}
	return 0;
}
