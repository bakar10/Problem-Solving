x=int(input())
count=0
for i in range(x):
    y,z=[int(y) for y in input().split()]
    if (z-y)>=2:
        count=count+1
print(int(count))