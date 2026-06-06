# Decorator
# A function that modifies another function.

def decorator(func):
    def wrapper():
        print("This is before")
        func()
        print("This is after")
    return wrapper

def deco(func):
    def wrapper():
        print("University")
        func()
        print("class")
    return wrapper

@decorator    
def hello():
    print("Hello world")

hello()


@deco
def destination():
    print("college")

destination()

# --------------------------------------add using deco

# def addition(func):
#     def wrapper(a, b):
#         print("before addition")
#         result = func(a, b)
#         print("after addition")
#         return result
#     return wrapper

# @addition
# def add(x, y):
#     return x + y

# print(add(5, 6))

# -----------------------------------uppercase using deco

def uppercase(func):
    def wrapper(string):
        print("before uppercase")
        result = func(string)
        print(result.upper())
        print("after uppercase")
        
    return wrapper

@uppercase
def upper(string):
    return string

upper("satyam")

# ---------------------------------------------------------power 

def power(func):
    def wrapper(a, b):
        print("Before power")
        result = func(a ,b)
        print(result)
        print("After power")
    return wrapper

@power
def pawar(a, b):
    return a ** b

pawar(2,3)

# ---------------------------------------------------
 



