(* Problème Rank: 8 Kyu
   
Clock shows h hours, m minutes and s seconds after midnight.

Your task is to write a function which returns the time since midnight in milliseconds.

Example:
h = 0
m = 1
s = 1

result = 61000
Input constraints:

0 <= h <= 23
0 <= m <= 59
0 <= s <= 59

*)

let past (h: int) (m: int) (s: int): int =
  (* Convertion en miliseconde: 
     s -> s * 1000
     m -> m * 60 * 1000
     h -> h * 60 * 60 * 1000
  *)

  (s * 60) + (m *60 * 1000) + (h * 60 * 60 * 1000);;

past 0 1 1;;