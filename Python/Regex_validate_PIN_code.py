""" Problème Rank = 7 kyu
Les guichets automatiques acceptent les codes PIN à 4 ou 6 chiffres et 
les codes PIN ne peuvent contenir que 4 chiffres exactement ou 6 chiffres exactement.

Si la fonction reçoit une chaîne PIN valide, return true, sinon return false.

Exemples ( Entrée --> Sortie)
"1234"   -->  true
"12345"  -->  false
"a234"   -->  false
"""

def validate_pin(pin):
    return len(pin) in (4, 6) and pin.isdigit()

validate_pin("1234")