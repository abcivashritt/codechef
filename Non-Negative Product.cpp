#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,zero_count = 0,neg_count = 0;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp == 0)
				zero_count++;
			else if(temp < 0)
				neg_count++;
		}
		cout<<(zero_count ? 0 : neg_count%2)<<"\n";
	}
}
