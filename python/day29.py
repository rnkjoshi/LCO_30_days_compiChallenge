dist = float(input())
h = float(input())
m = float(input())
s = float(input())
s = s + m*60 + h*60*60
speed = (s/dist)*2.23694
print(speed)
