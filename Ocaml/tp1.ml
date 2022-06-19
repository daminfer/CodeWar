(***** TP 01 *****)


(* Exercice 1 *)

let val_abs x = if x < 0.0 then -.x else x;;

let signe x =
  if x = 0 then 0 else
  if x > 0 then 1 else -1;;

let rec fac n =
  if n = 0 then 1 else n * fac (n - 1);;

let est_diviseur n d = n mod d = 0;;

let est_premier n =
  if n < 2 then false 
  else let rec inter d =
    d * d > n || (not (est_diviseur n d) && inter (d + 1)) 
  in inter 2;;

(* Exercice 2 *)

print_string "Hello world !\n";; (* c'est une expression *)

let hello () = print_string "Hello world !\n";; (* c'est une définition de fonction, ici sans argument *)

hello ();; (* et l'appel associé *)

let hello2 name age =
  let str = "Hello, my name is " ^ name ^ " and I am " ^ (string_of_int age) ^ ".\n" in
  print_string str;;

hello2 "Julien" 34;;

(* Exercice 3 *)

let distance (x, y) = sqrt (x *. x +. y *. y);;

let random_point () = (Random.float 2.0 -. 1.0, Random.float 2.0 -. 1.0);;

let approche_pi n =
  let rec iter n =
    if n = 0 then 0 else
    if distance (random_point ()) <= 1.0 then
      1 + iter (n - 1)
    else iter (n - 1)
  in 4.0 *. (float_of_int (iter n)) /. (float_of_int n);;

approche_pi 100000;; 

let approche_pi' n =
  let rec iter acc n =
    if n = 0 then acc else
    if distance (random_point ()) <= 1.0
    then iter (acc + 1) (n - 1)
    else iter acc (n - 1)
  in 4.0 *. (float_of_int (iter 0 n)) /. (float_of_int n);;

approche_pi' 1000000;; 

(* Exercice 4 *)

let rec approche0 f a b p =
  let c = (a +. b) /. 2.0 in
  let fc = f c in
  if Float.abs fc < p then c else
  if (f a) *. fc < 0.0 then approche0 f a c p else approche0 f c b p;;

let f x = x *. x -. 2.0 in
approche0 f 1.0 2.0 0.000001;;

approche0 sin 3.0 4.0 0.000001;;

(* Exercice 5 *)

let min x y = if x < y then x else y

let plafonne_a n = fun m -> min n m

(* peut aussi s'écrire*)
let plafonne_a n m = min n m

(* ou encore, avec une évaluation partielle *)
let plafonne_a n = min n


(* ou encore, plus simplement *)
let plafonne_a  = min

let permute_args f a b = f b a

(* ou aussi, plus proche de l'esprit dans lequel la question est posée *)

let permute_args f = fun a b -> f b a



(* Exercice 6 *)

let est_facteur_position u v i =
  let n = String.length u in
  let rec iter k =
    k = n || (u.[k] = v.[i + k] && iter (k + 1)) in (* paresse du || pour le cas d'arrêt *)
  i >= 0 && i + n <= String.length v && iter 0;;

let est_prefixe u v = est_facteur_position u v 0;;
let est_suffixe u v = est_facteur_position u v (String.length v - String.length u);;
let est_facteur u v =
  let n = String.length v - String.length u in
  let rec iter k =
    k <= n && (est_facteur_position u v k || iter (k + 1)) in (* paresse du && pour le cas d'arrêt *)
  iter 0;; 
