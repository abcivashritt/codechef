#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,a,b,temp;
		vector < int > count(10001, 0);
		cin>>n>>a>>b;
		for(int i=0;i<n;i++) {
			cin>>temp;
			count[temp]++;
		}
		cout<<fixed<<(double(count[a])/double(n)) * (double(count[b])/double(n))<<"\n";
	}
}
