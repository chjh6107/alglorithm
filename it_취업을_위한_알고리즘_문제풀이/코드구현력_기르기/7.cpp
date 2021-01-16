// 7. 영어단어 복구
#include <cstdio>

int main(){
	char n[100];
	gets(n);

	for(int i=0; n[i]!='\0'; i++)
		if(n[i]!=' ') printf("%c",'A'<=n[i]&&n[i]<='Z'?n[i]+32:n[i]);
}