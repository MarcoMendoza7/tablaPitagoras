#include <stdio.h>

int main() {
    int filas = 10;
    int columnas = 10;
    int i;
    int j;
    int producto;

    puts("TABLA DE PITAGORAS");
    for (i = 1; i <= filas; i++) {
        for (j = 1; j <= columnas; j++) {
            producto = i * j;
            printf("%d\t", producto);
        }
        printf("\n");
    }
    puts("FIN DEL PROGRAMA");
    return 0;
}