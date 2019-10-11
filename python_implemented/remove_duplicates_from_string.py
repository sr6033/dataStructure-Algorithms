# Python program to remove duplicate characters from an
# input string
NO_OF_CHARS = 256


# Since strings in Python are immutable and cannot be changed
# This utility function will convert the string to list
def toMutable(string):
    List = []
    for i in string:
        List.append(i)
    return List


# Utility function that changes list to string
def toString(List):
    return ''.join(List)


# Function removes duplicate characters from the string
# This function work in-place and fills null characters
# in the extra space left
def removeDups(string):
    bin_hash = [0] * NO_OF_CHARS
    ip_ind = 0
    res_ind = 0
    temp = ''
    mutableString = toMutable(string)

    # In place removal of duplicate characters
    while ip_ind != len(mutableString):
        temp = mutableString[ip_ind]
        if bin_hash[ord(temp)] == 0:
            bin_hash[ord(temp)] = 1
            mutableString[res_ind] = mutableString[ip_ind]
            res_ind += 1
        ip_ind += 1

    # After above step string is stringiittg.
    # Removing extra iittg after string
    return toString(mutableString[0:res_ind])


# Driver program to test the above functions
string = "amulyasahoo"
print removeDups(string)
