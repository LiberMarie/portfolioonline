#!/bin/bash

fichier=$1

if [ -e $fichier ]
then
    echo -e "Le fichier existe\n"
else
    echo -e "Le fichier n'existe pas\n\nFermeture du programme"
    exit
fi

if [ -d $fichier ]
then
    echo -e "c'est un dossier\nLa copie est impossible\nFermeture du programme"
    exit
else
    echo -e "c'est bien un fichier\nLa copie est possible\n"
fi
echo -e "Le fichier texte sera sauvegardé en $fichier.tkt"
touch $fichier.txt
cat $fichier > $fichier.txt

if cmp -s "$fichier" "$fichier.txt"; then
    echo -e "les fichier son pareil"
else
    echo -e "les fichier son differents"
fi