#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, op = 0;
		string s;
		cin>>n>>s;
		int i=0, j=n-1;
		while(i < j) {
			if(s[i] != s[j])
				op++;
			i++;
			j--;
		}
		cout<<op/2 + op%2<<"\n";
	}
	return 0;
}
