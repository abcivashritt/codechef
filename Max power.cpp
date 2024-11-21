#include <iostream>
using namespace std;

int main() {
	int n, count = 0;
	string s;
	cin>>n>>s;
	for(int i = n-1;i>=0;i--) {
		if(s[i] == '0')
			count++;
		else
			break;
	}
	cout<<count<<"\n";
	return 0;
}
