#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, largest, count = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		largest = a[0];
		for(int i=1;i<n;i++) {
			if(a[i] < largest)
				count++;
			else
				largest = a[i];
		}
		cout<<count<<"\n";
	}
	return 0;
}
