#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, k, h = 0, t = 0, c = 0;
		char temp;

		cin>>n>>k;
		vector < int > a(n);
		for(int i=0;i<n;i++) {
			cin>>temp;
			if(temp == 'H')
				a[i] = 1;
			else
				a[i] = 0;
		}

		for(int i=0;i<n-k;i++)
			a[i] == 1 ? h++ : t++;
		for(int i=n-1;i>=n-k;i--)
			c += (a[i] + c)%2;

		cout<<(c%2 ? t : h)<<"\n";
	}
	return 0;
}
