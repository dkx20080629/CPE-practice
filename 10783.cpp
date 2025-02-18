#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,s;
    cin >> n;
    for (int i=0; i<n; i++){
        s=0;
        cin >> a >> b;
        for (int j=a; j<=b; j++){
            if (j%2==1){
                s+=j;
            }
        }
        cout << "Case " << i+1 << ": " << s << "\n";
    }
    return 0;
}
