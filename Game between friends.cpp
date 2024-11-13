#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b,c[2];
		cin>>a>>b>>c[0]>>c[1];
		for(int i=0;i<2;i++) {
			if(b > a)
				a += c[i];
			else
				b += c[i];
		}
		cout<<(b > a ? "S" : "N")<<"\n";
	}
	return 0;
}
