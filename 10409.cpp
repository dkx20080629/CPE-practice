#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m,t,n,w,temp;
    string a;
    while (cin >> m && m!=0){
        t=1;n=2;w=3;
        for (int i=0; i<m; i++){
            cin >> a;
            if (a=="north"){
                temp=t;
                t=7-n;
                n=temp;
            }else if (a=="east"){
                temp=t;
                t=w;
                w=7-temp;
            }else if (a=="south"){
                temp=t;
                t=n;
                n=7-temp;
            }else{
                temp=t;
                t=7-w;
                w=temp;
            }
        }
        cout << t << "\n";
    }
    return 0;
}