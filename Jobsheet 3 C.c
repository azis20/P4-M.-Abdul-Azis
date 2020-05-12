#include <stdio.h> 
main(){  

int i,j,matrik1[2][2],matrik2[2][2],jumlah[2][2];  
for(i=0;i<=1;i++){  
for(j=0;j<=1;j++){  
printf("Masukkan NIM Mahasiswa pertama  [%d] [%d] = ",i,j);  
scanf("%d",&matrik1[i][j]);   }   
  }  
printf("\n");
for(i=0;i<=1;i++){   
for(j=0;j<=1;j++){  
printf("Masukkan NIM Mahasiswa kedua  [%d] [%d] = ",i,j);  
scanf("%d",&matrik2[i][j]) ;   }   
 } 
printf("\n");
printf("Hasil Penjumlahan Adalah\n");
for(i=0;i<=1;i++){  
for(j=0;j<=1;j++){
jumlah[i][j]=matrik1[i][j]+ matrik2[i][j];  
printf("%d  ",jumlah[i][j]) ;  
}  
printf("\n");
} 
} 
  
