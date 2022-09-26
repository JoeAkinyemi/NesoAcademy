# method 1
x = []
for a in range(10):
    x.append(a**2)
print(x)

# method 2
squares = list(map(lambda x: x**2, range(10)))
print(squares)

# method 3
squares = [x**2 for x in range(10)]
print(squares)