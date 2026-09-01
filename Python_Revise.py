#basic 
print ("hello world!")

#syntax (Indentation)
if 5 > 2:
  print("Five is greater than two!")
  
#python variables
name = "Srushti"
age = 22
cgpa = 7.56
is_student = True

print (name)
print (age)
print (cgpa)
print (is_student)

#multiple variables
x = 1
y = 2
z = 3

print (x)
print (y)
print (z)

#same variable
a = b = c = 30

print (a, b, c)

#Data types
name = "Srushti"
age = 22
percentage = 85.5
is_passed = True

print (type(name))
print (type(age))
print (type(percentage))
print (type(is_passed))

#Numbers
p = 10
q = 9

print (p + q)  # addition
print (p - q)  # subtraction
print (p / q)  # division
print (p * q)  # multiplication
print (p % q)  # remainder
print (p // q) # floor division
print (p ** q) # power
print (p > q)  # greater than
print (p < q)  # less than
print (p == q) # equal to
print (p != q) # not equal to

#casting
m = 8
n = 7
o = 7.8

print(float(x))
print(int(y))
print(int(z))

# String to integer
number = int("25")

print(number + 5)

# 6. PYTHON STRINGS

name = "Srushti"

print(name)

# Indexing
print(name[0])
print(name[1])
print(name[-1])

# Length
print(len(name))

# Slicing
print(name[0:4])
print(name[:4])
print(name[2:])
print(name[-3:])

# Concatenation
first_name = "Srushti"
last_name = "Bakhare"

full_name = first_name + " " + last_name

print(full_name)

# Repetition
print("Hi " * 3)

# 7. PYTHON STRING METHODS

text = "Hello World"

print(text.upper())
print(text.lower())
print(text.strip())
print(text.replace("Hello", "Hi"))
print(text.split())

# Searching
print(text.find("World"))
print(text.count("l"))

# Checking
print(text.startswith("Hello"))
print(text.endswith("World"))

# String formatting
name = "Srushti"
age = 22

print(f"My name is {name} and I am {age} years old.")

# 8. PYTHON LISTS

numbers = [10, 20, 30, 40, 50]

print(numbers)

# Indexing
print(numbers[0])
print(numbers[-1])

# Slicing
print(numbers[1:4])

# Change value
numbers[0] = 100

print(numbers)

# List can contain different data types
mixed = [10, "Hello", 3.5, True]

print(mixed)

# Length
print(len(numbers))

# 9. PYTHON LIST METHODS

numbers = [10, 20, 30]

# Add at end
numbers.append(40)
print(numbers)

# Add at specific position
numbers.insert(1, 15)
print(numbers)

# Remove value
numbers.remove(15)
print(numbers)

# Remove last element
numbers.pop()
print(numbers)

# Sort
numbers = [50, 10, 40, 20, 30]

numbers.sort()
print(numbers)

# Reverse
numbers.reverse()
print(numbers)

# Copy
new_numbers = numbers.copy()
print(new_numbers)

# Count
numbers = [1, 2, 2, 3, 2, 4]

print(numbers.count(2))

# Index
print(numbers.index(3))

# 10. PYTHON TUPLES

my_tuple = (10, 20, 30, 40)

print(my_tuple)

# Indexing
print(my_tuple[0])
print(my_tuple[-1])

# Slicing
print(my_tuple[1:3])

# Length
print(len(my_tuple))

# Tuple cannot be changed
# my_tuple[0] = 100    # This gives an error

# Tuple methods
print(my_tuple.count(20))
print(my_tuple.index(30))

# 11. PYTHON SETS

numbers = {1, 2, 3, 4, 5}

print(numbers)

# Duplicate values automatically removed
numbers = {1, 2, 2, 3, 3, 3}

print(numbers)

# Add
numbers.add(10)
print(numbers)

# Remove
numbers.remove(10)
print(numbers)

# Discard
numbers.discard(100)     # Does not give error if value doesn't exist
print(numbers)

# Set operations
A = {1, 2, 3, 4}
B = {3, 4, 5, 6}

print(A.union(B))
print(A.intersection(B))
print(A.difference(B))

# 12. PYTHON DICTIONARIES

student = {
    "name": "Srushti",
    "age": 22,
    "branch": "ECE",
    "cgpa": 7.5
}

print(student)

# Access value
print(student["name"])
print(student["age"])

# get()
print(student.get("branch"))

# Add new key-value
student["college"] = "PBCE"

print(student)

# Change value
student["cgpa"] = 8.0

print(student)

# Remove
student.pop("age")

print(student)

# Keys
print(student.keys())

# Values
print(student.values())

# Key-value pairs
print(student.items())

# DICTIONARY + LOOP

marks = {
    "Maths": 80,
    "Python": 90,
    "DBMS": 85
}

for subject in marks:
    print(subject, marks[subject])

# LIST + LOOP

numbers = [10, 20, 30, 40, 50]

for number in numbers:
    print(number)

# BASIC IF + LIST

for number in numbers:
    if number > 25:
        print(number, "is greater than 25")
