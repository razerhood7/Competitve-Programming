t = int(input())
for i in range(t):
    s = input()
    if len(s)>10:
        s = s[0]+str(len(s)-2)+s[len(s)-1]
    print(s)
