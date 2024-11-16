#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,ones = 0;
		string s;
		cin>>n>>s;
		int i=0;int j = n-1;
		while(i < j) {
			if(s[i] != s[j])
				ones++;
			i++;
			j--;
		}
		cout<<((ones % 2 == 0 || n % 2 == 1)? "YES" : "NO")<<"\n";
	}
	return 0;
}
