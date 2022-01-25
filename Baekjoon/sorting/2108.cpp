// 통계학
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t,max=-2000000000, second=0,maxVal;
    double avg=0.0;
    scanf("%d",&t);
    vector<double> a(t), count(8001);

    for(int i=0;i<t;i++){
        scanf("%lf",&a[i]);
        avg+=a[i];
        count[a[i]+4000]++;
    }
    printf("%.lf\n",round(avg/t));
    sort(a.begin(),a.end());
    printf("%.lf\n",a[(t-1)/2]);
    
    for(int i=0;i<8001;i++){
        if(!count[i]) continue;
        if(count[i]==max){
            if(second){
                maxVal=i-4000;
                second=0;
            }
        }
        else if(count[i]>max){
            max=count[i];
            maxVal=i-4000;
            second=1;
        }
    }
    printf("%d\n",maxVal);
    printf("%.lf\n",a.back()-a.front());
}