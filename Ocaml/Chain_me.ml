(* Problème Rank: 7 Kyu *)

(* 
   
Write a generic function chainer
Write a generic function chainer that takes a starting value, 
and an array of functions to execute on it (array of symbols for Ruby).

The input for each function is the output of the previous function (except the first function, 
which takes the starting value as its input). 
Return the final value after execution is complete.

let add n = n + 1 in
let mult n = n * 30 in

chain 2 [add; mult] (* -> 90 *)

*)

let chain init_val functions =
  List.fold_left ( |> ) init_val functions
