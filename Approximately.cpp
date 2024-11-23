#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		int a = 103993, b = 33102;
		cout<<a/b;
		a = (a%b)*10;
		if(n > 0) {
			cout<<".";
		}
		while(n--) {
			cout<<a/b;
			a = (a%b)*10;
		}
		cout<<"\n";
	}
	return 0;
}
