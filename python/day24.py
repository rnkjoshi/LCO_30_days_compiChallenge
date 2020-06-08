# n,m=int(input())
romanInt = [1,4,5,9,10,40,50,90,100,400,500,900,1000]
romanStr = ["I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"]
i=12
result = 590
while result>0:
    pos =int(result/romanInt[i])
    result = result%romanInt[i]
    while pos > 0:
        print(romanStr[i])
        pos = pos-1
    i = i- 1
