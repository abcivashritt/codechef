#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, count = 0;
		bool low = true;
		cin>>n;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++) {
			low = true;
			for(int j = max(0, i-5);j<i;j++) {
				if(a[j] <= a[i])
					low = false;
			}
			if(low)
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
