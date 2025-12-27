#include <math.h>
#include <stdio.h>

int primenumber(int p);

int main(void)
{   
    int i, j, h = 0, k;

    /* Leerzeile */
    printf("\n");
    /* Eingabeaufforderung */
    printf("\n Geben Sie eine gerade natuerliche Zahl ein: ");
    if (scanf("%d", &h) != 1) {
        fprintf(stderr, "Fehlerhafte Eingabe\n");
        return 1;
    }

    /* Prüfen, ob es wirklich eine gerade Zahl > 2 ist */
    if (h <= 2 || h % 2 != 0) {
        printf("Bitte eine gerade Zahl groesser als 2 eingeben.\n");
        return 1;
    }

    /* Goldbach-Partitionen */
    for (i = 2; i <= h / 2; i++) {
        j = h - i;
        if (primenumber(i) && primenumber(j)) {
            k = (h / 2) - i;
            printf("\n %5d %5d %5d", i, j, k);
        }
    }
    printf("\n");
    return 0;
}

/* Einfache Primzahlprüfung durch Trial Division */
int primenumber(int p)
{
    int d;
    if (p < 2) return 0;
    if (p == 2) return 1;
    if (p % 2 == 0) return 0;
    for (d = 3; d <= (int)sqrt(p); d += 2) {
        if (p % d == 0) return 0;
    }
    return 1;
}