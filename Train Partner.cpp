#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		if(n%8>=1 && n%8<=6) {
			cout<<(n/8)*8+(n%8-1+3)%6+1;
			switch(n%8) {
				case 1:
				case 4:
					cout<<"L";
					break;
				case 2:
				case 5:
					cout<<"M";
					break;
				case 3:
				case 6:
					cout<<"U";
					break;
			}
			cout<<"B";
		}
		else if(n%8 == 0)
			cout<<n-1<<"SL";
		else
			cout<<n+1<<"SU";
		cout<<"\n";
	}
	return 0;
}
