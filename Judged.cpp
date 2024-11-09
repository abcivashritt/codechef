#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x;
		int count = 0;
		for(int i=0;i<5;i++) {
			cin>>x;
			count += x;
		}
		cout<<(count>=4?"YES":"NO")<<"\n";
	}
	return 0;
}
