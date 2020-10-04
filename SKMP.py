from string import ascii_lowercase
a2z=list(ascii_lowercase)
lst = []
T=int(input())
while (T>0):
    s=list(input())
    n=len(s)
    s1=list(input())
    dict1={}
    for i in s:
        if (i not in dict1):
            dict1[i]=1
        else:
            dict1[i]+=1
    for i in s1:
        if (i in dict1):
            dict1[i]-=1
    temp=""
    for i in a2z:
        if (i in dict1 and i<=s1[0]):
            temp+=i*dict1[i]
            del dict1[i]
    for i in s1:
        temp+=i
    for i in a2z:
        if (i in dict1):
            temp+=i*dict1[i]
    lst.append(temp)
    T-=1
for i in lst:
    print(i)
