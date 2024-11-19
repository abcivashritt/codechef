#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, temp;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>temp;

		cout<<(n * (n-1) / 2)<<"\n";
	}
	return 0;
}
