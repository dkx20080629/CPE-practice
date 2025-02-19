#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string n;
    int s;
    while (cin >> n){
        s=0;
        if (n=="0"){
            break;
        }
        for (int i=0; i<n.size(); i++){
            if (i%2==0){
                s+=int(n[i])-48;
            }else{
                s-=int(n[i])-48;
            }
        }
        if (s%11==0){
            cout << n << " is a multiple of 11.\n";
        }else{
            cout << n << " is not a multiple of 11.\n";
        }
    }
    return 0;
}