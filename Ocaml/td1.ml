(***** TD 01 *****)


(* Exercice 1 *)

let f1 x = if x < 0 then -x else x;; (* int -> int *)

let f2 x = x /. 0.;; (* float -> float, le type existe mais mieux vaut ne pas appeler la fonction *)

(* BUG : decommentez pour observer le bug
let f3 x = (x + 1, x +. 1.0);; (* impossible, x ne peut être à la fois un entier et un flottant *)
*)

let f4 x y z = if x then y + 1 else z;; (* bool -> int -> int -> int, l'addition impose le type de y et du résultatet z doit avoir le même type que l'autre branche *)

let f5 x y z = if x then y else z;; (* bool -> 'a -> 'a -> 'a, même cas que précédement avec l'addition en moins, il n'y a plus de contraintes de type sur y *)

let f6 x y = x y;; (* ('a -> 'b) -> 'a -> 'b, le type de l'application de fonction *)

let rec f7 x = f7 x;; (* 'a -> 'b, on a aucune information à exploiter, cette fonction est une boucle infinie *)

let rec f8 x = if true then f8 x else 0;; (* 'a -> int, même si la deuxième branche ne peut être atteinte, elle impose son type à la première branche *)

(* Exercice 2 *)

let exp1 x y = int_of_float ((float_of_int x) ** (float_of_int y));;

exp1 2 6;;

let rec exp2 x y =
  if y = 0 then 1 else
    x * (exp2 x (y - 1));;

exp2 2 6;;

let even x = x mod 2 = 0;;

let rec exp3 x y = (* version basique *)
  if y = 0 then 1 else
  if even y then
    exp3 (x * x) (y / 2)
  else
    x * exp3 (x * x) (y / 2);;

exp3 2 6;;

let rec exp3' x y = (* factorisation d'un calcul *)
  if y = 0 then 1 else
    let res = exp3' (x * x) (y / 2) in
    if even y then res else x * res;;

exp3' 2 6;;

let exp3'' x y = (* version récursive terminale *)
  let rec iter x y acc =
    if y = 0 then acc else
    if even y then
      iter (x * x) (y / 2) acc
    else
      iter (x * x) (y / 2) (x * acc) in
  iter x y 1;;

exp3'' 2 6;;

let exp4 x y k = (* version modulaire, mod a une très faible priorité *)
  let rec iter x y acc =
    if y = 0 then acc else
    if even y then
      iter (x * x mod k) (y / 2) acc
    else
      iter (x * x mod k) (y / 2) (x * acc mod k) in
  iter x y 1;;

exp4 2019 2019 1000;;

(* Exercice 3 *)

let quadrature_rectangle f a b = (f a) *. (b -. a);;

let moyenne a b = (a +. b) /. 2.0;;

let quadrature_milieu f a b = (f (moyenne a b)) *. (b -. a);;

let quadrature_trapeze f a b = (moyenne (f a) (f b)) *. (b -. a);;

let quadrature_simpson f a b = 
  ((f a) +. 4.0 *. (f (moyenne a b)) +. (f b)) /. 6.0 *. (b -. a);; 

(* type attendu ((float -> float) -> float -> float -> float) -> (float -> float) -> float -> float -> int -> float
 * type inféré ('a -> float -> float -> float) -> 'a -> float -> float -> int -> float
 * en effet aucune contrainte n'est faite sur le type du paramètre f, seul l'usage lui donne un sens précis
 *)
let quadrature_composite quadrature f a b n = 
  let step = (b -. a) /. (float_of_int n) in
  let rec iter acc c k =
    if k = 0 then acc else
      let c' = c +. step in
      iter (acc +. (quadrature f c c')) c' (k - 1) in
  iter 0.0 a n;;

(* Exercice 4 *)

let rec mot_fibonacci n = (* NON! version exponentielle *)
  if n = 0 then "0" else
  if n = 1 then "01" else
    mot_fibonacci (n - 1) ^ mot_fibonacci (n - 2);;

mot_fibonacci 8;;

let mot_fibonacci' n = (* version linéaire *)
  let rec iter s0 s1 n =
    if n = 0 then s0 else iter s1 (s1 ^ s0) (n - 1) in
  iter "0" "01" n;;

mot_fibonacci' 8;;

let appliquer_morphisme f s =
  let n = String.length s in
  let rec iter i =
    if i = n then "" else
      f s.[i] ^ iter (i + 1) in
  iter 0;;

let rec appliquer_morphisme_itere f s n = 
  if n = 0 then s else
    appliquer_morphisme_itere f (appliquer_morphisme f s) (n - 1);;

let mot_fibonacci'' n = 
  let morphisme c = if c = '0' then "01" else "0" in
  appliquer_morphisme_itere morphisme "0" n;;

mot_fibonacci'' 8;;