// 75. 최대 수입 스케쥴(priority_queue 응용문제)
// 구조체버전
#include <bits/stdc++.h>
using namespace std;
typedef struct _Data{
    int money;
    int when;
    _Data(int a,int b):money(a),when(b){};
    bool operator<(_Data &b){ //얘에 의해서 정렬됨, 내림차순
        return when>b.when;
    }
}Data;
int main(){
    priority_queue<int> pq;
    vector<Data> v;
    int N,D,M,res=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d %d",&M,&D);
        v.push_back(Data(M,D));
    }
    sort(v.begin(),v.end());
    for(int i=v.front().when,j=0; i>=1;i--){
        for(;j<N;j++){
            if(v[j].when<i)break;
            pq.push(v[j].money);
        }
        if(!pq.empty()){
            res+=pq.top();
            pq.pop();
        }
    }
    printf("%d",res);
}