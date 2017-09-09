def insertionSort(arr, n):
	for i in range(n):
		k = arr[i]
		j = i - 1
		while j >= 0 and k < arr[j]:
			arr[j+1] = arr[j]
			j -= 1
		arr[j+1] = k

def main():
	n = input("Enter the length: ")
	var = raw_input("Enter the elements: ")
	arr = map(int, var.split())

	insertionSort(arr, n)

	print arr

main()