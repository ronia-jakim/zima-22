n = 6

sasiedzi = [
    [1, 5],
    [0, 2],
    [1, 3],
    [2, 4],
    [3, 0],
    [4, 0]
]

odwiedzone = [0] * n
kolorowanie = [0] * n

def zad2(j, kolor):
    odwiedzone[j] = 1
    kolorowanie[j] = kolor

    for i in sasiedzi[j]:
        if not odwiedzone[i]:
            if not zad2(i, kolor * -1): return False
            
        if kolorowanie[i] == kolorowanie[j]:
            return False
    return True

if zad2(0, 1):
    print("JEST DWUDZIELNY SKURWIEL")
else:
    print("NIE JEST DWUDZIELNY SKURWIEL")