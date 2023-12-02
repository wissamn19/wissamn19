#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
    /*declaration*/
    void dic_motfr(const char fr[]);
    char fr[]="ecrire\t lire\t faire\t travail\t liste\0";
    void dic_motan(const char an[]);
    char an[]="write\t read\t do\t work\t list\0";


    /*compare les deux fonctions fr et an */
    int compare(const void *fr, const void *an) {
    const char *fr1 = *(const char **)fr;
    const char *an2 = *(const char **)an;
    return strcmp(fr1, an2);
    }
    /*pour trier la fonctin fr*/
    int main() {
    char *fr[] = {"ecrire", "lire", "faire", "travail","liste"};
    int n = sizeof(fr) / sizeof(fr[0]);

    qsort(fr, n, sizeof(fr[0]), compare);
    /*l'affichage apres le trie de la fonction fr*/
     for (int i = 0; i < n; i++) {
        printf("%s\n", fr[i]);
    }
              printf("--------------------NOTRE MINI DICTIONNAIRE------------------\n");
        /* Traduire les mot*/
  char  dictionnaire_fr_an[5][2][15]={
                  "ecrire","write",
                   "lire","read",
                   "faire","do",
                   "travail","work",
                   "liste","list"
                    };



    printf(" Saisir un mot en français:");
    gets(fr);
     /*retourne les mots majuscule en minscule*/
    strlwr(fr);
    /*treatement*/
    int i,c=0;
    for(i = 0;i < 10;i++){
        if(strcmp(fr,dictionnaire_fr_an[i][0])==0){
            printf("anglais -> %s\n",dictionnaire_fr_an[i][1]);
        }
        else c++;
    }
    if(c==10)
        printf("Le mot n'exist pas dans notre dictionnaire ");

    return 0;
    }
