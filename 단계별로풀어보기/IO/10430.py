A,B,C=map(int,input().split())
print((A+B)%C,'\n',((A%C)+(B%C))%C,'\n',(A*B)%C,'\n',((A%C)*(B%C))%C,sep='')
