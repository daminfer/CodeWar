""" Problème Rank: 6 Kyu

Dans ce kata, vous devez écrire un simple décodeur de code Morse.
Bien que le code Morse soit désormais largement remplacé par les canaux de communication vocale et
de données numériques, il est toujours utilisé dans certaines applications à travers le monde.

"""
# MORSE_CODE est stocker sur codewar ...

def decode_morse(morseCode):
    return ' '.join(''.join(MORSE_CODE[letter] for letter in word.split(' ')) for word in morseCode.strip().split('   '))

print( decode_morse('.... . -.--   .--- ..- -.. .') )