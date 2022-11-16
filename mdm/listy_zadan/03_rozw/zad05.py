
def tm(R, M):
    R = [
            R[0]*M[0]+R[1]*M[2], 
            R[0]*M[1]+R[1]*M[3], 
            R[2]*M[0]+R[3]*M[2], 
            R[2]*M[1]+R[3]*M[3]
        ]
    return R

def fibb_matrix(n):
    if n == 0: return 0
    elif n == 1: return 1

    M =[1, 1, 1, 0]

    R = [1, 0, 0, 1]

    while n > 0:
        if n % 2 == 0:
            n /= 2
            M = tm(M, M)
        else:
            n -= 1
            R = tm(R, M)
            n /= 2
            M = tm(M, M)
    
    return R[1]

USED_FIBB = [0, 1]

def fibb(n):
    if n < 2:
        return n
    
    f = USED_FIBB[n-1] + USED_FIBB[n-2]
    USED_FIBB.append(f)
    return f

for i in range(0, 200):
    a = fibb(i)
    b = fibb_matrix(i)

    print(i)

    if a != b:
        print("NOSZ KURWA NO", i, a, b)
        break