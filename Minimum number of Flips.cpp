#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp,sum = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			sum += temp;
		}
		cout<<(abs(sum)%2 ? -1 : abs(sum)/2)<<"\n";
	}
	return 0;
}
