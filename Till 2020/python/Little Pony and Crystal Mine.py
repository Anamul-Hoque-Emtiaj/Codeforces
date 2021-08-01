n = int(input())
t = (n+1)/2
for i in range(1,n+1):
    if(i<=t):
        s = int((n-(2*i-1))/2)
        print('*' * s,end="")
        print('D' * (2*i-1), end="")
        print('*' * s)
    else:
        r=int(i-t)
        d=int(n-2*r)
        print('*' * r, end="")
        print('D' * d, end="")
        print('*' * r)