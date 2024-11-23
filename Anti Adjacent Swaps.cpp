#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, temp;
		bool sorted = false;
		cin>>n;

		vector < int > a(n), b;
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(n == 1 || n > 3)
			cout<<"YES\n";
		else if(n == 2) {
			if(a[0] <= a[1])
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else if(n == 3) {
			if(a[0] > a[2])
				swap(a[0], a[2]);
			if(a[0] <= a[1] && a[1] <= a[2])
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0; 
}
