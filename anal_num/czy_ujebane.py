#MAX = [7.5, 8.5, 11.5, 8.5, 8, 10.5, 10, 11.5]
#MOJE = [7.5, 6, 8.5, 9, 7, 5, 6.5, 4]

MOD1 = [7.5, 8.5, 11.5, 8.5]
MOD1MY = [7.5, 6, 8.5, 9]

MOD2 = [8, 10.5, 10, 11.5, 11]
MOD2MY = [7, 5, 6.5, 4, 2]

MOD3 = [15.5, 20]
MOD3MY = [8.5, 8.5]

suma_max = sum(MOD1) + sum(MOD2) + sum(MOD3)
suma_moje = sum(MOD1MY) + sum(MOD2MY) + sum(MOD3MY)

proc_1 = sum(MOD1MY) / sum(MOD1)
proc_2 = sum(MOD2MY) / sum(MOD2)
proc_3 = sum(MOD3MY) / sum(MOD3)

pracownia = 22.5
#6 + 22.5

sprawdzian = 18

W = 0.15 * (suma_moje/ 62) + 0.10 * (pracownia/12)

ile = (2 - W) * 20 * 4 / 3

#print("EGZAMIN - ILE MUSZE: ", ile)

# print("CO JAK WYZERUJE EGZAMIN: ", W)


# print("ILE MAM PUNKTÓW Z ĆWICZEŃ: ", suma_moje + sprawdzian)
# print("ILE TO PROCENT: ", (suma_moje + sprawdzian) / (suma_max + 30))

# na_piatke = 118 / 150

# print("na piatke: ", na_piatke)
# print("CZYLI TERAZ TRZEBA ", na_piatke * (suma_max + 30), "ZEBY MIEC 5")

# print("ILE MI DO PIATKI BRAKUJE: ", 118-(suma_moje+sprawdzian), " ILE JESZCZE BEDZIE Z LIST: ", 120-suma_max)

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