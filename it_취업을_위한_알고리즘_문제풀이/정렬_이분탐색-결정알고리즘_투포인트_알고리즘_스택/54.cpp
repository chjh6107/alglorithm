// 54. 올바른 괄호(stack)
#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<char> Stack;

int main(){
    string str;
    cin>>str;

    for(char c:str){
        if(c=='(') Stack.push(c);
        else{
            if(Stack.empty()){
                cout<<"NO";
                return 0;
            }
            else Stack.pop();
        }
    }
    cout<<(Stack.empty()?"YES":"NO");
}