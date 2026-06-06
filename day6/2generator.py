# generator is a special type of function that allow you to generate value on demand 
# it uses two keyword yield and next
# yield -> pauses the execution
# next -> generates the output
# Saves memory.
# difference btw yield and return

def generator(n):
    for i in range(n+1):
        yield i

g = generator(5)
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print("---------------------")

# ----------------------------------------------square
def square(n):
    for i in range(n+1):
        i = i*i
        yield i
g = square(5)
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print("---------------------")


# ----------------------------------------oddeven
def oddeven(n):
    for i in range(2, n+1):
        if i%2 == 0:
            print("this is even")
        else:
            print("this is odd")
        yield i
    
g = oddeven(5)
print(next(g))
print(next(g))
print(next(g))
print(next(g))
print("---------------------")

# -----------------------------------------------vowel count
def vowel(n):
    count = 0
    for ch in n:
        if ch in "aeiou":
            count += 1
            yield count
        
g = vowel("satyamabbabab")
print(next(g))
print(next(g))
print(next(g))
print(next(g))

print("---------------------")

# ------------------------------------------------prime
def prime(n):
    for num in range(2, n+1):
        is_prime = True
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                is_prime = False
                break
        if is_prime:
            yield num

g = prime(20)

print(next(g))
print(next(g))
print(next(g))
print(next(g))
print(next(g))

print("---------------------")

# ---------------------------------------------------
            
        



        
        


    