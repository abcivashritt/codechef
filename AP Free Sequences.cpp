#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		bool ap_free = true;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				for(int k=j+1;k<n;k++) {
					if(a[j] - a[i] == a[k] - a[j])
						ap_free = false;
				}
			}
		}
		cout<<(ap_free ? "Yes" : "No")<<"\n";
	}
	return 0;
}
