#include <stdio.h>
#include <ctype.h>
int main()
{
    int trD, matD, trY, matY;
    double ort, trnet, matnet, dgsSoz, dgsSay, dgsEA;
    char yer[5];
    printf("Daha önce bir yere yerleştiniz mi?[Evet/Hayır]: ");
    scanf("%s", yer);
    printf("lütfen ön lisans mezuniyet ortalamanızı 4 puanlık sistem üzerinden giriniz: ");
    scanf("%lf", &ort);

    printf("Lütfen türkçe doğru ve yanlış sayınızı sırayla giriniz: ");
    scanf("%d", &trD);
    scanf("%d", &trY);

    printf("Lütfen matematik doğru ve yanlış sayınızı sırayla giriniz: ");
    scanf("%d", &matD);
    scanf("%d", &matY);

    ort = ort * 25 * 0.8;
    trnet = trD - (trY * 0.25);
    matnet = matD - (matY * 0.25);

    if (trnet > 1 && matnet > 1)
    {
        if (yer == 'HAYIR')
        {
            dgsSoz = (trnet * 3) + (matnet * 0.6) + (ort * 0.6) + 120;
            dgsSay = (trnet * 0.6) + (matnet * 3) + (ort * 0.6) + 250;
            dgsEA = (trnet * 1.8) + (matnet * 1.8) + (ort * 0.6) + 222;
            printf("----------------------------------------------------------------");
            printf("\nSayısal Net: %f\nSözel Net: %f\n", matnet, trnet);
            printf("DGS Sözel: %f\nDGS Sayısal: %f\nDGS EA: %f\n", dgsSoz, dgsSay, dgsEA);
        }
        else if (yer == 'EVET')
        {
            dgsSoz = (trnet * 3) + (matnet * 0.6) + (ort * 0.45) + 120;
            dgsSay = (trnet * 0.6) + (matnet * 3) + (ort * 0.45) + 250;
            dgsEA = (trnet * 1.8) + (matnet * 1.8) + (ort * 0.45) + 222;
            printf("----------------------------------------------------------------");
            printf("\nSayısal Net: %f\nSözel Net: %f\n", matnet, trnet);
            printf("DGS Sözel: %f\nDGS Sayısal: %f\nDGS EA: %f\n", dgsSoz, dgsSay, dgsEA);
        }
    }
    return 0;
}
