//2. 자연수의 합
#include <cstdio>

int main(){
	int a, b, sum=0;
	scanf("%d %d",&a,&b);
	for(int i=a; i<=b; i++)	{
		printf("%d",i);
		printf("%s",i!=b?" + ":"");
		sum+=i;
	}
	printf(" = %d",sum);
}