#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, local = 0, inv = 0;

		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		for(int i=0;i<n-1;i++)
			if(a[i] > a[i+1])
				local++;

		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if(a[i] > a[j])
					inv++;
			}
		}
		cout<<(local == inv ? "YES" : "NO")<<"\n";
	}
	return 0;
}
