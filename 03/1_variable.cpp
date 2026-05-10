#include <iostream>
#include <string> // Ditambahkan untuk contoh string

int main() {
    // === BAGIAN 1: FUNDAMENTAL ===
    std::cout << "====================================================\n";
    std::cout << "LEARNING C++ DATA TYPES - BY BRO\n";
    std::cout << "====================================================\n\n";

    std::cout << "1. FUNDAMENTAL TYPES (Tipe Data Dasar)\n";
    std::cout << "Adalah tipe data bawaan compiler yang langsung dikenali mesin.\n\n";

    // a. Bulat
    std::cout << "a. Tipe Data Angka Bulat (Integer):\n";
    std::cout << "   I.   short     : Angka kecil (2 Byte). Contoh: short umur = 20;\n";
    std::cout << "   II.  int       : Angka standar (4 Byte). Contoh: int hp = 100;\n";
    std::cout << "   III. long      : Angka besar (4/8 Byte). Contoh: long jarak = 1234567L;\n";
    std::cout << "   IV.  long long : Angka sangat besar (8 Byte). Contoh: long long dana = 9000000000LL;\n";

    // b. Desimal
    std::cout << "\nb. Tipe Data Angka Pecahan (Floating Point):\n";
    std::cout << "   I.   float     : Desimal (4 Byte). Wajib akhiran 'f'. Contoh: float berat = 65.5f;\n";
    std::cout << "   II.  double    : Desimal presisi (8 Byte). Standar C++. Contoh: double pi = 3.14159;\n";

    // c. Karakter
    std::cout << "\nc. Tipe Data Karakter:\n";
    std::cout << "   I.   char      : 1 Karakter (1 Byte). Pakai petik satu. Contoh: char grade = 'A';\n";
    std::cout << "   II.  wchar_t   : Wide character untuk simbol luas. Contoh: wchar_t simbol = L'Ω';\n";

    // d. Boolean & Void
    std::cout << "\nd. Tipe Data Logika & Kosong:\n";
    std::cout << "   I.   bool      : Logika Benar/Salah (1 Byte). Contoh: bool isDead = false;\n";
    std::cout << "   II.  void      : Kosong. Tidak punya nilai. Biasanya untuk fungsi.\n";


    // === BAGIAN 2: DERIVED ===
    std::cout << "\n\n2. DERIVED TYPES (Tipe Data Turunan)\n";
    std::cout << "Tipe data yang 'diturunkan' dari tipe data fundamental.\n\n";
    
    std::cout << "   I.   Array     : Kumpulan data sejenis. Contoh: int nilai[5] = {1,2,3,4,5};\n";
    std::cout << "   II.  Pointer   : Menyimpan alamat memori. Contoh: int* ptr = &hp;\n";
    std::cout << "   III. Reference : Nama alias variabel. Contoh: int& ref = hp;\n";
    std::cout << "   IV.  Function  : Ya, fungsi juga punya tipe data (berdasarkan return-nya).\n";


    // === BAGIAN 3: USER-DEFINED ===
    std::cout << "\n\n3. USER-DEFINED TYPES (Tipe Data Buatan User)\n";
    std::cout << "Tipe data yang dibuat oleh programmer untuk struktur kodingan yang kompleks.\n\n";

    std::cout << "   I.   Struct    : Bungkus variabel beda tipe. Contoh: struct Player { int hp; char kls; };\n";
    std::cout << "   II.  Class     : Inti dari OOP (mirip struct tapi sakti). Contoh: std::string nama;\n";
    std::cout << "   III. Enum      : Kumpulan konstanta nama. Contoh: enum Warna { MERAH, BIRU };\n";
    std::cout << "   IV.  Union     : Mirip struct tapi berbagi memori yang sama (sangat hemat RAM).\n";

    std::cout << "\n====================================================\n";
    std::cout << "Selesai! Semangat belajarnya, Bro!\n";
    std::cout << "====================================================\n";

    return 0;
}
