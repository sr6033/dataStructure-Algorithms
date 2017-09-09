#Binary Search using recursion

def binarySearch(arr, x, l, r):
	if l == r:
		if x == arr[l]:
			return l
		else:
			return -1
	else:
		mid = (l + r) / 2
		if x <= arr[mid]:
			return binarySearch(arr, x, l, mid)
		else:
			return binarySearch(arr, x, mid+1, r)

def main():
	arr = []
	n = input("Enter the length: ")
	var = raw_input("Enter the elements: ")
	arr = map(int, var.split())
	x = input("Enter the element to be searched: ")
	pos = binarySearch(arr, x, 0, n-1)

	if pos > 0:
		print "Position of %d is %d .\n" % (x, pos + 1)
	else:
		print "Element not found.\n"

main()