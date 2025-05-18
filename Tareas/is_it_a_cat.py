t = int(input())
ans = []

for _ in range(t):
    len_pa = int(input())
    palabra = input().strip()
    estados_aceptacion = {'q3'}
    estado_actual = 'q0'
    caracter_siguiente = ""
    j = 1

    for i in palabra:
        i = i.lower()
        if j < len_pa:
            caracter_siguiente = palabra[j].lower()
        else:
            caracter_siguiente = ""
        j += 1

        if i == 'm':
            if estado_actual == 'q0' and caracter_siguiente == 'e':
                estado_actual = 'q1'
            elif caracter_siguiente == 'm':
                continue
            else:
                break

        elif i == 'e':
            if estado_actual == 'q1' and caracter_siguiente == 'o':
                estado_actual = 'q2'
            elif caracter_siguiente == 'e':
                continue
            else:
                break

        elif i == 'o':
            if estado_actual == 'q2' and caracter_siguiente == 'w':
                estado_actual = 'q3'
            elif caracter_siguiente == 'o':
                continue
            else:
                break

        elif i == 'w':
            if estado_actual == 'q3':
                if caracter_siguiente == 'w':
                    continue
                elif caracter_siguiente == "":
                    pass
                else:
                    estado_actual = 'q4'
                    break
            else:
                break

        else:
            estado_actual = 'q0'
            break

    if estado_actual in estados_aceptacion:
        print("YES")
    else:
        print("NO")
