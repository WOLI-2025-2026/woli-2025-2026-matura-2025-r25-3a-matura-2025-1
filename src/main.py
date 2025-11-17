#dawid szarwas

#zad 2.3

lines = [line.strip() for line in open("/workspaces/matura-2025-r25-3a-szawarma/zalaczniki-2025/symbole.txt")]
mapping = {"o": "0", "+": "1", "*": "2"}

max_wartosc = 0
max_symbole = ""

for s in lines:
    liczba_trojkowy = ""
    for ch in s:
        liczba_trojkowy += mapping[ch]
    
    wartosc = int(liczba_trojkowy, 3)

    if wartosc > max_wartosc:
        max_wartosc = wartosc
        max_symbole = s

#zad 2.4

suma = 0

for s in lines:
    liczba_trojkowy = ""
    for ch in s:
        liczba_trojkowy += mapping[ch]

    suma += int(liczba_trojkowy, 3)

rev = {"0": "o", "1": "+", "2": "*"}
suma_symbole = ""

if suma == 0:
    suma_symbole = "o"
else:
    trzy = ""
    value = suma
    while value > 0:
        trzy = str(value % 3) + trzy
        value //= 3

    for cyfra in trzy:
        suma_symbole += rev[cyfra]


with open("/workspaces/matura-2025-r25-3a-szawarma/src/wyniki2_3_4.txt", "w") as f:
    f.write("2.3 " + str(max_wartosc) + " " + max_symbole + "\n")
    f.write("2.4 " + str(suma) + " " + suma_symbole + "\n")
