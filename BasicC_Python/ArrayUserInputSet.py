# Python code to take user input for array elements
size = int(input("Size of the Array: "))
array = []
for i in range(size):
    element = int(input(f"array[{i}] = "))
    array.append(element)

print("\nArray Elements:")
for i in range(size):
    print(f"array[{i}] = {array[i]}")