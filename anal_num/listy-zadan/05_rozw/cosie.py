def divided_diff(beg, end, X, Y):
    if beg == end:
        print(beg, end, Y[beg])
        return Y[beg]
    ret = (divided_diff(beg+1, end, X, Y) - divided_diff(beg, end-1, X, Y))/(end-beg)
    print(beg, end, ret)
    return ret

X = [-2, -1, 0, 1, 2, 3]
Y = [31, 5, 1, 1, 11, 30]

fun = divided_diff(0, 5, X, Y)

print(fun)