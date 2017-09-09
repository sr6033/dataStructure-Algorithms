#Selection Sort

def selectionSort(arr, n):
	f = 0
	for i in range(n):
		k = i
		for j in range(i, n):
			if arr[j] < arr[k]:
				f = 1
				k = j

		if f == 1:
			temp = arr[i]
			arr[i] = arr[k]
			arr[k] = temp

		f = 0

def main():
	n = input("Enter the length: ")
	var = raw_input("Enter the elements: ")
	arr = map(int, var.split())

	selectionSort(arr, n)

	print arr

main()