import os

def count_files_and_list_sizes(directory):
    file_count = 0
    file_list = []

    # Utiliser os.walk pour parcourir le dossier et ses sous-dossiers
    for root, dirs, files in os.walk(directory):
        for file in files:
            file_count += 1
            file_path = os.path.join(root, file)
            file_size = os.path.getsize(file_path)  # Obtenir la taille du fichier
            file_list.append((file_path, file_size))  # Ajouter le fichier et sa taille à la liste

    return file_count, file_list

# Exemple d'utilisation
directory = 'chemin/vers/dossier'
file_count, file_list = count_files_and_list_sizes(directory)

print(f"Nombre total de fichiers : {file_count}")
print("Liste des fichiers avec leurs tailles :")
for file_path, file_size in file_list:
    print(f"{file_path} - {file_size} octets")
