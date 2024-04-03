#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaSiswa;
    double nilaiKeaktifan, nilaiTugas, nilaiUjian;
    double nilaiMurniKeaktifan, nilaiMurniTugas, nilaiMurniUjian, nilaiAkhir;

    // Input
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa : ";
    getline(cin, namaSiswa);
    cout << "Nilai Keaktifan : ";
    cin >> nilaiKeaktifan;
    cout << "Nilai Tugas : ";
    cin >> nilaiTugas;
    cout << "Nilai Ujian : ";
    cin >> nilaiUjian;

    // Proses perhitungan
    nilaiMurniKeaktifan = nilaiKeaktifan * 0.2;
    nilaiMurniTugas = nilaiTugas * 0.5;
    nilaiMurniUjian = nilaiUjian * 0.3;
    nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    // Output
    cout << "\nLayar Keluaran\n\n";
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
    cout << "Nilai Keaktifan * 20% : " << nilaiMurniKeaktifan << endl;
    cout << "Nilai Tugas * 50% : " << nilaiMurniTugas << endl;
    cout << "Nilai Ujian * 30% : " << nilaiMurniUjian << endl;
    cout << "Jadi Siswa yang bernama " << namaSiswa << " memperoleh nilai akhir sebesar " << nilaiAkhir << endl;

    return 0;
}
