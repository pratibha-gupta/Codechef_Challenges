import math
for _ in range(int(input())):
    n = int(input())
    if(n == 1):
        print(1)
    elif(n == 2):
        print(-1)
    elif(n == 3):
        a = [2,3,1]
        s = " ".join(str(i) for i in a)
        print(s)
    else:
        if(math.ceil(math.log(n,2)) == math.floor(math.log(n,2))):
            print(-1)
        else:
            l = [2,3,1]
            i = 4
            while(i<=n):
                if(math.ceil(math.log(i,2)) == math.floor(math.log(i,2))):
                    l.append(i+1)
                    l.append(i)
                    i += 2
                else:
                    l.append(i)
                    i += 1
            s1 = " ".join(str(i) for i in l)        
            print(s1)                