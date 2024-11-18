#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long n, sum, p1 = INT_MAX, p2 = INT_MAX, temp;
		cin>>n>>sum;

		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp == 0) {
				if(a[i] < p1)
					p1 = a[i];
			}
			else {
				if(a[i] < p2)
					p2 = a[i];
			}
		}
		cout<<(100-sum >= p1+p2 ? "yes" : "no")<<"\n";
	}
	return 0;
}
