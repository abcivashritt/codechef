#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, m, sad = 0, temp;

		cin>>n>>m;
		vector < int > a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];

		while(m--) {
			cin>>temp;
			if(a[temp-1] > 0)
				a[temp-1]--;
			else
				sad++;
		}
		cout<<sad<<"\n";
	}
	return 0;
}
