N = int(input())
count=0
for i in range(N):
    word=input()
    for j in range(len(word)):
        if j != len(word)-1:
            if word[j]==word[j+1]:
                pass
            else:
                if word[j] in word[j+1:]:
                    break
        else:
            count +=1
print(count)