s = input()
s= s.split()
f=0
dr=0
l=0
if(int(s[0])<int(s[1])):
    d=int(s[1])-int(s[0])
    if(d%2!=0):
        print(int(s[0])+int(d/2),end=" ")
        print("0",end=" ")
        print(7-int(s[1])+int(d/2))
    else:
        if(d==2):
            print(int(s[0]), end=" ")
            print("1", end=" ")
            print(7 - int(s[1]))
        else:
            print(int(s[0]) + 1, end=" ")
            print("1", end=" ")
            print(7 - int(s[1]) + 1)
elif(int(s[0])>int(s[1])):
    d = int(s[0]) - int(s[1])
    if (d % 2 != 0):
        print(7 - int(s[0]) +int(d/2))
        print("0", end=" ")
        print(int(s[1]) + int(d/2), end=" ")
    else:
        if (d == 2):
            print(7 - int(s[0]))
            print("1", end=" ")
            print(int(s[1]), end=" ")
        else:
            print(7 - int(s[0]) + 1)
            print("1", end=" ")
            print(int(s[1]) + 1, end=" ")
else:
    print("0 6 0")

