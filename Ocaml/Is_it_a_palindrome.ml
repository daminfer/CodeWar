(* Problème Rank: 8 Kyu

Write a function that checks if a given string (case insensitive) is a palindrome.
Attention le module BatString n'est pas natif !
*)

let is_palindrome (s: string): bool = 
  let s = BatString.lowercase s in
  BatString.rev s = s