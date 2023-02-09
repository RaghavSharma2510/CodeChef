    q=int(input())
    for i in range(q):
        n=int(input())
        v=[]
        for j in range(n):
            x=int(input())
            v.append(x)
        j=int(input())     
        for k in range(j):
            l,r,x=int(input()).spilt()
            p=0 
            for i in range(l-1,r):
                if((v[i]^x)>(v[i]&x)):
                    p=p+1
            print(p) 
            
            
