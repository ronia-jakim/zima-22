MAX = [7.5, 8.5, 11.5, 8.5, 8, 10.5, 10, 11.5]
MOJE = [7.5, 6, 8.5, 9, 7, 5, 6.5, 4]

suma_max = sum(MAX)
suma_moje = sum(MOJE)

MOD1 = [7.5, 8.5, 11.5, 8.5]
MOD1MY = [7.5, 6, 8.5, 9]

MOD2 = [8, 10.5, 10, 11.5]
MOD2MY = [7, 5, 6.5, 0]

proc_1 = sum(MOD1MY) / sum(MOD1)
proc_2 = sum(MOD2MY) / sum(MOD2)

if proc_1 < 0.4 or proc_2 < 0.4:
    print("TAK DEBILU")
else:
    print(suma_moje / suma_max)

    print(proc_1)

    print(proc_2)