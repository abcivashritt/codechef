#include <iostream>
using namespace std;

int main() {
        int x;
        double y;
        cin>>x>>y;
        printf("%.2f\n",((y>=x+0.50 && x%5==0)?y-x-0.50:y));
        return 0;
}
