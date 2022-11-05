def mod(x, k, n):
    if n == 1:
        return 0

    if k == 1:
        return x % n
    elif k % 2 == 1:
        return ((x % n) * mod(x, (k-1)/2, n) * mod(x, (k-1)/2, n)) % n
    else:
        return (mod(x, k/2, n) * mod(x, k/2, n)) % n