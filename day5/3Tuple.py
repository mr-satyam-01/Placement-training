# Tuple is ordered
# It is immutable
# Store duplicate element
# It can store different different data types

tup1 = (1,2,3,4,5)
b = list(tup1)
print(b)
print(type(b))

# difference btw tuple and list
a = (1,2,3)
# a(0) = 10 
print(a)

# list is mutable and tuple is immutable
b = [1,2,3]
b[0] = 10
print(b)

nums = [5,3,2,2,1,4,5,2]
print(nums[::1])
print(nums[::-1])
