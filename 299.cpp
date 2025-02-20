#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,s;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> m;
        int a[m];
        s=0;
        for (int j=0; j<m; j++){
            cin >> a[j];
        }
        for (int k=0; k<m-1; k++){
            for (int l=k+1; l<m; l++){
                if (a[k]>a[l]){
                    int t=a[k];
                    a[k]=a[l];
                    a[l]=t;
                    s++;
                }
            }
        }
        cout << "Optimal train swapping takes " << s << " swaps." << "\n";
    }
    return 0;
}