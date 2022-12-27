#!/bin/bash

cd $HOME
if git clone https://github.com/Gegel85/norminette.git
then make -C norminette
     make -C norminette clean
     chmod 755 $HOME/norminette/update.sh
     echo "coping nominette to /bin/norminette"
     sudo cp $HOME/norminette/norminette /bin/
     echo "adding manpage"
     sudo cp $HOME/norminette/manpage.1.gz /usr/share/man/man1/norminette.1.gz
     sudo cp $HOME/norminette/manpage.1f.gz /usr/share/man/man1/norminette.1f.gz
else
    echo "Error: could not clone repository"
fi

cd -
norminette -A --indent=4 -n ./src > norminette_output
if [ $? -ne 0 ]
then
    echo -e "\e[31mNORMINETTE ERROR\e[39m"
    cat norminette_output
    exit 1
fi
