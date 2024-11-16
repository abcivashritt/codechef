#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, ans = 0,temp,curr=0;
		map <int,int> count;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			count[temp]++;
			if(count[temp] % 2)
				curr++;
			else
				curr--;
			ans = max(ans, curr);
		}
		cout<<ans<<"\n";
	}
	cout<<"\n";
}
