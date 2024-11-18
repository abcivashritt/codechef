#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k, temp;
		vector < int > count(101, 0);

		cin>>n>>k;
		for(int i=1;i<=n;i++) {
			cin>>temp;
			if(temp == i)
				count[temp] = INT_MIN;
			else
				count[temp]++;
		}
		auto is_k = [&k](int i)->bool { return (i>=k); };
		cout<<count_if(count.begin(), count.end(), is_k)<<"\n";
	}
	return 0;
}
