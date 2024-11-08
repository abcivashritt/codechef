#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000007

int main() {
	int t;
	cin>>t;
	vector < int > ans(100001, 0);
	ans[0] = 0;
	ans[1] = 1;
	for(int i=2;i<=100000;i++)
		ans[i] = (ans[i-1]*2)%MOD;
	while(t--) {
		int n;
		cin>>n;
		cout<<ans[n]<<"\n";
	}
	return 0;
}
