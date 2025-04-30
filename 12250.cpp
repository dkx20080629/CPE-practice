#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    int n=1;
    while(cin >> s && s!="#"){
        if (s=="HELLO"){
            ans="ENGLISH";
        }else if (s=="HOLA"){
            ans="SPANISH";
        }else if (s=="HALLO"){
            ans="GERMAN";
        }else if (s=="BONJOUR"){
            ans="FRENCH";
        }else if (s=="CIAO"){
            ans="ITALIAN";
        }else if (s=="ZDRAVSTVUJTE"){
            ans="RUSSIAN";
        }else{
            ans="UNKNOWN";
        }
        cout << "Case " << n << ": " << ans <<"\n";
        n++;
    }
}   