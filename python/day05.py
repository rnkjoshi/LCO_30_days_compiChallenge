a = [66,45,53,50,60]
for i in range(0,5):
   for j in range(i,4):
       if a[i] < a[j]:
           temp = a[i]
           a[i] = a[j]
           a[j] = temp
print(a[4])
