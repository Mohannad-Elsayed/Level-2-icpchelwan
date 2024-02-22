from math import sqrt
w = int(input())
def isprime(p):
    if (p < 2): return False
    for x in range(2, int(sqrt(p))+1):
        if (p%x == 0):
            return False
    return True
for x in range(w):
    ww = input().split()
    a = int(ww[0])
    b = int(ww[1])
    val = a*a-b*b
    # print(val)
    if (isprime(val)):
        print("YES")
    else: print("NO") 