#!/bin/bash

vertfonce='\e[0;32m'
rouge='\e[0;31m'
bleu='\e[0;34m'
neutre='\e[0;m'
cyan='\e[0;36m'

function push {
    git add include/ src/ tests/ utils/ Makefile main.c
    read -p "entrer votre message de commit : " message
    read -p "voulez vous commit ? [Y/N] : " rep
    if [ $rep = 'Y' ]
    then
        git commit -m "$message"
        git push
    else
        push
    fi
}

function test {
    make tests
    ./criterion
}

function choix {
    echo -e "${vertfonce}1:TEST\n${neutre}${rouge}2:START\n${neutre}${bleu}3:PUSH\n${neutre}${cyan}4:QUIT${neutre}"
    read -p "choisissez l'option : " option
    if [[ $option = '1' ]]; then
        test
    elif [[ $option = '2' ]];then
        ./ai
    elif [[ $option = '3' ]]; then
        push
    elif [[ $option = '4' ]]; then
        exit
    else
        echo -e "argument invalide\n"
        choix
    fi
}

choix;