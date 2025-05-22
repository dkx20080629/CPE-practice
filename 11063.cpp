#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,time=0;
    while(cin >> n && n){
        int a,t;
        set<int> s;
        vector<int> v;
        time++;
        bool output=true;
        for (int i=0; i<n; i++){
            cin >> a;
            v.push_back(a);
            if (i==0){
                t=a;
                if (a<1) {
                    output=false;
                }
            }
            else {
                if (t>a){
                    output=false;
                }
            }
        }
        for (int i=0; i<n; i++){
            for (int j=i; j<n; j++){  
                if (s.find(v[i]+v[j])!=s.end()){
                    output=false;
                }else{
                    s.insert(v[i]+v[j]);
                }
            }
        }
        if (!output){
            cout << "Case #" << time << ": It is not a B2-Sequence.\n";
        }else{
            cout << "Case #" << time << ": It is a B2-Sequence.\n";
        }
    }
}