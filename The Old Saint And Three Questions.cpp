#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		char c;
		int one = 0, zero = 0;
		for(int i=0;i<3;i++) {
			cin>>c;
			if (c=='1')
				one++;
			else
				zero++;
		}
		for(int i=0;i<3;i++) {
			cin>>c;
			if (c=='1')
				one--;
			else
				zero--;
		}
		cout<<((one == 0 && zero == 0) ? "Pass" : "Fail")<<"\n";
	}
	return 0;
}
