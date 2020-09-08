// 통계학
#include <stdio.h>

#define SWAP(a,b) {int temp = a; a = b; b = temp;}

void sort(int *arr, int n){
    for(int i=0;i < n-1; i++){
        for(int j=i + 1; j < n; j++){
            if(arr[i]>arr[j])
                SWAP(arr[i],arr[j]);
        }
    }
}

void avg(int *arr, int n){
    double tot;
    for(int i=0; i<n; i++) tot += arr[i];
    tot/=n;
    if(tot>0 && tot-(int)tot >= 0.5) tot+=0.5;
    else if(tot<0 && tot-(int)tot <= 0.5) tot-=0.5;
    printf("%d\n",(int)tot);
}

void center(int *arr, int n){
    sort(arr,n);
    printf("%d\n",arr[n/2]);
}

void mode(int *arr, int n){
    int freq[8001]={0,},mode=0;

    for(int i=0; i<n; i++) freq[arr[i]+4000]++;
    
    for(int i=0; i<8001; i++) if(freq[i]>freq[mode]) mode = i;
    
    for(int i=mode+1;i<8001;i++){
        if (freq[i] == freq[mode]) {
			mode = i;
			break;
        }
    }
    printf("%d\n",mode-4000);
}

void range(int *arr, int n){
    printf("%d\n",arr[n-1]-arr[0]);
}

int main(){
    int N, arr[500000];
    scanf("%d",&N);
    for(int i=0; i<N; i++) scanf("%d",&arr[i]);

    avg(arr, N);
    center(arr, N);
    mode(arr, N);
    range(arr, N);
}