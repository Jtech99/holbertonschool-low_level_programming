#include <unistd.h>

/**
 * _putchar - écrit un caractère sur la sortie standard
 * @c: le caractère à afficher
 *
 * Retour 1 en cas de succes, -1 en cas d’erreur
 *
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
