#!/bin/bash

read -p "veuillez entrer votre note : " -n 2 note

if [[ $note = 20 ]]; then
    echo -e "\nFélicitations!"
elif [[ $note = 19 || $note = 18 || $note = 17 ]]; then
    echo -e "\nTrès bien!"
elif [[ $note = 16 || $note = 15 || $note = 14 ]]; then
    echo -e "\nBien!"
elif [[ $note = 12 || $note = 13 ]]; then
    echo -e "\nEncouragements"
elif [[ $note = 10 || $note = 11 ]]; then
    echo -e "\nMoyen"
else
    echo -e "Peut mieux faire"
fi