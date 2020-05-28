def gcd(int x,int y):
    if v!=0:
        return gcd(y,x%y)
    else:
        return x;

n=int(input())
m=int(input())
result = gcd(n,m)
print(n/result,"/",m/result)
