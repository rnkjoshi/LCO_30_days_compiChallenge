kara_glass = int(input("Glasses sold by Kara:"))
rani_glass = int(input("Glasseas sold by rani"))
kara_earned = kara_glass * 5
rani_earned = rani_glass * 7
if rani_earned > kara_earned:
    print("Rani earned ",rani_earned-kara_earned," more than kara")
else:
    print("Kara earned ",kara_earned-rani_earned," more than Rani")
