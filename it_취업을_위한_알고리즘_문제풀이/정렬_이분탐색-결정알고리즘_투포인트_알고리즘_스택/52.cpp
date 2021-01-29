// 52. Ugly Numbers(two pointers)
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, p2=1,p3=1,p5=1, min=2000000000;
    cin>>n;
    vector<int> a(n+1);

    a[1]=1;
    for(int i=2;i<=n;i++){
        min=a[p2]*2<a[p3]*3?a[p2]*2:a[p3]*3;
        min=a[p5]*5<min?a[p5]*5:min;

        if(a[p2]*2==min)p2++;
        if(a[p3]*3==min)p3++;
        if(a[p5]*5==min)p5++;
        a[i]=min;
    }
    cout<<a[n];
}