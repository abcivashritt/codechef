#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		if(n%2)
			cout<<-1<<"\n";
		else
			cout<<(string(n/2, '1') + string(n/2, '0'))<<"\n";
	}
	return 0;
}
