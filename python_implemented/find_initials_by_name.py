# Python program to print
# initials of a name

# user define function
def printInitials(name):
    if (len(name) == 0):
        return
    print(name[0].upper()),
    for i in range(1, len(name) - 1):
        if (name[i] == ' '):
            print (name[i + 1].upper()),


def main():
    name = "Prabhat Kumar Singh"
    printInitials(name)


if __name__ == "__main__":
    main()

