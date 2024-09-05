string = input("Enter a string: ")
keys = [0x01, 0x23, 0x45, 0x67, 0x89]
xorList = [(ord(char) ^ keys[i % len(keys)]) for i, char in enumerate(string)]

print("Original string:", string)
print("After using the key:", xorList)
