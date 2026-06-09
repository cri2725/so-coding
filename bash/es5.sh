#!/bin/bash
#Si scriva un programma che riceve un intero come argomento.
#Se esso è minore di 10, crei i file 0.txt , ..., 9.txt
if ((  $# != 1 )) ; then
 echo "mi serve un numero"
fi
if ((  $1 < 10 )) ; then
 for (( i = 0 ; $i <= $1 ; i ++ )) ; do
 touch "$i.txt"
 echo "creo file $i"
 done
fi
