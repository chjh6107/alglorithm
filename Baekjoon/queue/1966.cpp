// 프린터 큐
// 구현, 자료구조, 시뮬레이션, 큐
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int T,N,M,a,cnt,cur;
    queue<pair<int, int>> Q;
    vector<int> v;
    cin>>T;
    while(T--){
        cur=0;
        cnt=0;
        cin>>N>>M;
        for(int i=0;i<N;i++){
            cin>>a;
            Q.push({i,a});
            v.push_back(a);
            sort(v.rbegin(),v.rend());
        }
        while(1){
            if(Q.front().second==v[cur]){
                cnt++;
                if(Q.front().first==M){
                    cout<<cnt<<"\n";
                    break;
                }else{
                    Q.pop();
                    cur++;
                }
            }else{
                Q.push(Q.front());
                Q.pop();
            }
        }
        v.clear();
        while(!Q.empty()) Q.pop();
    }
}