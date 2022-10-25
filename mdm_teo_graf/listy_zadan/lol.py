fuck = [1]

def count(n, prev, prevprev):
    now = fuck[n-2]
    now *= prev * prevprev
    now /= n

    pom = fuck[n-2]*(n-1)
    fuck.append(pom)

    print(now, " | ", n)
    if n+1 < 10:
        count(n+1, now, prev)    

count(2, 2, 1)