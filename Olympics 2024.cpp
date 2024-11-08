#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	cout<<max(0, 5-a) + max(0,5-b) + max(0,5-c)<<"\n";
	return 0;
}
