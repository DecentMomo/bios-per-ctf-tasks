string = input("Enter a string: ")
asciiList = [ord(char) for char in string]
reconstructedString = ''.join([chr(asciiValue) for asciiValue in asciiList])

print("Original string:", string)
print("ASCII values:", asciiList)
print("Reconstructed string:", reconstructedString)
