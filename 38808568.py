for _ in range(int(input())):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    c = 0
    s = 0
    for i in range(n):
        c = c + a[i] -k
        if(c < 0):
            print(i+1)
            s = 1
            break
    if(s == 0):
        print((sum(a)//k) + 1)
        