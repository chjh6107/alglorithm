// IOIOI
// 문자열
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,len,cnt=0;
    string s,ioi="I";
    cin>>n>>len>>s;
    while(n--)ioi+="OI";
    int ioiLen=ioi.size();
    for(int i=0;i<len-ioiLen+1;i++){
        int flag=1;
        if(s[i]=='O') continue;
        if(ioi[0]==s[i]){
            for(int j=1;j<ioiLen;j++){
                if(s[i+j]!=ioi[j]){
                    flag=0;
                    break;
                }
            }
        }
        if(flag){
            cnt++;
            i++;
        }
    }
    cout<<cnt;
}