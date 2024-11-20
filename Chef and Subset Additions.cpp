#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, temp, x, y;
		bool yes = true;
		cin>>n>>x>>y;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(!(a[i] + x == temp || a[i] + y == temp))
				yes = false;
		}
		cout<<(yes ? "Yes" : "No")<<"\n";
	}
	return 0;
}
