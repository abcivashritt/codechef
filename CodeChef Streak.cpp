#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		int xi;
		int om = 0, current = 0, addy = 0;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>xi;
			if (xi == 0) {
				om = max(om, current);
				current = 0;
			}
			else
				current++;
		}
		om = max(om, current);
		current = 0;
		for(int i=0;i<n;i++) {
			cin>>xi;
			if (xi == 0) {
				addy = max(addy, current);
				current = 0;
			}
			else
				current++;
		}
		addy = max(addy, current);
		if (om > addy)
			cout<<"OM\n";
		else if (om < addy)
			cout<<"ADDY\n";
		else
			cout<<"DRAW\n";

	}
	return 0;
}
