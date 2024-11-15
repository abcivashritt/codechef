#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,temp;
		string s = "";
		cin>>n>>k;
		while(n--) {
			cin>>temp;
			if(temp % k == 0)
				s = s + '1';
			else
				s = s + '0';
		}
		cout<<s<<"\n";
	}
	return 0;
}
