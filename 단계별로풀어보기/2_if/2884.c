#include <stdio.h>

int main(){
    int H, M;

    scanf("%d %d",&H, &M);

    M -= 45;
    if(M >= 0) printf("%d %d",H, M);
    else if(H == 0) printf("%d %d",23, 60 + M);
    else printf("%d %d",H-1, 60 + M);

    return 0;
}