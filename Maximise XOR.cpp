#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int o1 = 0, o2 = 0, z1 = 0, z2 = 0;
		string s1, s2;

		cin>>s1>>s2;
		for(int i=0;i<s1.length();i++) {
			if(s1[i] == '1')
				o1++;
			else
				z1++;
		}
		for(int i=0;i<s2.length();i++) {
			if(s2[i] == '1')
				o2++;
			else
				z2++;
		}
		cout<<string(min(o1, z2), '1') + string(min(o2, z1), '1') + string(s1.length() - (min(o1, z2) + min(o2, z1)), '0')<<"\n";
	}
	return 0;
}
