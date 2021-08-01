n=int(input())
s=input()
s = s.split()
sum=0
co=0
ce=0
for i in range(n):
    sum = sum + int(s[i])
    if(int(s[i])%2==0):
        ce=ce+1
    else:
        co=co+1
if(sum%2==0):
    print(ce)
else:
    print(co)