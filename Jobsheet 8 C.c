#include <stdio.h>

int main (){
    int x[3],i;
    printf("Masukan 2 NIM Terakhir anda \n");
    for(i=0;i<=2;i++){
        printf("Masukkan NIM %i : ",i+1);
        scanf("%i",&x[i]);
    }
printf("\n");
    for(i=0;i<=2;i++){
        printf("NIM ke-%i= %i\n",i+1,x[i]);
    }
printf("\n");
return 0;
}
