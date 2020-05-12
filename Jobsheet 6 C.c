#include <stdio.h>
#include <conio.h>

main (){
   int NIM1 [5][5];
   int i, j, x, y;
   printf ("Masukkan Banyak Baris = ");
   scanf ("%i", &x);
   printf ("Masukkan Banyak Kolom = ");
   scanf ("%i", &y);
   printf("\n");
   printf ("MATRIX \n");
   for (i = 0; i< x; i++){
      for (j = 0; j < y; j++){
          printf ("Masukkan NIM Mahasiswa  %d, %d = ", i, j);
          scanf ("%d", &NIM1[i][j]);
          }
   }
   printf("\n");
   for (i = 0; i< x; i++){
      for (j = 0; j < y; j++){
          printf ("%d ",NIM1[i][j]);
          }
      printf ("\n");
   }
   printf ("TRANSPOSE MATRIX  \n");
   for (i = 0; i< y; i++){
      for (j = 0; j < x; j++){
           printf ("%d ", NIM1[j][i]);
           }
      printf ("\n");
      }
getch();
}
