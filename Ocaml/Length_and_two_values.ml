(* Problème Rank: 7 Kyu *)

(*
   
Given an integer n and two other values, build an array of size n filled with these two values alternating.

Examples:

5, true, false     -->  [true, false, true, false, true]
10, "blue", "red"  -->  ["blue", "red", "blue", "red", "blue", "red", "blue", "red", "blue", "red"]
0, "one", "two"    -->  []

*)

let alternate n a b =
  let rec loop x y buff = function
    | 0 -> buff
    | k -> loop y x (x :: buff) (k-1) in
  match n land 1 with
  | 0 -> loop b a [] n
  | _ -> loop a b [] n