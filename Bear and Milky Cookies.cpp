#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		bool check = false, milk = true;
		string s;

		cin>>n;

		while(n--) {
			cin>>s;
			if(check) {
				if(s == "milk")
					check = false;
				else
					milk = false;
			}
			else if(s == "cookie")
				check = true;
		}
		cout<<((check || !milk) ? "NO" : "YES")<<"\n";
	}
	return 0;
}
