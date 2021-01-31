// 62. 병합정렬
#include <iostream>
using namespace std;
int tmp[10];

void merge(int *A, int left, int mid, int right){
    int L = left;
    int R = mid+1;
    int K = left;

    while(L<=mid && R<=right)                   // 정렬
        tmp[K++] = A[L]<A[R]?A[L++]:A[R++];
    while(L<=mid) tmp[K++]=A[L++];              // 나머지 값 처리
    while(R<=right) tmp[K++]=A[R++];
    for(int i=left;i<=right;i++)A[i]=tmp[i];    // 원래 배열에 복사
    
}

void mergeSort(int *A, int left, int right){
    int mid;
    if(left<right){
        mid=(left+right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid+1, right);
        merge(A,left,mid,right);
    }
}

int main(){
    int n, data[10];
    cin>>n;
    for(int i=0;i<n;i++) cin>>data[i];

    mergeSort(data, 0, n-1);
    for(int i=0;i<n;i++) cout<<data[i]<<" ";

}