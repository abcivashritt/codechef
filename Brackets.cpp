#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int balance = 0, max_balance = 0;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++) {
			if(s[i] == '(')
				balance++;
			else
				balance--;
			max_balance = max(balance, max_balance);
		}
		cout<<string(max_balance, '(') + string(max_balance, ')')<<"\n";
	}
	return 0;
}
