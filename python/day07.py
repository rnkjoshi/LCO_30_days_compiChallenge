def multiplication(int x, int y):
    if y == 0:
        return 0
    return ( x + multiplication(x,y-1))


print(multiplication(12000000,365))
