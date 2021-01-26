// 45. 공주 구하기
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k,max, count=1,sel=1, asd=20;
    cin>>n>>k;
    vector<int> a(n+1,1);
    max=n;
    while(max!=1){
        if(a[count])sel++;
        if(sel>k){
            sel=1;
            a[count]=false;
            max--;
        }
        count++;
        if(count>n)count=1;
    }
    for(int i=1;i<=n;i++)
        if(a[i]) printf("%d",i);
}