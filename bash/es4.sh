#!/bin/bash
#Si scriva un programma che per ogni file/cartella nella cartella
#corrente dice se esso è un file o una cartella.
for cosa in * ; do
if [[ -f $cosa ]] ; then
 echo "$cosa è un file"
elif [[ -d $cosa ]]; then
 echo "$cosa è una cartella"
fi
done
