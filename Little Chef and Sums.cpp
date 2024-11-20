#include <iostream>
#include <climits>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, min_index, min_val = INT_MAX, temp;
		cin>>n;
		for(int i=1;i<=n;i++) {
			cin>>temp;
			if(temp < min_val) {
				min_val = temp;
				min_index = i;
			}
		}
		cout<<min_index<<"\n";
	}
	return 0;
}
