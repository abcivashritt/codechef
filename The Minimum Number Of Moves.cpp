#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 0, m = 0;

		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		m = *min_element(a.begin(), a.end());

		for(int i=0;i<n;i++)
			count += (a[i] - m);
		cout<<count<<"\n";
	}	
	return 0;
}
