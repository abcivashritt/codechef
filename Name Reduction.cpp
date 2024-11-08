#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		vector < int > count(26, 0);
		vector < int > local_count(26, 0);
		string a, b, temp;
		bool ans = true;
		cin>>a>>b>>n;
		for(int i=0;i<a.length();i++)
			count[a[i]-'a']++;
		for(int i=0;i<b.length();i++)
			count[b[i]-'a']++;
		while(n--) {
			cin>>temp;
			for(int i=0;i<temp.length();i++)
				local_count[temp[i]-'a']++;
		}
		for(int i=0;i<26;i++)
			if(local_count[i] > count[i])
				ans = false;
		cout<<(ans?"YES":"NO")<<"\n";
	}
	return 0;
}
