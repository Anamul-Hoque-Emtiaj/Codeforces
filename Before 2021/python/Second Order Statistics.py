n=int(input())
s=input()
f=0
s = s.split()
for i in range(n):
    for j in range(i + 1, n):
        if (int(s[i]) > int(s[j])):
            s[i], s[j] = s[j], s[i]
v = s[0]
for i in range(n):
    if (s[i] != v):
        f = 1
        r=s[i]
        break
if(f==1):
   print(r)
else:
    print("NO")