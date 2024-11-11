#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int n = s.length() - 1;
		int i = 0;
		while(i<n && s[i] == s[n]) {
			i++;
			n--;
		}
		if(i>=n)
			cout<<"WINS";
		else
			cout<<"LOSES";
		cout<<"\n";
	}
	return 0;
}
