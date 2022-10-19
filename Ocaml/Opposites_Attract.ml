(* Problème Rank: 8 Kyu *)

let lovefunc (flower1: int) (flower2: int): bool =
  if flower1 mod 2 = 0 && flower2 mod 2 <> 0
  then true 
  else if flower2 mod 2 = 0 && flower1 mod 2 <> 0
  then true
  else false ;;


lovefunc 2 3;

(* Aucune idée de pourquoi j'ai une syntaxe error ?

let lovefunc_2 (flower1: int) (flower2: int): bool =
  match flower1 mod 2, flower2 mod 2 with
  | (0, 1) | (1, 0) -> true
  | _ -> false ;;

lovefunc_2 2 3;

*)