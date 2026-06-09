#!/bin/bash
echo "scrivi un nome"
read Nome
echo "ciao $Nome"
echo "ora metti 2 numeri e ti faccio la somma"
read n1;read n2
somma=$(( $n2 + $n1 ))
echo "la somma è $somma"
echo "ora ti printo i primi $somma numeri"
for ((i = 0 ; i < somma  ; i++ ))
do
echo "$i"
done
