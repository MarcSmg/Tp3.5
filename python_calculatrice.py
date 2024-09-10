print("Bienvenue dans votre calculatrice !")
print("Choisissez une opération :")
def afficher_menu():
  """Affiche le menu des opérations disponibles."""
  print("Bienvenue dans votre calculatrice !")
  print("Choisissez une opération :")
  print("1. Addition")
  print("2. Soustraction")
  print("3. Multiplication")
  print("4. Division")
  print("5. Puissance")
  print("6. Modulo")
  print("7. Afficher l'historique")
  print("0. Quitter")

def obtenir_choix_utilisateur():
  """Obtient le choix de l'utilisateur et le valide."""
  while True:
    choix_menu = int(input("Votre choix (0-7) : "))
    if 0 <= choix_menu <= 7:
      return choix_menu
    else:
      print("Choix invalide. Veuillez saisir un nombre entre 0 et 7.")

def effectuer_operation(operation, a, b):
  """Effectue l'opération spécifiée sur les nombres a et b."""
  if operation == "+":
    return a + b
  elif operation == "-":
    return a - b
  elif operation == "*":
    return a * b
  elif operation == "/":
    if b == 0:
      raise ZeroDivisionError("Division par zéro")
    return a / b
  elif operation == "**":
    return a ** b
  elif operation == "%":
    return a % b

def afficher_historique(historique):
  """Affiche l'historique des opérations."""
  if not historique:
    print("L'historique est vide.")
  else:
    print("Historique des opérations :")
    for i, operation in enumerate(historique, start=1):
      print(f"{i}. {operation}")

# Programme principal
historique = []

while True:
  afficher_menu()
  choix_menu = obtenir_choix_utilisateur()

  if choix_menu == 0:
    print("Au revoir !")
    break
  elif choix_menu == 7:
    afficher_historique(historique)
  else:
    a = float(input("Entrez le premier nombre : "))
    b = float(input("Entrez le deuxième nombre : "))
    operation = ['+', '-', '*', '/', '**', '%'][choix_menu - 1]
    resultat = effectuer_operation(operation, a, b)
    historique.append(f"{a} {operation} {b} = {resultat}")
    print("Résultat :", resultat)
    print("See ya!\n")
    print("Calculatrice\n")
    print("Hehe\n")
    print("<(￣▽￣)／\n-MarcSmg-\n\n")
   
    