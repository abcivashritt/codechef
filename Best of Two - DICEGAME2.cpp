#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		vector < int > a(3), b(3);
		for(int i=0;i<3;i++)
			cin>>a[i];
		for(int i=0;i<3;i++)
			cin>>b[i];
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		cout<<(a[1] + a[2] == b[1] + b[2] ? "TIE" : (a[1] + a[2] > b[1] + b[2] ? "ALICE" : "BOB"))<<"\n";
	}
	return 0;
}
