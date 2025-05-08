def main():
    SIZE = 10
    array = []  
    
    # Reading input
    for i in range(SIZE):
        try:
            value = int(input(f"array[{i}] = "))
            array.append(value)
        except ValueError:
            print("Invalid input. Please enter an integer.")
            while True:
                try:
                    value = int(input(f"array[{i}] = "))
                    array.append(value)
                    break
                except ValueError:
                    print("Invalid input. Please enter an integer.")
    
    print("\nArray contents:")
    for i, value in enumerate(array):
        print(f"array[{i}] = {value}")

if __name__ == "__main__":
    main()