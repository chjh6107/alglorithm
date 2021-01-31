// 62. 병합정렬
#include <iostream>
using namespace std;
int data[10], tmp[10];

void mergeSort(int left, int right){
    int mid;
    int p1, p2, p3;
    if(left<right){
        mid=(left+right)/2;
        mergeSort(left, mid);
        mergeSort(mid+1, right);
        p1=left;
        p2=mid+1;
        p3=left;
        while(p1<=mid && p2<=right){
            if(data[p1]<data[p2]) tmp[p3++]=data[p1++];
            else tmp[p3++]=data[p2++];
        }
        while(p1<=mid) tmp[p3++]=data[p1++];
        while(p2<=right) tmp[p3++]=data[p2++];
        for(int i=left; i<=right; i++) data[i]=tmp[i];
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>data[i];

    mergeSort(1, n);
    for(int i=1;i<=n;i++) cout<<data[i]<<" ";

}