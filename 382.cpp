#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "PERFECTION OUTPUT" <<"\n";
    while(cin >> n && n){
        int ans=0;
        for (int i=1; i<=n/2; i++){
            if (n%i==0){
                ans+=i;
            }
        }
        cout << setw(5) << n << "  ";
        if (n==ans){
            cout << "PERFECT" <<"\n";
        }else if(n>ans){
            cout << "DEFICIENT" <<"\n";
        }else{
            cout << "ABUNDANT" <<"\n";
        }
    }
    cout << "END OF OUTPUT"<<"\n";
}   