#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		string s, t;
		cin>>n>>s;
		t = s;
		sort(t.begin(), t.end());
		int i=0, j = n-1;
		while(i < j) {
			if(s[i] > s[j])
				swap(s[i], s[j]);
			i++;
			j--;
		}
		cout<<(s == t ? "YES" : "NO")<<"\n";
	}
	return 0;
}
