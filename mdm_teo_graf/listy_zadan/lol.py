def test(prev, prevprev, n):
    now = 1 + prev
    now /= prevprev
    if now == 0 and n < 300:
        print("OSZ KURWA ", n)
    elif n < 300:
        test(now, prev, n+1)



test(1, -2.0000001, 2)