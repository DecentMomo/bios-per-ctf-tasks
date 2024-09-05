string = input("Input: ")
totalSum = sum([int(char) * (len(string)-i) for i, char in enumerate(string)])

if totalSum % 11 == 0:
    print("Valid")
else:
    print("Invalid")
