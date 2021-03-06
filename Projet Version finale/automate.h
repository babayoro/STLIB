/**
 * \file       automate.c
 * \author     Yoro , Awa , Firdaws , Kamilia
 * \version    1.@
 * \date       05 Janvier 2019
 * \brief      Implementation de l'ensemble de nos fonctions pour les LTS.
 *
 * \details    C'est dans ce fichier qu'on defini habituellement le prototype des fonctions qui seront implementes dans le fichier.c
 *                  .
 */

/**
 * \brief      Structure trnasiiton.
 *
 * \details   Cette structure nous permettra d'acceder a un etat de depart , d'arrivee , aux alphabets , ainsi qu'a la transition suivante
 */

typedef struct transition{
    int depart;
    int arrive;
    char *alphabet;
    struct transition *next;
}transition;


/**
 * \brief      Structure LTS.
 * \details   Principale structure de notre programme , elle nous permet d'acceder a l'ensemble des donnees du programme.
 */

typedef struct lts{
    char **alphabet;///tab ex manger, boire....// int eata[]
    int * etat;   //tab etat ex,:  1, 2, 3...
	int etat_initial; //1
	transition *tete, *queue; ///tabde trans ex/t1, t2,...
    int *etat_final; ///tab : ex 2, 4..
    int nb_etat_final;
    int nb_trans;   ///nb_etat =nb_trans plus 1;
}lts;

/**
 * \brief ouvre un fichier texte contenant un lts
 *
 * @param filename pointeur de type char
 */

/* Nos declaations de fonction */
void open_lts(char *filename);


/**
 * \brief lit les donnees d'un fichier lts
 *
 * @param filename  pointeur de type char
 * @return Retourne un lts avec l'ensemble de ces donnees
 */

 lts *read_lts(char *filename);

/**
 * \brief ecris un mot dans un fichier contenant un lts
 * @param filename un fichier de type char pointeur
 */

lts *write_lts(char *filename);


/**
 * \brief sauve un lts dans un fichier vide
 * @param l pointeur de type lts
 * @param save pointeur de type char
 */

 void sauver_lts(lts * l, const char * save);

/**
 * \brief cree un lts vide
 * \deprecated Fonction depreciee, ne plus utiliser
 */

 lts *creer_lts();

/**
 * \brief verifie si un lts est vide
 * @param l pointeur de type lts
 * @return Retourne 0 si le lts estvide et 1 sinon
*/
int estVide(lts * l);


/**
 * \brief verifie si un lts est pleine
 * @param l pointeur de type lts
 * @return Retourne 0 si le lts estpleine et 1 sinon
*/
int estpleine(lts *l);

/**
 * \brief ajoute un etat e dans un lts
 * @param l pointeur de type lts
 * @param e l'etat a ajouter de type int
*/

void ajouter_etat(lts *l, int e);


/**
 * \brief affiche un lts non-vide
 * @param l pointeur de type lts
*/
void afficher_lts(lts * l);

/**
 * \brief supprime un etat e dans un lts
 * @param l pointeur de type lts
 * @param e l'etat a supprimer de type int
 * \deprecated Cette fonction comporte quelques bugs au niveau de la partie si la pile est pleine

*/

void supprimer_etat(lts *l, int e);

/**
 * \brief ajoute une transition t dans un lts
 * @param l pointeur de type lts
 * @param t pointeur de type transition
 * \deprecated Fonction d�pr�ci�e, ne plus utiliser
*/

void ajouter_transition(lts *l, transition *t);

/**
 * \brief creer une nouvelle transition , c'est comme si elle alloue de la memoire pour une transition donne .
 * @param l pointeur de type lts
 * @param al pointeur de type char

*/

transition*  new_transition(lts *l, char *al);

/**
 * \brief supprime une transition t dans un lts l
 * @param l pointeur de type lts
 * @param t pointeur de type transition
 * \deprecated Fonction d�pr�ci�e, ne plus utiliser
*/
void supprimer_transition(lts *l, transition *t);
