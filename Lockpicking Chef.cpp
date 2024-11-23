#include <iostream>
#include <climits>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, m, min_sum = INT_MAX;
		string s,t;
		cin>>n>>m>>s>>t;

		for(int i=0;i<n-m+1;i++) {
			int sum = 0;
			for(int j=0;j<m;j++) {
				sum += min(abs(s[i+j] - t[j]),10 - abs(s[i+j] - t[j]));
			}
			min_sum = min(min_sum, sum);
		}
		cout<<min_sum<<"\n";
	}
	return 0;
}
