T = int(input())
lst = []
while T>0:
    l = [0,0]
    a,b = input().split()
    Pc, Pr = int(a), int(b)
    Pcs = str(Pc)
    Prs = str(Pr)
    if len(Pcs)==1:
        cdigit = 1
    else:
        if Pc%9==0:
            cdigit = Pc//9
        else:
            cdigit = Pc//9 +1
    if len(Prs) == 1:
        rdigit = 1
    else:
        if Pr%9==0:
            rdigit = Pr//9
        else:
            rdigit = Pr//9 +1
    if cdigit == rdigit:
        l[0]=1
        l[1]=cdigit
    elif cdigit > rdigit:
        l[1]=rdigit
        l[0]=1
    else:
        l[0]=0
        l[1]=cdigit
    lst.append(l)
    T = T-1
for items in lst:
    for i in range(len(items)):
        if len(items)-1 == i:
            print(items[i],end="\n")
        else:
            print(items[i],end=" ")

