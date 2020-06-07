def tobin(n):
    bin = "";
    while(n/2!=0):
        if n%2==0:
            bin = bin + "0"
        else:
            bin = bin + "1"
    if n%2==1:
        bin = bin + "1"
    return bin

n = int(input())
bin = tobin(5)
print(bin)
