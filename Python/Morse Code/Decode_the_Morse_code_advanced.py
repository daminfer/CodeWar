"""Problème Rank: 4 Kyu

Lors de la transmission du code Morse, la norme internationale précise que :

"Dot" - est long d'une unité de temps.
"Dash" - a une longueur de 3 unités de temps.
Pause entre les points et les tirets dans un caractère - dure 1 unité de temps.
Pause entre les caractères à l'intérieur d'un mot - dure 3 unités de temps.
Pause entre les mots - dure 7 unités de temps.

Pour ce kata, nous supposons que la réception du message est effectuée automatiquement par le matériel 
qui vérifie la ligne périodiquement, et si la ligne est connectée 
(la clé de la station distante est en panne), 1est enregistrée,
et si la ligne n'est pas connectée (clé à distance est activé), 0est enregistré.
Une fois le message entièrement reçu,
il vous parvient pour le décodage sous la forme d'une chaîne contenant uniquement les symboles 0 et 1.

Par exemple, le message HEY JUDE, qui est "···· · −·−−   ·−−− ··− −·· ·" peut être reçu comme suit:

1100110011001100000011000000111111001100111111001111110000000000000011001111110011111100111111000000110011001111110000001111110011001100000011

Comme vous pouvez le voir, cette transmission est parfaitement précise selon la norme, 
et le matériel a échantillonné la ligne exactement deux fois par "point".

re.findall() -> Renvoie toutes les correspondances sans chevauchement du motif dans la chaîne,
sous la forme d'une liste de chaînes.
La chaîne est analysée de gauche à droite et les correspondances sont renvoyées dans l'ordre trouvé.

"""


def decode_bits(bits):
    import re
    
    # remove trailing and leading 0's
    bits = bits.strip('0')
    
    # find the least amount of occurrences of either a 0 or 1, and that is the time hop
    time_unit = min(len(m) for m in re.findall(r'1+|0+', bits))
    
    # hop through the bits and translate to morse
    return bits[::time_unit].replace('111', '-').replace('1','.').replace('0000000','   ').replace('000',' ').replace('0','')

def decode_morse(morseCode):
    return ' '.join(''.join(MORSE_CODE[letter] for letter in word.split(' ')) for word in morseCode.strip().split('   '))