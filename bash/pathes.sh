#!/bin/bash
#si scriva un programma che legge due path da tastiera. Se
#sono uguali, controlla che il path corrisponda a una cartella. Se
#affermativo, stampa il path.
read path1
read path2
p1=$path1
p2=$path2
if [[ $p1 == $p2 ]] then
if [[ -d $p1 ]] then
echo "$p1 esiste ed è una cartella"
fi
fi
