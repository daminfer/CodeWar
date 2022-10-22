(* Problème Rank: 8 Kyu *)

(*

Given a non-empty array of integers, return the result of multiplying the values together in order. Example:

[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24

*)

let rec grow (n: int list): int =
  match n with
  | [x] -> x
  | x :: xs -> x * grow xs 