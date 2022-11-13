def euclid(n, m):
    if m == 0: return n
    else: return euclid(m, n % m)

def ext_gcd(a, b):
    R = [a, b]
    S = [1, 0]
    T = [0, 1]

    while R[1] != 0:
        q = R[0] // R[1]
        R = [R[1], R[0] - q * R[1]]
        S = [S[1], S[0] - q * S[1]]
        T = [T[1], T[0] - q * T[1]]

    print(S[0], T[0])

    return R[0]

"""
        ooooooo
       ooo oooo
    o oo    oo oo
"""

def zad(k, M):
