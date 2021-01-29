// 55. 기차운행(stack 응용)
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int n,train, target=1;
    vector<char> v;
    stack<int> s;
    cin>>n;

    for(int i=0;i<n;i++){
        scanf("%d",&train);
        s.push(train);
        v.push_back('P');
        while(!s.empty() && s.top()==target){
            s.pop();
            v.push_back('O');
            target++;
        }
    }
    if(s.empty()) for(char c:v) cout<<c;
    else cout<<"impossible";
}