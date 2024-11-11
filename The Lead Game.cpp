#include <iostream>
using namespace std;

int main() {
	int n,sc1, sc2, score1=0,score2=0,lead,max_lead_score=0;
	cin>>n;
	while(n--) {
		cin>>sc1>>sc2;
		score1 += sc1;
		score2 += sc2;
		if(abs(score1 - score2) > max_lead_score) {
			max_lead_score = abs(score1 - score2);
			if(score1 > score2)
				lead = 1;
			else
				lead = 2;
		}
	}
	cout<<lead<<" "<<max_lead_score<<"\n";
	return 0;
}
