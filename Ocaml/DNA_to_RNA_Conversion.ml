(* Problème Rank: 8 Kyu

Acide désoxyribonucléique, l'ADN est la principale molécule de stockage d'informations dans les systèmes biologiques. 
Il est composé de quatre bases d'acide nucléique Guanine ('G'), Cytosine ('C'), Adénine ('A') et Thymine ('T').

L'acide ribonucléique, ARN, est la principale molécule messagère des cellules. 
L'ARN diffère légèrement de l'ADN par sa structure chimique et ne contient pas de thymine.
Dans l'ARN, la thymine est remplacée par un autre acide nucléique, l'uracile ("U").

Créez une fonction qui traduit une chaîne d'ADN donnée en ARN.

Par exemple:

"GCAT"  =>  "GCAU"
La chaîne d'entrée peut être de longueur arbitraire - en particulier, elle peut être vide.
Toutes les entrées sont garanties valides, c'est-à-dire que chaque chaîne d'entrée ne sera composée que de 'G', 'C'et 'A'/ou 'T'.

*)

let dna_to_rna = String.map (function 'T' -> 'U' | c -> c)