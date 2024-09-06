a = float(input("Entrez le coefficient a : "))
b = float(input("Entrez le coefficient b : "))
c = float(input("Entrez le coefficient c : "))

# Vérification si a est égal à 0
if a == 0:
    print("Ce n'est pas une équation du second degré.")
    exit()

# Calcul de DELTA
delta = b**2 - 4*a*c

# Calcul des racines
if delta > 0:
    x1 = (-b + delta**0.5) / (2*a)
    x2 = (-b - delta**0.5) / (2*a)
    print("Les racines de l'équation sont :", x1, "et", x2)
elif delta == 0:
    x = -b / (2*a)
    print("L'équation a une racine double :", x)
else:
    print("L'équation n'a pas de racines réelles.")