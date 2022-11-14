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

    ret = [S[0], T[0]]

    return ret

def zad(k, M):
    if k == 1: return [M[0]]
    if k == 2:
        return ext_gcd(M[0], M[1])

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

        coef_L = zad(k//2, L)
        coef_R = zad(k-k//2, R)

        new_L = []
        new_R = []

        i = 0
        while i < len(L): 
            new_L.append(coef_L[i] * L[i])
            i += 1

        i = 0
        while i < len(R): 
            new_R.append(coef_R[i] * R[i])
            i += 1

        sum_L = sum(new_L)
        sum_R = sum(new_R)

        vec = ext_gcd(sum_L, sum_R)

        i = 0
        while i < len(L):
            coef_L[i] *= vec[0]
            i += 1
        i = 0
        while i < len(R):
            coef_R[i] *= vec[1]
            i += 1

        ret = coef_L + coef_R

        return ret

print(zad(5, [3, 9, 21, 6, 27]))