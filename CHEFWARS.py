T = int(input())
lst = []
while T>0:
    a,b = input().split()
    Health = int(a)
    Power = int(b)
    while Health > 0 and Power > 0:    
        Health = Health-Power
        Power = Power//2
    if Health <= 0:
        lst.append(1)
    else:
        lst.append(0)
    T=T-1
for i in range(len(lst)):
    if len(lst)-1 == i:
        print(lst[i],end="")
    else:
        print(lst[i],end="\n")

    

