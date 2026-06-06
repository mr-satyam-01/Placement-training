# List is mutable
# list can store different different data types
# List allow duplicate element
# list is ordered

a = [1,2,3,4,5]
a.append(6)
print(a)


# Difference between append and insert

a.insert(2, 100)
print(a)

# extend

a.extend([7, 8])
print(a)

# pop
x = a.pop()
print(a)
print(x)

#average
average = sum(a)/len(a)
print(average)