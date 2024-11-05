#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector < int > time(1440, 0);
		int ai,di;
		for(int i=0;i<n;i++) {
			cin>>ai;
			time[ai]++;
		}
		for(int i=0;i<n;i++) {
			cin>>di;
			time[di]++;
		}
		int highest = time[0];
		for(int i=1;i<1440;i++) {
			highest = max(highest, time[i]);
		}
		cout<<highest<<"\n";
	}
	return 0;
}
