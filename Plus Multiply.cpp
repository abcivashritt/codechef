#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 0, zero = 0;
		long long ai;
		
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>ai;
			if(ai == 2)
				count++;
			else if(ai == 0)
				zero++;
		}

		cout<<(count * (count-1))/2 + (zero * (zero - 1))/2<<"\n";
	}
	return 0;
}
