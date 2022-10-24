from os import preadv


a = 1
b = 1


for i in range(1, 40):
    now = a**2 + b
    now /= a + b
    temp = a
    a = now
    b = temp

    if a != 1:
        print("KURWAA")
        break

a = 1
b = 2

for i in range(3, 20):
    now = b**2-1
    now /= a

    temp = b
    b = now
    a = temp

    if i != now:
        print("KURWAAAAAAAA2")
        break

