n=int(input())
p=input().split(' ')
q=input().split(' ')
m = p[1:]
j = q[1:]
print(set(m+j))
if len(set(m+j))==n:
      print("I become the guy.")
else:
      print("Oh, my keyboard!")
