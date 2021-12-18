def binarySearch(arr, item):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high) // 2
        guess = arr[mid]

        if guess == item:
            return mid
        
        if guess > item:
            high = mid - 1
        else:
            low = mid + 1
    
    return -1

arr = [i for i in range(0, 100)]

print(binarySearch(arr, 75))
print(binarySearch(arr, 9))
print(binarySearch(arr, 63))
print(binarySearch(arr, 28))
print(binarySearch(arr, 100))