// 58. 이진트리 깊이우선탐색(DFS)
#include <iostream>

void dfs(int v){
    if(v>7) return;
    else{
        // cout<<v<<" "; //PRE 
        dfs(v*2); //left
        // cout<<v<<" "; //IN
        dfs(v*2+1); //right
        std::cout<<v<<" "; //POST
    }
}

int main(){
    dfs(1);
}