#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<(a-c==b-d?"ANY":(a-c<b-d?"FIRST":"SECOND"))<<"\n";
	}
	return 0;
}
