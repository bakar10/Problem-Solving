x, y, z = [int(x) for x in input().split()]

sum = 0
count = 1

for i in range(int(z)):
    sum = (x * (count)) + sum

    count = count + 1
q = int(sum - y)
if q < 0:
    print("0")
else:
    print(q)
