# duplicate value allowed
# A dictionary stores data in key-value pairs
# It is ordered collection
# It is mutable


student = {
    "name": "Satyam",
    "age": 21,
    "college": "MITADT",
    "year": "3rd year"
}

# printing
print(student)
print(student["name"])
student["city"] = "Pune"

# updating the value usind its keys
student["age"] = 22
print(student)

# popping an element 
student.pop("age")
print(student)


students = {
    101: {
        "name": "Satyam",
        "age": 21,
        "branch": "CSE"
    },
    102: {
        "name": "Rahul",
        "age": 22,
        "branch": "IT"
    }
}

students[101]["age"] = 24
print(students)
print(students[101]["name"])

# printing the square of these key value pairs

Square = {
    "a":2,
    "b":3,
    "c":4,
    "d":5
}

for key, value in Square.items():
    print(key,":",value * value)

# printing the square of consecutive numbers using dict compression
a = {x : x**2 for x in range(1,5)}
print(a)


# values that are less than 4

value = {
     "a":2,
    "b":3,
    "c":4,
    "d":5
}
output = {k:v for k,v in value.items() if v<4}
print(output)

s = "satyam"
print(s)