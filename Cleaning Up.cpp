#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,m;
		cin>>n>>m;
		vector < int > d(m),a;
		for(int i=0;i<m;i++)
			cin>>d[i];
		d.push_back(n+1);
		sort(d.begin(), d.end());
		for(int i=1, k = 0;i<=n;i++,k++) {
			while(i < d[k]) {
				a.push_back(i);
				i++;
			}
		}
		if(a.size() > 0) {
			for(int i = 0;i<a.size();i+=2)
				cout<<a[i]<<" ";
			cout<<"\n";
		}
		else
			cout<<-1<<"\n";
		if(a.size() > 1) {
			for(int i = 1;i<a.size();i+=2)
				cout<<a[i]<<" ";
			cout<<"\n";
		}
		else
			cout<<-1<<"\n";
	}
	return 0;
}
