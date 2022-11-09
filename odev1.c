#include <stdio.h>


int main(){

float ales,yds,mort,sonuc;
printf("Sirasiyla ALES YDS VE MEZUNIYET ORTALAMANIZI giriniz(4 uzerinden)\n\n");

scanf ("%f %f %f",&ales,&yds,&mort);

sonuc=ales/2+yds/4+(mort*25)/4;

if(yds>=70  &&  sonuc>60){

    printf("Lisansa alindiniz.\n");
}
else

printf("Lisansa giremedinizi.\n");

printf(" %.2f",sonuc);




    return 0;
}