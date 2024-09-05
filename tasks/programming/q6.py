string = input("Enter a string: ")
xorList = [ord(char) ^ 0x69 for char in string]
reconstructedString = ''.join([chr(xorValue ^ 0x69) for xorValue in xorList])


print("Original string:", string)
print("XOR with 0x69 list:", xorList)
print("Reconstructed string:", reconstructedString)
