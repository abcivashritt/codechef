#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,curr = 1;
		cin>>n;
		while(--n) {
			cin>>temp;
			curr = (temp == 0 ? curr : (curr+1)%2);
		}
		cin>>temp;
		cout<<(curr != temp ? "YES" : "NO")<<"\n";
	}
	return 0;
}
