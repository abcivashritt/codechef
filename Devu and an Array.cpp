#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n,q,temp,left, right;
	cin>>n>>q;
	vector < int > a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	left = *min_element(a.begin(), a.end());
	right = *max_element(a.begin(), a.end());

	while(q--) {
		cin>>temp;
		if(left <= temp && temp <= right)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
