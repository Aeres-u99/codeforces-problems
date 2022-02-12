def stabilizegifts(oranges, candies):
    ostd = min(oranges)
    cstd = min(candies)
    step = 0
#    print(f"Info: {ostd} {cstd} {step}")
    for orange, candy in zip(oranges, candies):
        step += max(orange - ostd, candy - cstd)
#        print(f"{orange} {candy} => {step}")
#        print(f"Info: {ostd} {cstd} {step}")
    
    return step


cases = int(input(""))
giftCandies = []
giftOranges = []
while cases > 0:
    gifts = int(input())
    candies = input("")
    candies = candies.split(" ")
    candies = [int(candy) for candy in candies]
    #print(candies)
    oranges = input("")
    oranges = oranges.split(" ")
    oranges = [int(orange) for orange in oranges]
    # print(oranges)
    print(stabilizegifts(oranges, candies))
    cases = cases - 1

