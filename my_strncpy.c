/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** a short file description
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    if (i < n)
        dest[i] = '\0';
    return dest;
}
