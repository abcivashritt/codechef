#include <iostream>
using namespace std;

int main() {
	int r,o,c;
	cin>>r>>o>>c;
	cout<<(c + (20-o)*36 > r ? "YES" : "NO");
	return 0;
}
