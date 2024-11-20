#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, xi, li, fi, tot_time = 0;
		cin>>n;
		while(n--) {
			cin>>xi>>li>>fi;
			if(xi < tot_time)
				xi = xi + ((tot_time - xi + fi - 1)/fi)*fi;
			tot_time = xi + li;
		}
		cout<<tot_time<<"\n";
	}
	return 0;
}
