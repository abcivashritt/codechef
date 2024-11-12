#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		cin>>x;
		vector < int > a(3);
		for(int i=0;i<3;i++)
			cin>>a[i];
		sort(a.begin(), a.end());
		cout<<a[0] * (x-1) + a[1]<<"\n";
	}
	return 0;
}
