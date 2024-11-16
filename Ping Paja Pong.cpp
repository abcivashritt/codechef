#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int x,y,k;
		cin>>x>>y>>k;
		cout<<(((x+y)/k)%2 ? "Paja" : "Chef")<<"\n";
	}
	return 0;
}
