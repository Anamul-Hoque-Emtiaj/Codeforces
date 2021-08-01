n = int(input())
f=0
for i in range(1,n+1):
    s =input()
    s1=s.split()
    if(int(s1[1])>=2400):
        if(int(s1[1])<int(s1[2])):
            f=1
if(f==1):
    print("YES")
else:
    print("NO")