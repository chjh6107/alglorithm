// 체스판 다시 칠하기
// 브루트포스
#include <iostream>
#include <vector>
using namespace std;
vector<string> board;
int main(){
    int n,m,res=214700000,cnt1,cnt2;
    cin>>n>>m;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        board.push_back(str);
    }
    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            cnt1=0;cnt2=0;
            for(int x=i;x<i+8;x++){
                for(int y=j;y<j+8;y++){
                    if(!(x%2)){
                        if(board[x][y]==(y%2?'W':'B')) cnt1++;
                        if(board[x][y]==(y%2?'B':'W')) cnt2++;
                    }
                    else{
                        if(board[x][y]==(y%2?'B':'W')) cnt1++;
                        if(board[x][y]==(y%2?'W':'B')) cnt2++;
                    }
                }
            }
            res=min(res,min(cnt1,cnt2));
        }
    }
    cout<<res;
}