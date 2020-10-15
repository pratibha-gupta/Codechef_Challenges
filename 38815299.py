for _ in range(int(input())):
    n,k,x,y = map(int,input().split())
    s = x
    c = 0
    d = (x + k) % n
    while(s != d):
        if((x + k) % n == y):
            print("YES")
            c+=1
            break
        x = (x + k) % n
        d = x
    if(c == 0):
        print("NO")