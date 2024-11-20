#include <iostream>
using namespace std;

int main() {
	int n,m,c, team_a = 0, team_b = 0, xi,yi,pi;
	cin>>n>>m>>c;
	while(n--) {
		cin>>xi>>yi>>pi;
		if(yi < xi*m + c)
			team_a += pi;
		else
			team_b += pi;
	}
	cout<<max(team_a, team_b)<<"\n";
	return 0;
}
