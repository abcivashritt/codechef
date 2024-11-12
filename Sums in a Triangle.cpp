#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		vector < int > prev(101, 0);
		cin>>n;
		for(int i=0;i<n;i++) {
			vector < int > curr(i+1);
			for(int j=0;j<=i;j++) {
				cin>>curr[j];
				if(!prev.empty()) {
					int above = prev[j];
					int left = j>0 ? prev[j-1] : 0;
					curr[j] += max(above, left);
				}
			}
			prev = curr;
		}
		cout<<*max_element(prev.begin(), prev.end())<<"\n";
	}
	return 0;
}
