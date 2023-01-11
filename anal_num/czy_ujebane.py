#MAX = [7.5, 8.5, 11.5, 8.5, 8, 10.5, 10, 11.5]
#MOJE = [7.5, 6, 8.5, 9, 7, 5, 6.5, 4]

MOD1 = [7.5, 8.5, 11.5, 8.5]
MOD1MY = [7.5, 6, 8.5, 9]

MOD2 = [8, 10.5, 10, 11.5, 11]
MOD2MY = [7, 5, 6.5, 4, 2]

MOD3 = [15.5]
MOD3MY = [8.5]

suma_max = sum(MOD1) + sum(MOD2) + sum(MOD3)
suma_moje = sum(MOD1MY) + sum(MOD2MY) + sum(MOD3MY)

proc_1 = sum(MOD1MY) / sum(MOD1)
proc_2 = sum(MOD2MY) / sum(MOD2)
proc_3 = sum(MOD3MY) / sum(MOD3)

if proc_1 < 0.4 or proc_2 < 0.4 or proc_3 < 0.4:
    print("TAK DEBILU")
    print(proc_1)

    print(proc_2)

    print(proc_3)
else:
    print(suma_moje / suma_max)

    print(proc_1)

    print(proc_2)

    print(proc_3)