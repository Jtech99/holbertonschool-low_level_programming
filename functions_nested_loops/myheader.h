#ifndef MAIN_H     /* 1️⃣ Protection contre les inclusions multiples */
#define MAIN_H

/* 2️⃣ Prototypes de fonctions : ici tu annonces toutes les fonctions */
int _putchar(char c);          /* Fonction pour afficher un caractère */
void print_alphabet(void);     /* Exemple : fonction task 1 */
void print_alphabet_x10(void); /* Exemple : fonction task 2 */
int _islower(int c);           /* Exemple : fonction task 3 */
int _isalpha(int c);           /* Exemple : fonction task 4 */
int print_sign(int n);         /* Exemple : fonction task 5 */
int _abs(int);                 /* Exemple : fonction task 6 */
int print_last_digit(int);     /* Exemple : fonction task 7 */
void jack_bauer(void);         /* Exemple : fonction task 8 */
void times_table(void);        /* Exemple : fonction task 9 */
int add(int, int);             /* Exemple : fonction task 10 */
void print_to_98(int n);       /* Exemple : fonction task 11 */

/* 3️⃣ Fin de la protection */
#endif