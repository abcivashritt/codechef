#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int temp, ans = 0;
	while(n--) {
		cin>>temp;
		if (temp%k == 0)
			ans++;
	}
	cout<<ans<<"\n";
	return 0;
}
