#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<(max(a,b) == max(c,d)?"TIE":(max(a,b) < max(c,d)?"P":"Q"))<<"\n";
	}
	return 0;
}
