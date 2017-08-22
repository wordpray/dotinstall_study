score = int(input("score?"))

if score > 80:
    print("Greate!")
elif score > 60:
    print("Good!")
else:
    print("So So...")

print("Greate!" if score > 80 else "soso...")
