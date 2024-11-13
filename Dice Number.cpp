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
		sort(a.rbegin(), a.rend());
		sort(b.rbegin(), b.rend());
		for(int i=0;i<3;i++) {
			if(a < b) {
				cout<<"Bob";
				break;
			}
			else if(a > b) {
				cout<<"Alice";
				break;
			}
			else if (i==2)
				cout<<"Tie";
		}
		cout<<"\n";
	}
	return 0;
}
