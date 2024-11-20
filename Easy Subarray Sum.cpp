#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 0, first = -1, last = 0;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(a[i] > 0) {
				last = i;
				if(first == -1)
					first = i;
			}
		}
		for(int i=first+1;i<last;i++) {
			if(a[i] < 0)
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
