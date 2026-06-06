# A set is an unordered collection of unique elements.
# It can store different different data types
# It can store same elements but print only unique elements


a = set()
a.add(2)
print(a)

b = {3,5,"MIT",6,4,(4,5,5)}
print(b)

print(type(a))
print(type(b))


# dictionary
a = {}
print(type(a))

# difference btw remove and discard
a = {1, 2, 3}

a.remove(2)
print(a)

b = {4, 5, 6}
b.discard(5)
print(b)