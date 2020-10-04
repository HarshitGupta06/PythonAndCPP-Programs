a=int(input("Please input the minimum limit of the prime number series\n"))
b=int(input("Please input the maximum limit of the prime number series\n"))
if a <=1:
    a = 2
if b <=1:
    b = 2
def get_Prime(a,b):
    flag=0
    for i in range(a,b):
        for j in range(2,i):
            if i%j==0:
                flag = flag+1
        if flag == 0:
            print(i,end=",")
print(f"The prime numbers within range {a} and {b} is: ")
get_Prime(a, b)
