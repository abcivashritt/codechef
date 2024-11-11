#include <iostream>
using namespace std;

int main() {
	int a,b;
	string s1 = "https://www.codechef.com/practice",
		   s2 = "https://www.codechef.com/contests",
		   s3 = "https://discuss.codechef.com";
	cin>>a>>b;
	cout<<((a&b) ? s3 :(!a ? s1 : s2))<<"\n";
}
