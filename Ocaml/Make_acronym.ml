(* Problème Rank: 7 Kyu *)

(*

Fonction d'écriture qui prend une chaîne et en fait un acronyme.

Règle de fabrication de l'acronyme dans ce kata :

diviser la chaîne en mots par espace
prend chaque première lettre du mot dans la chaîne donnée
mettre en majuscule
rejoignez-les ensemble
Par exemple:

Code wars -> C, w -> C W -> CW
Remarque : Il y aura au moins deux mots dans la chaîne donnée !

*)

let to_acronym (inp: string): string =
  String.split_on_char ' ' inp |>
  List.map (fun x -> Char.uppercase_ascii @@ String.get x 0) |>
  List.to_seq |> String.of_seq