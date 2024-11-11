#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,smallest;
		cin>>a>>b>>c;
		smallest = min(a, min(b,c));
		cout<<(smallest == c ? "ALICE" : (smallest == b ? "BOB" : "DRAW"))<<"\n";
	}
}
