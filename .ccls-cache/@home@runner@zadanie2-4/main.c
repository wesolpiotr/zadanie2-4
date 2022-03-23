#include <stdio.h>

int main(void) {
  double p; //liczba punktów
  double pd; //punkty za długość skoku
  double ps; //punkty za styl
  double d; //długość skoku
  double k = 120.0; //punkty konstrukcyjny
  double s = 1.8; //stała
  double pkt; //punkty za styl od sędziego
  double min; //najmniejsza ilość pkt
  double max; //największa ilość pkt
  double suma = 0; //suma punktów za styl liczonych do wyniku

  printf("Podaj długość skoku: ");
  scanf("%lf", &d);

  pd = 60 + (d-k)*s;

  printf("Podaj punkty za styl od 1. sędziego: ");
  scanf("%lf", &pkt);
  min = pkt;
  max = pkt;
  suma += pkt;

  for(int i = 2; i <= 5; i++) {
    printf("Podaj punkty za styl od %d", i);
    printf(". sędziego: ");
    scanf("%lf", &pkt);
    suma += pkt;

    if(pkt > max) {
      max = pkt;
    }
    else if(pkt < min) {
      min = pkt;
    }
  }

  suma = suma - max - min;

  printf("%lf", min);
  printf("%lf", max);
  printf("%lf", pd);

  p = pd + ps;

  printf("Liczba punktów wynosi: %lf", p);

  return 0;
}