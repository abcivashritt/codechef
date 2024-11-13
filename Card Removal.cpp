#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		vector < int > count(10, 0);
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			count[temp-1]++;
		}
		cout<<n-*max_element(count.begin(), count.end())<<"\n";
	}
	return 0;
}
