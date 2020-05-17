def patternPrint(spaces,asterics):
    for i in range (0,spaces):
        print(" ",end="")
    for i in range(0,asterics):
        print("*",end="")
    print("\n")


n = int(input("enter height of pattern"))
counter=2
for i in range(0,n):
    patternPrint(n-i,counter)
    patternPrint(n-i,counter)
    counter = counter + 2