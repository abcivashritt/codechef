#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, odd = 0, temp;
		bool one = false;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp == 1)
				one = true;
			odd += temp%2;
		}
		cout<<((one || odd % 2) ? "CHEF" : "CHEFINA")<<"\n";
	}
	return 0;
}
