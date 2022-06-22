Gran = None
Chico = None
n = None
while True:
    num = (input("Escribe un numero, escribe Listo cuando acabes: "))
    if num == "Listo":
        break
    try:
        n = float(num)
    except:
        print("Valor invalido")
    s = int(n)
    l = int(n)
    if Chico is None:
        Chico = s
    elif s < Chico:
        Chico = s
    if Gran is None:
        Gran = l
    elif l > Gran:
        Gran = l
        continue
print("El numero mas grande es:", Gran)
print("El numero mas chico es:", Chico)
