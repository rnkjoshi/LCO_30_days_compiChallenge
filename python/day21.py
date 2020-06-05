def solve(int n):
    num = 0
    while n > 0:
        num = num + n%10
        n = n / 10
    print(num)


number = int(input())
solve(number)
