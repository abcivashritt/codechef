#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-2;i++) {
			if((a[i] < a[i + 1] && a[i + 1] < a[i + 2]) || (a[i + 2] < a[i + 1] && a[i + 1] < a[i]))
				swap(a[i], a[i + 1]);

			if((a[i] < a[i + 2] && a[i + 2] < a[i + 1]) || (a[i + 1] < a[i + 2] && a[i + 2] < a[i])) {
				swap(a[i + 2], a[i + 1]);
				swap(a[i], a[i + 1]);
			}
		}
		cout<<a[n-2]<<" "<<a[n-1]<<"\n";
	}
	return 0;
}
