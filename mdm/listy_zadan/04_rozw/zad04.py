def binary_gcd(a, b):
    if a == 0:
        return b
    # sprawdza, czy tylko jedna liczba jest parzysta
    bol = (a % 2 == 0) ^ (b % 2 == 0)

    if bol:
        if a % 2 == 1: return binary_gcd(b, a)
        return binary_gcd(a//2, b)

    # jezeli obie sa nieparzyste
    elif (a+b) % 2 == 0:
        if a > b: return binary_gcd(a-b, b)
        return binary_gcd(b-a, a)
    
    # jezeli obie sa parzyste, to na pewno obie dzieli 2, wiec mozna zwrocic 2 * gcd(a/2, b/2)
    else:
        return 2 * binary_gcd(a//2, b//2)