x = int(input())
if x <= 100 and x >= 1:
    for i in range(x):
        y = str(input())

        if len(y) > 10:
            print(y[0] + "" + str(len(y) - 2) + "" + str(y[len(y) - 1]))
        else:
            print(y)