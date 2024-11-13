#include <iostream>
#include <set>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		set < int > s;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(s.find(temp) == s.end())
				s.insert(temp);
			else
				s.erase(temp);
		}
		cout<<*s.begin()<<"\n";
	}
	return 0;
}
