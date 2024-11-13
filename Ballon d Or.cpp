#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,two = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp == 2)
				two++;
		}
		cout<<(two % 8 ? "NO" : "YES")<<"\n";
	}
	return 0;
}
