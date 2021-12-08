#include <stdio.h>
#include <stdlib.h>


typedef struct AI{
    int data;
    struct AI cible;
    int posture;
}AI;

AI* creer_PJ(int val){
    AI* PJ = (AI*)malloc(sizeof(AI));
    AI->data = val;
    AI->cible = NULL;
    AI->posture = 1;
    return PJ;
}

int alerte(AI* PJ, AI* AI1){
    if (PJ->posture = 1)
        return AI->posture = 1;
}

int main(){
    AI* PJ = creer_PJ(5);
    AI* AI1 = creer_PJ(1);
    printf("%d \n", al = alerte(PJ, AI1);
    free(PJ);
    free(AI1);
    return 0;
}