#include <stdio.h>

main (){
     char nama [3][3][20];
     int i, j;
     for (i = 0; i< 2; i++){
         for (j = 1; j < 3; j++){
             printf ("Nama Mahasiswa [%d][%d] = ", i, j);
             scanf ("%s", &nama[i][j]);
         }
         printf("\n");
     } 
}
