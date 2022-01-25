// 성 지키기
// 구현
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N,M,c=0,r=0;
    cin>>N>>M;
    vector<string> v(N);
    vector<bool>row(N);
    vector<bool>col(M);
    for(int i=0;i<N;i++){
        cin>>v[i];
        for(int j=0;j<M;j++){
            if(v[i][j]=='X'){
                col[j]=1;
                row[i]=1;
            }
        }
    }
    for(int i=0;i<N;i++)if(!row[i])r++;
    for(int i=0;i<M;i++)if(!col[i])c++;
    cout<<(r>c?r:c);
}