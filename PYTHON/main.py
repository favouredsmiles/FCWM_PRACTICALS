print("Matrix Program")
# Accept the size of the matrices from the user
rows = int(input("Input the number of rows: "))
columns = int(input("Input the number of columns: "))

# Accept the first matrix from the user
matrix1 = []
for i in range(1, rows+1):
    row = []
    for j in range(1, columns+1):
        row.append(float(input(f"Input element ({i},{j}) of matrix 1: ")))
    matrix1.append(row)

# Accept the second matrix from the user
matrix2 = []
for i in range(1, rows+1):
    row = []
    for j in range(1, columns+1):
        row.append(float(input(f"Input element ({i},{j}) of matrix 2: ")))
    matrix2.append(row)

print()
operator = input("Input Operator [/,-,+,*]: ")
# Sum the matrices
result = []

for i in range(rows):
    row = []
    for j in range(columns):
        if operator == '+':
            row.append(matrix1[i][j] + matrix2[i][j])
        elif operator == '-':
            row.append(matrix1[i][j] - matrix2[i][j])
        elif operator == '/':
            row.append(matrix1[i][j] / matrix2[i][j])
        elif operator == '*':
            row.append(matrix1[i][j] * matrix2[i][j])
        result.append(row)


# Print the result
print()
print('Matrix 1 is ', matrix1)
print('Matrix 2 is ', matrix2)
print()
print("Operator is ", operator)
print()
print("Final Matrix Result is")
for row in result:
    print(row)
