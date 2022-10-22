
def rec (c, xn, step):
    if step < 10:
        return rec(c, xn*(2-c*xn), step+1)
    else:
        return xn

xd = rec(5, 0.5, 0)

print(xd)