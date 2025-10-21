#include <stdio.h>

int main() {
    int angka;  // Variabel untuk menyimpan input pengguna

    printf("=== Program Cek Ganjil / Genap ===\n");
    printf("(Ketik 0 untuk keluar dari program)\n\n");

    // Perulangan: terus berjalan sampai pengguna mengetik 0
    while (1) {
        printf("Masukkan sebuah angka: ");
        scanf("%d", &angka);

        // Percabangan untuk keluar dari loop
        if (angka == 0) {
            printf("Program selesai. Terima kasih!\n");
            break;  // keluar dari perulangan
        }

        // Percabangan untuk menentukan ganjil atau genap
        if (angka % 2 == 0) {
            printf("%d adalah angka GENAP.\n\n", angka);
        } else {
            printf("%d adalah angka GANJIL.\n\n", angka);
        }
    }

    return 0;
}
