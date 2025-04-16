#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	while(cin>>n){
		int a[n],t,s=0;
		for(int i=0; i<n; i++) cin>>a[i];
		for (int i=n-1; i>0; i--){
			for(int j=0; j<i; j++){
				if (a[j]>a[j+1]){
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
					s++;
				}
			}
		}
		cout << "Minimum exchange operations : " << s << "\n";
	}
	return 0;
}