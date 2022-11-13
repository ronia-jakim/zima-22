"""
    ooooo
    ooo oo
    oo o oo
    P o Q
    M Q
"""

def euclid(n, m):
    if m == 0: return n
    else: return euclid(m, n % m)

def gcd(k, M):
    if k == 1: return M[0]
    if k == 2: return euclid(M[0], M[1])
    else: 
        L = []
        R = []

        i = 0
        while i < k//2:
            L.append(M[i])
            i += 1
        while i < k:
            R.append(M[i])
            i += 1
        return gcd(2, [gcd(k//2, L), gcd(k-k//2, R)])

T = [33,121,66, 77, 88, 99, 242]

print(gcd(3, T))