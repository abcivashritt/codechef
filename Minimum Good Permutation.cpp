#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			a[i] = i+1;
		for(int i=0;i<n-3;i+=2)
			swap(a[i], a[i+1]);
		if(n%2) {
			swap(a[n-3], a[n-2]);
		}
		swap(a[n-2], a[n-1]);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
