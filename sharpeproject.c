#include <stdio.h>

int main() {
    float getiri, risksiz, risk, sharpe;

    printf("=== Sharpe Orani Hesaplama Programi ===\n\n");

    // Kullanýcýdan verileri al
    printf("Yatirimin getirisi (%%): ");
    scanf("%f", &getiri);

    printf("Risksiz faiz orani (%%): ");
    scanf("%f", &risksiz);

    printf("Portfoyun riski (standart sapma, %%): ");
    scanf("%f", &risk);

    // Sharpe oranýný hesapla
    sharpe = (getiri - risksiz) / risk;

    // Sonucu göster
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

    // Program hemen kapanmasýn
    printf("\nProgrami kapatmak icin bir tusa basin...\n");
    getchar(); // Boþta kalan \n karakterini yakalar
    getchar(); // Tuþa basýlmasýný bekler

    return 0;
}

