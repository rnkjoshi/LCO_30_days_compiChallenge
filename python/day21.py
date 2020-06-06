hour = int(input())
minute = int(input())
minAngle = 6*minutes
hourAngle = 30 * hour
angle = abs(minAngle-hourAngle)
if angle == 0:
    print("Both are at same point")
else:
    print("angle between hour and minutes is = ",angle)
