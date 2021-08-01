s1 = input()
s = s1.split()
n = int(s[0])
m = int(s[1])
b1 = input()
b = b1.split()
a=[]
for i in range(n):
    a.append("0")
for i in range(m):
    x = int(b[i])
    for j in range(x-1,n):
        if(a[j]=="0"):
            a[j]=b[i]
for i in range(n):
    print(a[i],end=" ")
