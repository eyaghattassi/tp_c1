#include <stdio.h>

int saisir();
void remplir(int n, int m[n][n]);
int somme(int n, int m[n][n]);

int main() {
    int m[100][100];
    int n, s;
    n = saisir();
    remplir(n, m);
    s = somme(n, m);
    printf("La somme de la diagonale de cette matrice est égale à %d\n", s);
    return 0;
}

int saisir() {
    int n;
    do {
        printf("Donner la taille de la matrice : ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    return n;
}

void remplir(int n, int m[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("La case m[%d][%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

int somme(int n, int m[n][n]) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += m[i][i];
    }
    return s;
}
