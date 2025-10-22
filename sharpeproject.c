#include <stdio.h>

int main() {
    float getiri, risksiz, risk, sharpe;

    printf("=== Sharpe Orani Hesaplama Programi ===\n\n");

    // Kullan�c�dan verileri al
    printf("Yatirimin getirisi (%%): ");
    scanf("%f", &getiri);

    printf("Risksiz faiz orani (%%): ");
    scanf("%f", &risksiz);

    printf("Portfoyun riski (standart sapma, %%): ");
    scanf("%f", &risk);

    // Sharpe oran�n� hesapla
    sharpe = (getiri - risksiz) / risk;

    // Sonucu g�ster
    printf("\nSharpe Orani = (%.2f - %.2f) / %.2f = %.2f\n", getiri, risksiz, risk, sharpe);

    // Basit yorum
    if (sharpe < 1)
        printf("Sonuc: Ortalama altinda performans.\n");
    else if (sharpe < 2)
        printf("Sonuc: Iyi performans.\n");
    else if (sharpe < 3)
        printf("Sonuc: Cok iyi performans.\n");
    else
        printf("Sonuc: Mukemmel performans!\n");

    // Program hemen kapanmas�n
    printf("\nProgrami kapatmak icin bir tusa basin...\n");
    getchar(); // Bo�ta kalan \n karakterini yakalar
    getchar(); // Tu�a bas�lmas�n� bekler

    return 0;
}

