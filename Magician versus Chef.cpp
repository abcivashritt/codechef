#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,s,temp1, temp2;
		cin>>n>>x>>s;
		while(s--) {
			cin>>temp1>>temp2;
			if(temp1 == x)
				x = temp2;
			else if(temp2 == x)
				x = temp1;
		}
		cout<<x<<"\n";
	}
	return 0;
}
