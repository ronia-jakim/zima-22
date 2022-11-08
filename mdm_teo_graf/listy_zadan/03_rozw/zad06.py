
def an(n, k, A, P):
    if n == k + 1:
        ret = 0
        for i in range(0, k+1):
            ret += P[i] * A[i]
        return ret
    else:
        