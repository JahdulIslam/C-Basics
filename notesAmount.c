#include <stdio.h>

int main(){
        int bdt, bdt1000, bdt500, bdt200, bdt100, bdt50, bdt20, bdt10, bdt5, bdt2;
        bdt1000 = bdt500 = bdt200 = bdt100 = bdt50 = bdt20 = bdt10 = bdt5 = bdt2 = 0;
        printf("Input the amount of BDT: \n");
        scanf("%d", &bdt);

        if(bdt >=1000){
            bdt1000 = bdt/1000;
            bdt -= bdt1000*1000;
        }
        if(bdt >=500){
            bdt500 = bdt/500;
            bdt -= bdt500*500;
        }
        if(bdt >=200){
            bdt200 = bdt/200;
            bdt -= bdt200*200;
        }
        if(bdt >=100){
            bdt100 = bdt/100;
            bdt -= bdt100*100;
        }
        if(bdt >=50){
            bdt50 = bdt/50;
            bdt -= bdt50*50;
        }
        if(bdt >=20){
            bdt20 = bdt/20;
            bdt -= bdt20*20;
        }
        if(bdt >=10){
            bdt10 = bdt/10;
            bdt -= bdt10*10;
        }
        if(bdt >=5){
            bdt5 = bdt/5;
            bdt -= bdt5*5;
        }
        if(bdt >=2){
            bdt2 = bdt/2;
            bdt -= bdt2*2;
        }

        printf("1000s: %d \n", bdt1000);
        printf("500s: %d \n", bdt500);
        printf("200s: %d \n", bdt200);
        printf("100s: %d \n", bdt100);
        printf("50s: %d \n", bdt50);
        printf("20s: %d \n", bdt20);
        printf("10s: %d \n", bdt10);
        printf("5s: %d \n", bdt5);
        printf("2s: %d \n", bdt2);
    return 0;
}
