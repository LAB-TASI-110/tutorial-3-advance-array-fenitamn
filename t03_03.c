#include <stdio.h> // Untuk fungsi input/output seperti scanf dan printf.
#include <limits.h> // Untuk INT_MIN dan INT_MAX

int main() {
    int n; // Variabel untuk menyimpan banyaknya nilai yang akan dimasukkan
    int scores[1000]; // Array untuk menyimpan semua nilai, asumsi n tidak lebih dari 1000
    long long total_nilai = 0; // Menggunakan long long untuk menampung jumlah nilai yang mungkin besar
    double rata_rata; // Variabel untuk menyimpan rata-rata dengan presisi desimal
    int count_above_average = 0; // Variabel untuk menghitung nilai yang di atas atau sama dengan rata-rata
    
    // Variabel untuk mencari nilai minimum dan maksimum
    int min_nilai = INT_MAX; // Inisialisasi dengan nilai maksimum int agar nilai pertama pasti lebih kecil
    int max_nilai = INT_MIN; // Inisialisasi dengan nilai minimum int agar nilai pertama pasti lebih besar

    // Langkah 1: Membaca jumlah nilai (n) dari input user
    scanf("%d", &n);

    // Validasi sederhana: memastikan n adalah bilangan positif
    if (n <= 0) {
        // Jika n tidak valid, program keluar dengan kode error
        return 1;
    }

    // Langkah 2: Membaca n nilai, menyimpannya ke array, menjumlahkan, serta mencari nilai min/max
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]); // Membaca nilai dan menyimpannya ke array
        total_nilai += scores[i]; // Menambahkan nilai ke total_nilai

        // Memperbarui nilai minimum dan maksimum
        if (scores[i] < min_nilai) {
            min_nilai = scores[i];
        }
        if (scores[i] > max_nilai) {
            max_nilai = scores[i];
        }
    }

    // Langkah 3: Menghitung nilai rata-rata
    rata_rata = (double)total_nilai / n;

    // Langkah 4: Menghitung banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    // Iterasi kembali melalui array nilai yang sudah disimpan
    for (int i = 0; i < n; i++) {
        if (scores[i] >= rata_rata) { // Membandingkan setiap nilai dengan rata-rata
            count_above_average++; // Jika lebih besar atau sama, tambahkan ke counter
        }
    }

    // Langkah 5: Menghitung rentang nilai (maksimum - minimum)
    int rentang_nilai = max_nilai - min_nilai;

    // Langkah 6: Menampilkan hasil sesuai format yang diminta
    // 1. Jumlah seluruh nilai
    printf("%lld\n", total_nilai);

    // 2. Nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2lf\n", rata_rata);

    // 3. Banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    printf("%d\n", count_above_average);

    // 4. Rentang nilai (maksimum - minimum)
    printf("%d\n", rentang_nilai);

    return 0; // Menandakan program berakhir dengan sukses
}
