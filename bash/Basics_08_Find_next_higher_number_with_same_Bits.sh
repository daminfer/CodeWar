#!/bin/bash

# Problème Rank: 6 Kyu

# Your task is to find the next higher number (int) with same '1'- Bits.

# I.e. as much 1 bits as before and output next higher than input. Input is always an int in between 1 and 1<<30 (inclusive). No bad cases or special tricks...

# Some easy examples:
# Input: 129  => Output: 130 (10000001 => 10000010)
# Input: 127 => Output: 191 (01111111 => 10111111)
# Input: 1 => Output: 2 (01 => 10)
# Input: 323423 => Output: 323439 (1001110111101011111 => 1001110111101101111)
# First some static tests, later on many random tests too;-)!

# Hope you have fun! :-)

n=$1

nb_of_ones(){
echo "obase=2;$1" | bc | sed -e 's/\(.\)/\1\n/g' | grep '1' | wc -l
}

noo=$(nb_of_ones $n)
nxt=$(echo 1 + $n | bc)

while (($(nb_of_ones $nxt)!=noo))
do
  nxt=$(echo 1 + $nxt | bc)
done

echo $nxt # NB: inefficient for huge numbers should use a string based method instead ...