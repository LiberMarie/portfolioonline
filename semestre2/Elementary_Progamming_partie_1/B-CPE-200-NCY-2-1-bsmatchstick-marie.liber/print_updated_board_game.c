/*
** EPITECH PROJECT, 2021
** bs_matchstick
** File description:
** main
*/

void print_updated_board_game(int line, int nb_matches)
{
    char *str = "*********\n*   |   *\n*  |||  *\n* ||||| *\n*|||||||*\n*********";
    int h = calc_haut(str);
    int l = calc_long(str);
    char **tab = str_to_tab(str, l, h);
    while (tab[line][l] != '|')
        l--;
    for (int i = 0; i < nb_matches; i++){
        tab[line][l] = ' ';
        l--;
    }
    char *str_m = dbstr_to_str(tab, h, l);
    my_putstr(str_m);
}