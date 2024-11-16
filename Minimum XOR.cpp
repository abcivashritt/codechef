#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,smallest = INT_MAX, sum = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum ^= a[i];
		}
		smallest = sum;
		for(int i=0;i<n;i++)
			smallest = min(smallest, sum ^ a[i]);
		cout<<smallest<<"\n";
	}
	return 0;
}
