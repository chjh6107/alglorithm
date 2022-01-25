// 피보나치 수 4
#include<iostream>
using namespace std;
string cur="1",prv="0";
void sum(){
    string res(cur.size()>prv.size()?cur.size():prv.size(),'0');
    int temp,carry=0;
    for(int i=0;i<res.size();i++){
        temp=carry;
        carry=0;
        if(i<cur.size())temp+=cur[cur.size()-1-i]-'0';
        if(i<prv.size())temp+=prv[prv.size()-1-i]-'0';
        if(temp>=10){
            carry=1;
            temp-=10;
        }
        res[res.size()-i-1]=temp+'0';
    }
    if(carry)res.insert(res.begin(),'1');
    prv=cur;
    cur=res;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)sum();
    cout<<(n<2?n?"1":"0":cur);
}