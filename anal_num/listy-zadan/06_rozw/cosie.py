def divided_diff(beg, end, X, Y, P):
    if end - beg == 1:
        #print("SKURWIEL")
        return P[beg]
    elif beg == end:
        return Y[beg]
    
    bigus = divided_diff(beg+1, end, X, Y, P)
    smolus = divided_diff(beg, end-1, X, Y, P)

    diff = X[end] - X[beg]

    if diff != 0:
        ret = (bigus-smolus) / diff
        print(beg, end, ret)
        return ret
    else:
        print(beg, end, P[beg])
        return P[beg]


X = [-1, -1, 0, 0, 1, 1]
Y = [7, 7, 6, 6, 22, 22]
P = [-1, -1, 0, 0, 56, 56]

fun = divided_diff(0, 5, X, Y, P)

print(fun)