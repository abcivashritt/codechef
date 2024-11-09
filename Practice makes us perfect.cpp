#include <iostream>
using namespace std;

int main() {
	int p;
	int ans = 0;
	for(int i = 0;i<4;i++) {
		cin>>p;
		if (p>=10)
			ans++;
	}
	cout<<ans<<"\n";
	return 0;
}
