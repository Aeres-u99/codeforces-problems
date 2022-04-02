t1 = input()
t2 = input()
t3 = input()
D = {}
E = {}
for characters in t1+t2:
    if characters not in D.keys():
        D[characters] = 1
    else:
        D[characters] += 1

for characters in t3:
    if characters not in E.keys():
        E[characters] = 1
    else:
        E[characters] += 1

if D == E:
    print("YES")
else:
    print("NO")


