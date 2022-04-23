x=str(input())
y=str(input())
if x.lower()==y.lower():
    print("0")
elif x.lower()>y.lower():
    print("1")
elif y.lower()>x.lower():
    print("-1")