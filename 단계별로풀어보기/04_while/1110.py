num = int(input())
chk = num
newNum = 0
temp = 0
cnt = 0
while True:
    temp = num//10 + num%10
    newNum = (num%10)*10 + temp%10
    cnt += 1
    num = newNum
    if newNum == chk:
        break
print(cnt)