a = [1,2,3]
b=a
b.append(4)
print(a)

print(type((1,)))

print(10 == 10.0)

def func(x=([])):
    x.append(1)
    return x

print(func)