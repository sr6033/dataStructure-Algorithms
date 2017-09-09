#Bubble Sort

def bubbleSort(arr, n):
	for i in range(n):
		for j in range(n-1):
			if arr[j] > arr[j+1]:
				temp = arr[j]
				arr[j] = arr[j+1]
				arr[j+1] = temp

def main():
	n = input("Enter the length: ")
	var = raw_input("Enter the elements: ")
	arr = map(int, var.split())

	bubbleSort(arr, n)

	print arr

main()