#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool val(pair<int, int> it1, pair<int, int> it2) {
	return ((it1.second) < (it2.second));
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		map < int, int > count;

		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			count[temp]++;
		}

		vector < pair < int, int > > vec(count.begin(), count.end());
		sort(vec.rbegin(), vec.rend(), val);

		cout<<((vec.size() == 1 || vec[0].second > vec[1].second) ? "YES" : "NO")<<"\n";
	}
	return 0;
}
