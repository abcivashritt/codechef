#include <iostream>
using namespace std;

int main() {
	int n,h,x,temp;
	bool ans = false;
	cin>>n>>h>>x;
	while(n--) {
		cin>>temp;
		if(h-temp <= x)
			ans = true;
	}
	cout<<(ans ? "YES" : "NO")<<"\n";
	return 0;
}
