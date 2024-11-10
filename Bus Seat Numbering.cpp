#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(n<=10?"LOWER DOUBLE":(n<=15?"LOWER SINGLE":(n<=25?"UPPER DOUBLE":"UPPER SINGLE")))<<"\n";
	}
	return 0;
}
