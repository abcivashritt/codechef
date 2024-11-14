#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp, fo = -1, lo = -1, sum = 0;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			sum += temp;
			if(temp%2) {
				if(fo == -1)
					fo = i + 1;
				lo = i + 1;
			}
		}
		if(sum % 2) {
			cout<<max(lo-1, n-fo)<<"\n";
		}
		else
			cout<<n<<"\n";
	}
	return 0;
}
