#include <bits/stdc++.h>
using namespace std;

int f(int n){
    int c=1;
    while (true){
        if (n==1){
            return c;
        }
        c++;
        if (n%2==0){
            n/=2;
        }else{
            n=3*n+1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,count,t;
    while(cin >> a >> b){
        cout << a << " " << b << " ";
        if (a>b){
            t=a;
            a=b;
            b=t;
        }
        count=1;
        for (int i=a; i<=b; i++){
            t=f(i);
            if (t>count){
                count=t;
            }
        }
        cout << count << "\n";
    }
    
    return 0;
}
