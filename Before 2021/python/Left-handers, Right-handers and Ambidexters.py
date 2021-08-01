x = input()
y = x.split()
l = int(y[0])
r = int(y[1])
a = int(y[2])
m1 = min(l,r) + a
m2 = max(l,r)
if(m1<=m2):
    print(2*m1)
else:
    d = m1 - m2
    if(d%2!=0):
        d = d-1
    print(2*m2 + d)
