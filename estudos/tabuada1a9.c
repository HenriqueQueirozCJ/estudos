#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"portuguese");
    int j=0,i=0,mult=1,multp=1,res=0;

    for(i=1;i<10;i++){
        printf("\n ### Tabuada do %d ### \n",i);
            for(j=1;j<10;j++){
                printf(" \n %.2d x %.2d = %.2d ", i,j,i*j);
            }
    }
    return 0;
}
