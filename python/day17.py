name = "Aman Ankit Deepak Aman Deepak Amit Ankit Vansh Aman Sagar"
names = name.split(" ")
duplicate = []
result = []
for item in names:
    #print(item)
    if item not in duplicate:
        #print(item," is new\n")
        duplicate.append(item)
        #print(duplicate)
    else:
        if item in result:
            continue
        #print(item," is duplicate\n")
        result.append(item)
print(result)
