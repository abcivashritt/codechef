#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, swaps = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++) {
			if(a[i] == i+1) {
				i++;
				swaps++;
			}
		}
		cout<<swaps<<"\n";
	}
	return 0;
}
