#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	double a,b;
	while (cin>>a>>b){
		if (a==0&&b==0) break;
		int c=ceil(sqrt(a));
		int d=floor(sqrt(b));
		cout << d-c+1 << "\n";
	}
	return 0;
}