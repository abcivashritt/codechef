#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,ans=0;
		double sum = 0;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			sum += temp;
			if(sum/double(i+1) == 1.0)
				ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
