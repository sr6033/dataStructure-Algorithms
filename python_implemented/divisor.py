#Program to print the divisors of a number
#This program has a time complexity of O(sqrt(n))

import math

def PrintDivisors(n):
	l=[]
	for i in range(1,int(math.sqrt(n))+1):
		if n%i==0:
			if n/i==i:
				l.append(int(i))
			else:
				l.append(int(i))
				l.append(int(n/i))
	print(sorted(l)) 


def main():
	num=int(input("Enter a number : "))
	print("The diviors are as follows : ")
	PrintDivisors(num)

main()
