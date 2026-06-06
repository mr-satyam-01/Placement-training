def greet(name):
    print("Hello",name)

greet("satyam")

def oddeven(list):
    for num in list:
            if num % 2 == 0:
                 print(num, ":this is even")
            else:
                 print(num,":this is odd")
        
   
        


oddeven([2,3,4,5,6,7])

# -------------------------reverse
# a = "satyam"
# b = ""
# for i in range(a.len()-1, -1, -1):
#      b = b + a[i]
# print(b)

# --------------------------------fibonacci
a = 0
b = 1
c = 0
print(a)
print(b)
for i in range (0, 10):
     c = a+b
     print(c)
     a=b
     b=c

# ------------------------swap

def swap(e,f):
     e,f=f,e
     print(e,f)


swap(10,20)

# ---------------------multiple value using *args
# * Used to pass multiple positional arguments.
# * Stored as a tuple.

def sum_all(numbers):
    return sum(numbers)

result = sum_all([1, 2, 3, 4, 5])
print(result)

# ------------------------with key value pairs using **kwargs
# * Used to pass multiple keyword arguments (key=value pairs).
# * Stored as a dictionary.

def details(**kwargs):
    for key, value in kwargs.items():
        print(key, ":", value)

details(name="Satyam", age=20, city="Pune")


# ------------lambda function(nameless or anonymous -------------lambda arguments: expression

addition = lambda a,b:a+b
print(addition(4,5))
# -------------------------

oddEven = lambda num:num%2==0
print(oddeven)

print(oddEven(4))
# ----------------------------reverse

reversed = lambda string:string[::-1]

print(reversed("satyam"))

# -----------------------------------------------prime 
# num = int(input("Enter your number: "))

def prime(num):
    if num < 2:
        print("Not Prime")
        return

    for i in range(2, num // 2 + 1):
        if num % i == 0:
            print("This is not prime")
            return

    print("This is prime")

# prime(num)

# ----------------------------------------2nd largest in a list
def largest(numbers):
    max_num = numbers[0]

    for num in numbers:
        if num > max_num:
            max_num = num

    return max_num

print(largest([1, 2, 3, 4, 5, 6, 7]))

# ----------------------------------using lambda uppercase to lowercase-

# lowercase = lambda string:


# -----------------global and local keyword
# global: we can access it from anywhere in the code
# local: we can access it in a specific function

balance = 1000

def bank(amount):
    global balance

    if amount <= balance:
        balance -= amount
        print("Withdraw successful, remaining amount:", balance)
    else:
        print("Withdraw failed. Insufficient balance.")

bank(100)


# -------------------------vowels count 
def count(word):
    count = 0
    for ch in word:
        if ch.lower() in "aeiou":
            count += 1
    return count

print(count("satyam"))


# ----------------------factorial
def factorial(num):
    fact = 1
    for i in range (1, num +1):
        fact = fact * i
    return fact
        
print(factorial(5))

# ------------------------------list sort
def sort(numbers):
    for num in numbers:
        for i in range (0,num):
            if num[i]>num[i]:
                num[i]

         