// 76. 이항계수(메모이제이션)
#include <iostream>
using namespace std;
typedef long long ll;
ll mem[21]={1};
ll fact(ll x){mem[x]= x>1?x*fact(x-1):1;}
int main(){
    int N,R;
    cin>>N>>R;
    fact(20); 
    cout<<mem[N]/(mem[N-R]*mem[R]);
}