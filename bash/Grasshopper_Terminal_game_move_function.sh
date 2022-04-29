#!/bin/bash

# Problème Rank: 8 Kyu

#Fonction de déplacement du jeu terminal
#Dans ce jeu, le héros se déplace de gauche à droite. 
#Le joueur lance les dés et se déplace deux fois du nombre de cases indiqué par les dés .

#Créez une fonction pour le jeu terminal qui prend la position actuelle du héros et le lancer (1-6) 
#et renvoie la nouvelle position.

#Exemple:
#move(3, 6) should equal 15

position=$1
roll=$2
# Pas besoin $2 donne le chiffre aléatoire ... de=$(( $RANDOM % 7 ))
echo $(( $1 + $2*2))
