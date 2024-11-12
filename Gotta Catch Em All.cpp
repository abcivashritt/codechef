#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x,y,temp,sum = 0;
		cin>>n>>x>>y;
		while(n--) {
			cin>>temp;
			sum += min(x*temp, y);
		}
		cout<<sum<<"\n";
	}
	return 0;
}
