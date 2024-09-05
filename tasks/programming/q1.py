def task1(string):
    charList = list(string)
    reverseCharList = charList[::-1]
    reversedString = ''.join(reverseCharList)

    print(f"The string is: {string}")
    print(f"The list of charaters of {string} is: {charList}")
    print(f"The reverse list of charaters of {string} is: {reverseCharList}")
    print(f"THe reverse string is: {reversedString}")
    
    # Palindrome check
    if string == reversedString:
        print(f"{string}' is a palindrome.")
    else:
        print(f"{string}' is not a palindrome.")

str = input("Enter a string: ")
task1(str)