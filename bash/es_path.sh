#!/bin/bash

#si scriva un programma che legge due path da tastiera. Se
#sono uguali, controlla che il path corrisponda a una cartella. Se
#affermativo, stampa il path

echo "manda path 1"
read p1
echo "manda path 2"
read p2
if [[ $p1 = $p2 ]]
then
    if [[ -d $p1 ]]
    then
	echo "il path è di una cartella ed è $p1"
    else
	echo "non è una cartella"
    fi
else
    echo "sono diversi"
fi
