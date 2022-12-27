#!/bin/bash

read -p "Veuillez entrer le calcul : " chiffre1 signe chiffre2
echo -e "\nle calcul demndé est $chiffre1 $signe $chiffre2\n"

if [[ $signe = '+' ]]; then
    calcul=$(echo "scale=2; $chiffre1 + $chiffre2" | bc -l)
    echo -e "le resultat est : $calcul"
elif [[ $signe = '-' ]]; then
    calcul=$(echo "scale=2; $chiffre1 - $chiffre2" | bc -l)
    echo -e "le resultat est : $calcul"
elif [[ $signe = '/' ]]; then
    calcul=$(echo "scale=2; $chiffre1 / $chiffre2" | bc -l)
    echo -e "le resultat est : $calcul"
elif [[ $signe = '*' ]]; then
    calcul=$(echo "scale=2; $chiffre1 * $chiffre2" | bc -l)
    echo -e "le resultat est : $calcul"
else
    echo -e "Option non disponible\nFermeture du programme"
fi