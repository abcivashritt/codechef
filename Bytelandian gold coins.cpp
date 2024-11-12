#include <iostream>
#include <map>
using namespace std;

map < long long, long long > mymap;

long long maximize(long long n) {
	if(mymap.find(n) != mymap.end())
		return mymap.find(n)->second;
	if(n == 0) {
		mymap.insert(pair<long long,long long>(n, 0));
		return 0;
	}
	long long ans = max(n, maximize(n/2) + maximize(n/3) + maximize(n/4));
	mymap.insert(pair<long long,long long>(n, ans));
	return ans;
}

int main() {
	long long n;
	while(cin>>n) {
		cout<<maximize(n)<<"\n";
	}
}
