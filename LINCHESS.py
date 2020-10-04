t=int(input())
l = []
while (t>0):
    N,K=input().split()
    N,K=int(N),int(K)
    A=input().split()
    A=[int(i) for i in A]
    lst=[]
    for i in A:
        if (K%i==0):
            lst.append(i)
    if (len(lst)==0):
        l.append(-1)
    else:
        l.append(max(lst))
    t-=1
for i in l:
    print(i)
