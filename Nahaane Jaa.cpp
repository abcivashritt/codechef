#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, k, index = -1, ai;

		cin>>n>>k;
		for(int i=0;i<n;i++) {
			cin>>ai;
			if(ai == k && index == -1)
				index = i;
		}
		cout<<((index >= 0 && (index < n-1 || n == 1)) ? "Yes" : "No")<<"\n";
	}
	return 0;
}
