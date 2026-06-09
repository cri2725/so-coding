#!/bin/bash
#Si scriva uno script bash che ciclicamente chiede all'utente di inserire un file e, se il file
#esiste, stampa il numero di linee che il file contiene, altrimenti un messaggio di errore. Se
#l'utente inserisce la stringa quit , il programma termina.
while true ; do
 echo "dimmi il path"
 read path
 if [[ $path == "quit" ]]; then
  echo "fine programma"
  break
 elif [[ -f $path ]]; then
  wc -l $path
 elif [[ -d $path ]]; then
 echo "è una cartella scemo"
 fi
done
