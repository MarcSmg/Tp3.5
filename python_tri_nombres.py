import time
import tracemalloc
def trier_et_analyser(liste):
    start_time = time.time()
    tracemalloc.start()

    liste = [4.5,2.4,3.3,25.6,11.1,5.2]
    liste_croissante = sorted(liste)
    liste_decroissante = sorted(liste, reverse=True)
    minimum = min(liste)
    maximum = max(liste)

    current, peak = tracemalloc.get_traced_memory()
    tracemalloc.stop()
    end_time = time.time()
    return liste_croissante, liste_decroissante, minimum, maximum, end_time - start_time, peak

ma_liste = [4.5,2.4,3.3,25.6,11.1,5.2]
resultats = trier_et_analyser(ma_liste)
print("Liste à trier")
print(ma_liste)
print("Liste triée (croissant):", resultats[0])
print("Liste triée (décroissant):", resultats[1])
print("Minimum:", resultats[2])
print("Maximum:", resultats[3])
print("Temps d'exécution:", resultats[4], "secondes")
print("Mémoire utilisée (peak):", round(resultats[5] / 1024**2, 2), "Mo")

