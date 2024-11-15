#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,front = 0, back = 0;
		string s;
		cin>>n>>s;
		for(int i = 0;i < n;i++) {
			while(i<n && s[i] == '1')
				i++;
			while(i<n && s[i] == '0')
				i++;
			if(i < n)
				front++;
		}
		for(int i = n-1;i >= 0;i--) {
			while(i >= 0 && s[i] == '1')
				i--;
			while(i >= 0 && s[i] == '0')
				i--;
			if(i >= 0)
				back++;
		}
		cout<<min(front+1, back)<<"\n";
	}
	return 0;
}
