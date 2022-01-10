count = int(input(""))
sum = 0
for counter in range(0,count):
    operations = input()
    if operations[1] == '-':
        sum -= 1
    if operations[1] == '+':
        sum += 1

print(sum)
