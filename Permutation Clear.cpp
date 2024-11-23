#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, k, temp;

		cin>>n;
		vector < int > a(n), index(n+1);
		for(int i=0;i<n;i++) {
			cin>>a[i];
			index[a[i]] = i;
		}
		cin>>k;
		while(k--) {
			cin>>temp;
			a[index[temp]] = 0;
		}
		for(int i=0;i<n;i++) {
			if(a[i] != 0)
				cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
