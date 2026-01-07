def adjust(arr):
    for i in range(10):
        arr[i] = i


arr: list[int] = [0] * 100

print(arr[:10])
adjust(arr)
print(arr[:10])
