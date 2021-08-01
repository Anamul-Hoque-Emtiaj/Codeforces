s1 = input()
s = s1.split()
n = int(s[0])
k = int(s[1])
for row in range(n):
    for col in range(n):
        if(row==col):
            print(k,end=" ")
        else:
            print("0",end=" ")
    print()
