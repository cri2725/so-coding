#!/bin/bash
#quanti vini prodotti in ogni citta
cat vini.txt | cut -d " " -f 3 | sort | uniq -c

#calcola quanti anni di differenza ce tra il vino piu vecchio e quello piu nuovo
 cat vini.txt | cut -d " " -f 2 | sort
vecchio=$(tail -1)
nuovo=$(head -1)
differenza = $(( vecchio - nuovo ))
echo " la differenza è $differenza "
