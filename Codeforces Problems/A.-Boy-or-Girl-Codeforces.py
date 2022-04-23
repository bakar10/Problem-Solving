x=input()
list=[]
for i in x:
    if i  not in list:
        list.append(i)
    else: continue
if len(list)%2==0:
    print("CHAT WITH HER!")
else: print("IGNORE HIM!")