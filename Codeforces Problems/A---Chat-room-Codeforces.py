x="hello"
def zzzz():
    s=input()
    z=0
    for i in range(len(s)):
        if s[i]==x[z]:
            z=z+1
        if z==5:
           return "YES"
    return "NO"
print(zzzz())