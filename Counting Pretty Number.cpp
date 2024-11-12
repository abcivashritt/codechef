#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int l,r,count=0;
		cin>>l>>r;
		count = ((r-l+1)/10 )* 3;
		for(int i = l + ((r-l+1)/10) * 10;i<=r;i++) {
			if(i%10 == 2 || i%10 == 3 || i%10 == 9)
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
