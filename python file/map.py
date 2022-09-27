def fahrenheit(T):
    return ((float(9)/5)*T + 32)
def celsius(T):
    return (float(5)/9)*(T-32)
temperatures = (36.5, 37, 37.5, 38, 39)

# method 1
F = list(map(fahrenheit, temperatures))
C = list(map(celsius, map(fahrenheit, temperatures)))
# print(F)
# print(C)

# method 2
temperatures_in_Fahrenheit = list(map(fahrenheit, temperatures))
temperatures_in_Celsius = list(map(celsius, temperatures_in_Fahrenheit))
print(temperatures_in_Fahrenheit)
print(temperatures_in_Celsius)

# OR by using LAMBDA

temp = [39.2, 36.5, 37.3, 38, 37.8] 
F = list(map(lambda x: (float(9)/5)*x + 32, temp))
print(F)

C = list(map(lambda x: (float(5)/9)*(x-32), F))
print(C)