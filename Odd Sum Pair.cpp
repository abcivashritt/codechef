#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int temp, odd = 0, even = 0;
		for(int i=0;i<3;i++) {
			cin>>temp;
			temp%2==0?even++:odd++;
		}
		cout<<((even > 0 && odd > 0)?"YES":"NO")<<"\n";
	}
	return 0;
}
