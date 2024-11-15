#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,sum = 0;
		cin>>n>>k;
		vector < int > a(n);
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum += a[i];
		}
		if(sum/k == (sum - *min_element(a.begin(), a.end()))/k)
			cout<<-1<<"\n";
		else
			cout<<sum/k<<"\n";
	}
	return 0;
}
