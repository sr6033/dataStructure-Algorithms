#Linear search

def linearSearch(arr, x):
	count = 0
	for i in arr:
		count += 1
		if i == x:
			return count
	if count == n:
		return -1

def main():
	var = raw_input("Enter the elements: ")
	arr = map(int, var.split())
	x = input("Enter search item: ")
	
	pos = linearSearch(arr, x)

	if pos > 0:
		print "Position of %d is %d.\n" % (x, pos)
	else:
		print "Element not found.\n"

main()