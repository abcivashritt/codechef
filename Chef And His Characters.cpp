#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int c = 0;
		string s;
		cin>>s;
		vector < int > visited(26, -1);
		for(int i=0;i<s.length();i++) {
			if(i-4 >= 0 && visited[s[i-4] - 'a'] <= i-4)
				visited[s[i-4] - 'a'] = -1;
			visited[s[i] - 'a'] = i;
			if(visited['c' - 'a'] != -1 && visited['h' - 'a'] != -1 && visited['e' - 'a'] != -1 && visited['f' - 'a'] != -1)
				c++;
		}
		if (c == 0)
			cout<<"normal\n";
		else
			cout<<"lovely "<<c<<"\n";
	}
	return 0;
}
