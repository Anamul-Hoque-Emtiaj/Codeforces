n = int(input())
t=0
f=0
i=1
while n>t:
    t = i*(i+1)/2
    i=i+1
    if(t==n):
        f=1
        break
if(f==1):
    print("YES")
else:
    print("NO")