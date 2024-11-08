#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector < int > count(1001, 0);
		int x;
		for(int i=0;i<n;i++) {
			cin>>x;
			count[x]++;
		}
		for(int i=0;i<n;i++) {
			cin>>x;
			count[x]--;
		}
		for(int i=1;i<1001;i++) {
			count[i] += count[i-1];
		}
		cout<<*max_element(count.begin(), count.end())<<"\n";
	}
	return 0;
}
