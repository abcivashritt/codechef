#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,p,temp,ck = 0, hard = 0;
		cin>>n>>p;
		while(n--) {
			cin>>temp;
			if(temp >= p/2)
				ck++;
			else if(temp <= p/10)
				hard++;
		}
		cout<<((ck == 1 && hard == 2) ? "yes" : "no")<<"\n";
	}
	return 0;
}
