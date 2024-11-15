#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp1, temp2, chef = 0, morty = 0;
		auto val = [](int a) {
			int ret = 0;
			while(a > 0) {
				ret += a%10;
				a /= 10;
			}
			return ret;
		};
		cin>>n;

		while(n--) {
			cin>>temp1>>temp2;
			if(val(temp1) > val(temp2))
				chef++;
			else if(val(temp1) < val(temp2))
				morty++;
			else {
				chef++;
				morty++;
			}
		}
		if(chef > morty)
			cout<<"0 "<<chef<<"\n";
		else if(morty > chef)
			cout<<"1 "<<morty<<"\n";
		else
			cout<<"2 "<<chef<<"\n";
	}
	return 0;
}
