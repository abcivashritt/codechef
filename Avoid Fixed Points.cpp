#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, temp, count = 0;
		cin>>n;
		for(int i = 1;i<=n;i++) {
			cin>>temp;
			if(i + count == temp)
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
