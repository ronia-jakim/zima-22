
def tm(k, M, N):
    RET = []
    for i in range (0, k):
        r = []
        for j in range (0, k):
            s = 0
            for n in range(0, k):
                s += M[i][n] * N[n][j]
            r.append(s)
        RET.append(r)

    return RET

def calc(n, k, P, A):
    n = n-k
    M = []
    R = []
    for i in range(0, k-1):
        r = []
        p = []
        for j in range(0, k):
            if i == j:
                p.append(1)
                r.append(0)
            elif i + 1 == j:
                r.append(1)
                p.append(0)
            else:
                r.append(0)
                p.append(0)
        M.append(r)
        R.append(p)

    p = []

    for i in range(0, k-1):
        p.append(0)
    p.append(1)

    R.append(p)
    M.append(P)

    while n > 0:
        if n % 2 == 0:
            n /= 2
            M = tm(k, M, M)
        else:
            R = tm(k, M, R)
            n -= 1
            n /= 2
            M = tm(k, M, M)
    
    ret = 0
    for i in range(0, k):
        ret += A[i] * R[k-1][i]

    print(ret)

M = [2, 3, 4, 5]
A = [3, 4, 5, 6]

calc(9, 4, M, A)