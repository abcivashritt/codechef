#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n, sum = 0, out = -1;
		cin>>n;
		vector < long long > a(n);
		
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum += a[i];
		}
		for(int i=0;i<n;i++) {
			if(sum == n*a[i]) {
				out = i+1;
				break;
			}
		}
		if(out == -1)
			cout<<"Impossible\n";
		else
			cout<<out<<"\n";
	}
	return 0;
}
