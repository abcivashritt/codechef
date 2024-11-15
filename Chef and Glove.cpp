#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		bool front = true, back = true;
		cin>>n;
		vector < int > l(n), g(n);

		for(int i=0;i<n;i++)
			cin>>l[i];
		for(int i=0;i<n;i++)
			cin>>g[i];

		for(int i=0, j=0;i<n;i++, j++) {
			if(l[i] > g[j]) {
				front = false;
				break;
			}
		}
		for(int i=0, j=n-1;i<n;i++, j--) {
			if(l[i] > g[j]) {
				back = false;
				break;
			}
		}

		cout<<((front & back) ? "both" : (front ? "front" : (back ? "back" : "none")))<<"\n";
	}
	return 0;
}
