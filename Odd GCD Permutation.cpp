#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		if(n%2)
			cout<<-1;
		else
			while(n--)
				cout<<n+1<<" ";
		cout<<"\n";
	}
	return 0;
}
