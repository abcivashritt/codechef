#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	cout<<(x==y?"SAME":(x<y?"INCREASED":"DECREASED"))<<"\n";
	return 0;
}
