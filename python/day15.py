n=int(input())
counter = 0
while n:
    counter = counter + n%10
    n = n/10
print(counter)
