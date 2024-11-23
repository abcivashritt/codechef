#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, odd = 0, even = 0, ai;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>ai;
			if(ai%2)
				odd++;
			else
				even++;
		}
		cout<<odd*even<<"\n";
	}
	return 0;
}
