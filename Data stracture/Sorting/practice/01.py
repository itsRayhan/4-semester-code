arr= [10,8,55,5,68,85,5]
n= len(arr)
for i in range (n-1):
    for j in range (n-i-1):
        if arr[j]> arr[j+1]:
            temp =arr[j]
            arr[j] =arr [j+1]
            arr [j+1] =temp

print("sorted= ", end=" ")
for i in range (n):
    print( arr[i], end =","if i != n-1 else ".")