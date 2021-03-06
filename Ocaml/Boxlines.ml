(* Problème Rank: 7 Kyu

Boxlines
Given a X*Y*Z box built by arranging 1*1*1 unit boxes, write a function f(X,Y,Z) that returns the number of edges (hence, boxlines) of length 1 (both inside and outside of the box)

Notes
Adjacent unit boxes share the same edges, so a 2*1*1 box will have 20 edges, not 24 edges
X,Y and Z are strictly positive, and can go as large as 2^16 - 1
This is my first kata, so I hope every one will enjoy it <3

*)

let f (x: int) (y: int) (z: int): int =
  let sides x y z = x * (y + 1) * (z + 1) in
  (sides x y z) + (sides y z x) + (sides z x y);;