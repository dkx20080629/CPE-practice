#include<bits/stdc++.h>
using namespace std;
//想法 -> bfs -> 每個點都做運算 並賦值給下一層 用dp儲存-> 在bfs遍歷下一層(push到queue之前)時 將下一層的path設為上一層+1
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int p,q,r,m,a,b,delay=0;
    cin >> p >> q >> r >> m;
    vector<int> in,path(p+q+r+1,0);//path(這才是dp)用來找最長路徑delay path[i]代表第i個點的長度
    vector<bool> v(p+q+r+1,false);//紀錄queue visited
    vector<vector<int>> map(p+q+r+1),dp(p+q+r+1); //dp紀錄每個點的狀態 *邏輯閘->dp[邏輯閘種類,訊號1,訊號2] *輸入端口->dp[邏輯閘種類,訊號] *輸出端口->dp[訊號]
    queue<int> que;
    for (int i=0; i<p; i++){
        cin >> a;
        in.push_back(a);
    }
    for (int i=0; i<q; i++){
        cin >> a;
        dp[p+1+i].push_back(a);
    }
    for (int i=0; i<m; i++){
        cin >> a >> b;
        map[a].push_back(b);
    }
    for (int i=0; i<p; i++){//初始化
        que.push(i+1);
        v[i+1]=true;
        path[i+1]=0;
    }
    while(!que.empty()){
        int node=que.front();
        que.pop();
        if (!map[node].empty()){
            if (node>p){//判斷不是輸入端口做計算 遍歷子節點 並把計算結果push到子節點
                for (int j=0; j<map[node].size(); j++){
                    if (dp[node][0]==1){//dp[node]後面的 0->種類, 1->訊號1, 2->訊號2 (明確定義在宣告那邊)
                        if (dp[node][1]==1 && dp[node][2]==1){
                            dp[map[node][j]].push_back(1);
                        }else{
                            dp[map[node][j]].push_back(0);
                        }
                    }else if (dp[node][0]==2){
                        if (dp[node][1]==1 || dp[node][2]==1){
                            dp[map[node][j]].push_back(1);
                        }else{
                            dp[map[node][j]].push_back(0);
                        }
                    }else if (dp[node][0]==3){
                        if (dp[node][1]==dp[node][2]){
                            dp[map[node][j]].push_back(0);
                        }else{
                            dp[map[node][j]].push_back(1);
                        }
                    }else if (dp[node][0]==4){
                        if (dp[node][1]==1){
                            dp[map[node][j]].push_back(0);
                        }else{
                            dp[map[node][j]].push_back(1);
                        }
                    }
                }
            }else{//輸入端口不用計算 把輸入值push到輸入端口
                dp[map[node][0]].push_back(in[node-1]);
            }
        }
        for (int i:map[node]) {
            path[i]=max(path[node]+1,path[i]);//節點可能有多個父節點 path找最大值
            delay=max(delay,path[i]);
            if (!v[i]){
                v[i]=true;
                que.push(i);         
            }
        }
    }
    cout << delay-1 <<"\n";//多算到輸出端-1
    for (int i = 1; i <= r; i++){  //cout dp最後r個輸出端口
        for (int j : dp[p + q + i]){
            cout << j << " ";
        }
    }
    return 0;
}