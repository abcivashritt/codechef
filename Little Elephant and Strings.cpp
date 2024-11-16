#include <iostream>
#include <vector>
using namespace std;

bool is_sub(vector < string > sub, string s) {
	for(int i=0;i<sub.size();i++) {
		for(int j=0;j<=(int)s.length() - (int)sub[i].length();j++) {
			bool found = true;
			for(int k=0;k<sub[i].length();k++) {
				if(s[j+k] != sub[i][k]) {
					found = false;
					break;
				}
			}
			if(found)
				return true;
		}
	}
	return false;
}

int main() {
	int k,n;
	string s;
	cin>>k>>n;
	vector < string > sub(k);
	for(int i=0;i<k;i++)
		cin>>sub[i];
	while(n--) {
		cin>>s;
		cout<<((s.length() >= 47 || is_sub(sub, s)) ? "Good" : "Bad")<<"\n";
	}
	return 0;
}
