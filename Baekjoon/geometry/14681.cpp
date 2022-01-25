// 사분면 고르기
// 구현, 기하학
#include <iostream>
int main(){
    int x,y;
    std::cin>>x>>y;
    std::cout<<(x>0&&y>0?1:x<0&&y>0?2:x<0&&y<0?3:4);
}