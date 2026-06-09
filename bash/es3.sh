#!/bin/bash
#Si scriva un programma che riceve due argomenti. Se
#entrambi sono dei file, stampa il contenuto di entrambi

echo "manda path1"; read path1
echo "manda path2"; read path2
if [[ -f $path1 && -f $path2 ]] ; then
 cat $path1 ; cat $path2
else
 echo "erroreee"
fi
