"""Problème Rank: 7kyu
Implémentez une fonction qui accepte 3 valeurs entières a, b, c.
La fonction doit renvoyer true si un triangle peut être construit avec des côtés de longueur donnée 
et false dans tous les autres cas.

(Dans ce cas, tous les triangles doivent avoir une surface supérieure à 0 pour être acceptés).
"""

def is_triangle(a, b, c):
    """Determine if three sides of given lengths can form a triangle.
    
        Args:
            a (int): First side length
            b (int): Second side length
            c (int): Third side lenght
        
        Returns:
            bool: True if the three sides given can form a triangle.
    """
    return a < b + c and b < a + c and c < a + b
    