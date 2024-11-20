#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, sum_a = 0, sum_b = 0;

		cin>>n;
		vector < int > a(n), b(n);
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum_a += a[i];
		}
		for(int i=0;i<n;i++) {
			cin>>b[i];
			sum_b += b[i];
		}
		if(sum_a == sum_b) {
			long long diff = 0;
			for(int i=0;i<n;i++)
				diff += abs(a[i] - b[i]);
			cout<<diff/2<<"\n";
		}
		else
			cout<<-1<<"\n";
	}
	return 0;
}
