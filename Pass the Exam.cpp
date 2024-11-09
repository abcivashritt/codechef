#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
		cout<<((a>=10 && b>=10 && c>=10 && a+b+c>=100)?"PASS":"FAIL")<<"\n";
	}
	return 0;
}
