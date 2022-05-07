#!/bin/bash

# Version 1: qui ne marche pas ^^' sur un cas de test random

bouncingBall() {
    h=$1
    bounce=$2
    h_window=$3
    times=1
    if [[ $h < 0 || $h == 0 ]] || [[ $bounce < 0 || $bounce > 1 || $bounce == 1 || $bounce == 0 ]] || [[ $h_window > $h || $h_window == $h ]]
    then
        echo "-1"
        return
    fi

    h=$(echo "$h * $bounce" | bc )
    while (( $(echo "$h > $h_window" | bc )))
    do
        h=$(echo "$h * $bounce" | bc )
        times=$(( $times + 2 ))
    done
    echo $times
}

# Version 2: 

returnVal=0

bouncingBall_2() {
  if [ $( echo "$1 > 0" | bc ) -eq 1 -a $( echo "$3 < $1" | bc -l ) -eq 1 -a  $( echo "$2 < 1 && $2 > 0" | bc ) -eq 1 ];
  then
    let "returnVal+=2"
    newHeight=$( echo "scale=8; $1 * $2" | bc )
    bouncingBall $newHeight $2 $3
  else
    let "returnVal-=1"
    echo $returnVal
  fi
}

# h, bounce, window:
bouncingBall 10.0 0.6 10.0