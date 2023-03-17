n1 = int(input("enter the element: "))
n2 = int(input("enter the element: "))
n3 = int(input("enter the element: "))
arr = [n1,n2,n3]
for i in range (0,len(arr)):
	for j in range (i,len(arr)-1):
		if arr[j] < arr[j+1]:
			arr[j],arr[j+1] = arr[j+1],arr[j]
print(arr)