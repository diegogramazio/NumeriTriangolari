#include <stdio.h>

/* funzione che riceve in ingresso un intero n e stampa tutti
 * i numeri triangolari minori o uguali ad n */
 void numeriTriangolari(int limite) {
       // pre: limite e' un intero >=1
       int ultimoNumero;         // ultimo numero stampato
       int ultimoGap;                    // ultima differenza

       /* inizializzazioni */
       ultimoNumero = 1;
       ultimoGap = 2;

       /* vai avanti fino a che il limite non e' superato */
       while(ultimoNumero<= limite) {
             /* stampa il numero */
             printf("%d", ultimoNumero);

             /* prepara il prossimo */
             ultimoNumero += ultimoGap;
             ultimoGap++;
             system("PAUSE");
       }
 }

 /* applicazione per la verifica se un numero letto da tastiera e' un quadrato */
 int main() {
       int numero;                        // intero da leggere
       printf("Utente, introduci un intero\n");
       scanf("%d", &numero);
       numeriTriangolari(numero);
 }
