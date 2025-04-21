#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
	int t,n;
	cin >> t;
	for (int i=0; i<t; i++){
		cin >> n;
		int a[n],median,ans=0;
		for (int j=0; j<n; j++){
			cin >> a[j];
		}
		sort(a,a+n);
		median=a[(n-1)/2];
		for (int j=0; j<n; j++){
			ans+=abs(a[j]-median);
		}
		cout << ans << "\n";
	}
    return 0;
}