// 좌표 정렬하기
// 정렬
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v(100000),temp(100000);
void merge(int left,int mid, int right){
    int L = left;
    int R = mid+1;
    int K = left;
    while(L<=mid&&R<=right){
        if(v[L].first==v[R].first)
            temp[K++]=v[L].second<v[R].second?v[L++]:v[R++];
        else
            temp[K++]=v[L].first<v[R].first?v[L++]:v[R++];
    }
    while(L<=mid)temp[K++]=v[L++];
    while(R<=right)temp[K++]=v[R++];
    for(int i=left;i<=right;i++)v[i]=temp[i];
}
void mergeSort(int left,int right){
    int mid;
    if(left<right){
        mid=(left+right)/2;
        mergeSort(left,mid);
        mergeSort(mid+1,right);
        merge(left,mid,right);
    }
}
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        v[i]={a,b};
    }
    mergeSort(0,N-1);
    for(int i=0;i<N;i++)printf("%d %d\n",v[i].first,v[i].second);
}