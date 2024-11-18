#include <iostream>
#include <vector>
using namespace std;

bool is_palindrome(int a) {
	vector < int > rem;
	while(a > 0) {
		rem.push_back(a%10);
		a /= 10;
	}
	int i = 0, j = rem.size()-1;
	while(i < j) {
		if(rem[i] != rem[j])
			return false;
		i++;j--;
	}
	return true;
}

int main() {
	vector < int > count(100001, 0);
	for(int i=1;i<100001;i++) {
		count[i] = count[i-1];
		if(is_palindrome(i))
			count[i] += i;
	}
	int t;
	cin>>t;
	while(t--) {
		int l,r;
		cin>>l>>r;
		cout<<count[r] - count[l-1]<<"\n";
	}
	return 0;
}
