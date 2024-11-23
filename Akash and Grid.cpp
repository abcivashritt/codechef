#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,xs,ys;
		cin>>n>>xs>>ys;
		cout<<(xs+ys)%2<<"\n";
	}
	return 0;
}
