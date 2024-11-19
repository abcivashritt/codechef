#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, temp, index = n, zeros = 0;

		cin>>n;
		index = n;

		for(int i=0;i<n;i++) {
			cin>>temp;
			if(index == n && temp == 0)
				index = i;
			if(temp == 0)
				zeros++;
		}
		cout<<(1000 * zeros + 100 * (n-index))<<"\n";
	}
	return 0;
}
