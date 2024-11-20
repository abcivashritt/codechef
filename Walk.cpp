#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, max_w;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		max_w = a[n-1];
		for(int i = n-2;i>=0;i--) {
			max_w = max(a[i], max_w + 1);
		}
		cout<<max_w<<"\n";
	}
	return 0;
}
