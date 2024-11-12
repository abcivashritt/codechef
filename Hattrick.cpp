#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		char c,count=0;
		bool hat = false;
		for(int i=0;i<6;i++) {
			cin>>c;
			if(c=='W')
				count++;
			else
				count = 0;
			if(count >= 3)
				hat = true;
		}
		cout<<(hat ? "YES" : "NO")<<"\n";
	}
}
