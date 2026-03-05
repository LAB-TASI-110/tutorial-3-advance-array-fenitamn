#include <stdio.h>

int main() {
    int n;
    int nilai;
    long long total_nilai = 0; // Menggunakan long long untuk menghindari overflow jika n dan nilai besar.
    double rata_rata;

    // Membaca jumlah nilai (n)
    scanf("%d", &n);

    // Memastikan n adalah bilangan positif untuk menghindari loop tak terbatas atau error
    if (n <= 0) {
        // Dalam kasus nyata, mungkin ada penanganan error yang lebih baik
        // Namun, sesuai instruksi, kita asumsikan input valid
        return 1; // Keluar dengan kode error
    }

    // Membaca n nilai dan menjumlahkannya
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai);
        total_nilai += nilai;
    }

    // Menghitung rata-rata
    // Menggunakan (double) n untuk memastikan hasil pembagian adalah floating point
    rata_rata = (double)total_nilai / n;

    // Menampilkan jumlah seluruh nilai
    printf("%lld\n", total_nilai);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2lf\n", rata_rata);

    return 0; // Program berakhir dengan sukses
}
