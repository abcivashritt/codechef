#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		string s;
		unordered_set < char > st;

		cin>>s;
		for(int i=0;i<s.length();i++)
			st.insert(s[i]);
		cout<<st.size()<<"\n";
	}
	return 0;
}
