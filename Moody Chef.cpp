#include <iostream>
#include <climits>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,l,r,hap = 0, max_hap = 0, min_hap = 0;
		int tmp;
		cin>>n>>l>>r;
		while(n--) {
			cin>>tmp;
			if(l <= tmp && tmp <= r) {
				hap++;
				max_hap = max(max_hap, hap);
			}
			else {
				hap--;
				min_hap = min(min_hap, hap);
			}
		}
		cout<<max_hap<<" "<<min_hap<<"\n";
	}
	return 0;
}
