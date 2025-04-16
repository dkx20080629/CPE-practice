#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string a,b;
	set<string> d;
	while(cin >> a){
		for (int i=0; i<a.size(); i++){
			if (isalpha(a[i])){
				a[i]=towlower(a[i]);
			}else{
				a[i]=' ';
			}
		}
		stringstream ss(a);
		while(ss >> a){
			d.insert(a);
		}
	}
	for (string i:d){
		cout << i << "\n";
	}
	return 0;
}