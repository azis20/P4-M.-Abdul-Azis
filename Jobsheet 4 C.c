#include <stdio.h>
#include <conio.h>

main (){
int NIM1 [2][2];
int NIM2 [2][2];
int hasil [2][2];
int i, j;
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf (" Masukkan NIM Mahasiswa pertama %d, %d = ", i, j);
scanf ("%d", &NIM1[i][j]);
}
}
printf ("\n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan NIM Mahasiswa kedua %d, %d = ", i, j);
scanf ("%d", &NIM2[i][j]);
}
}
printf("\n");
printf("Hasil Pengurangannya adalah \n");
for (i = 0; i< 2; i++){
for (j = 0; j < 2; j++){
hasil [i][j]=NIM1[i][j]-NIM2[i][j];
printf ("%d ", hasil[i][j]);
}
printf ("\n");
}
getch();
}
