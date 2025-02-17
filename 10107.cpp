#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int n,c=0;
    vector<int> a;
    while (cin >> n){
        c++;
        a.push_back(n);
        sort(a.begin(),a.end());
        if (c%2==0){
            cout << (a[(c+1)/2]+a[(c-1)/2])/2 << "\n";
        }else{
            cout << a[c/2] << "\n";
        }
    }
    return 0;
}
