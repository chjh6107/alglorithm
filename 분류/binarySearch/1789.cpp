// 수들의 합(binary search)
// 이분 탐색
#include <iostream>
using namespace std;
int main(){
    int flag;
    long long S,sum,left=1,mid=1,right;
    cin>>S;
    right=S;
    while(left<=right){
        sum=0;
        flag=0;
        mid=(left+right)/2;
        for(int i=1;i<=mid;i++){
            sum+=i;
            if(sum>S){
                flag=1;
                break;
            }
        }
        if(flag) right=mid-1;
        else left=mid+1;
    }
    mid=(left+right)/2;
    cout<<mid;
}