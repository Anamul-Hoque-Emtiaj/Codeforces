n = int(input())
s = input()
c0 = 0
c1 = 0
for i in range(n):
    if(s[i]=="1"):
        c1=c1+1
    else:
        c0=c0+1
print(max(c1,c0)-min(c1,c0))