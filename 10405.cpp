#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string a,b;
	while(getline(cin, a) && getline(cin, b)){
		int n=a.size(),m=b.size();
		int dp[n+1][m+1];
		for (int i=0; i<n+1; i++) dp[i][0]=0;
		for (int i=0; i<m+1; i++) dp[0][i]=0;
		for (int i=1; i<n+1; i++){
			for (int j=1; j<m+1; j++){
				if (a[i-1]==b[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
				}else{
					dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
				}
			}
		}
		cout << dp[n][m] << "\n";
	}
	return 0;
}