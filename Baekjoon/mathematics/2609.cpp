// 최대공약수와 최소공배수
#include <iostream>
using namespace std;

int gcd(int a, int b){
    return a%b?gcd(b,a%b):b;
}
int main(){
    int n,m,res;
    cin>>n>>m;
    res=gcd(n,m);
    cout<<res<<"\n"<<(n*m)/res;
}