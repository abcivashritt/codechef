#include <iostream>
using namespace std;

int main() {
	int n, o = 0;
	int temp;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>temp;
		o += (temp%2);
	}
	cout<<(o>=n-o?"NOT READY":"READY FOR BATTLE")<<"\n";
	return 0;
}
