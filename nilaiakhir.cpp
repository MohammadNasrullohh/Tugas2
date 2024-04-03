#include <iostream>
#include <string>

int main() {
    // Deklarasi variabel
    std::string nim, nama;
    double nilaiTugas1, nilaiTugas2, nilaiTugas3, nilaiRataRata;

    // Tampilan masukan
    std::cout << "PROGRAM HITUNG NILAI RATA-RATA" << std::endl;
    std::cout << "Nim Siswa     : ";
    std::getline(std::cin, nim); // Menerima input nim dengan spasi
    std::cout << "Nama Siswa    : ";
    std::getline(std::cin, nama); // Menerima input nama dengan spasi
    std::cout << "Nilai Tugas I : ";
    std::cin >> nilaiTugas1;
    std::cout << "Nilai Tugas II: ";
    std::cin >> nilaiTugas2;
    std::cout << "Nilai Tugas III: ";
    std::cin >> nilaiTugas3;

    // Menghitung nilai rata-rata
    nilaiRataRata = (nilaiTugas1 + nilaiTugas2 + nilaiTugas3) / 3;

    // Tampilan keluaran
    std::cout << "\nLayar Keluaran\n\n";
    std::cout << "Nim .......... Siswa yang bernama " << nama << std::endl;
    std::cout << "Memperoleh nilai rata-rata " << nilaiRataRata << " dari hasil tugas yang diikutinya." << std::endl;

    // Menahan tampilan output
    std::cout << "\nTekan Enter untuk keluar...";
    std::cin.ignore(); // Mengabaikan newline dari input sebelum menekan Enter
    std::cin.get(); // Menunggu pengguna menekan Enter

    return 0;
}
