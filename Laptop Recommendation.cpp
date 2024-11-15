#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp, ans = -1;
		bool confused = false;
		vector < int > c(10, 0);

		cin>>n;

		for(int i= 0;i<n;i++) {
			cin>>temp;
			c[temp-1]++;
		}
		for(int i=0;i<10;i++) {
			if(ans == -1 || c[ans] < c[i]) {
				ans = i;
				confused = false;
			}
			else if(c[ans] == c[i])
				confused = true;
		}
		if(confused)
			cout<<"CONFUSED\n";
		else {
			cout<<ans+1<<"\n";
		}
	}
	return 0;
}
