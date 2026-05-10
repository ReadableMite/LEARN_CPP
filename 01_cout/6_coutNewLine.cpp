#include <iostream>

int main() {
    // Bagian 1: Perbandingan Newline
    std::cout << "Ada 2 tipe New Lines di C++:\n";
    std::cout << "1. std::endl\n";
    std::cout << "2. \\n\n";

    std::cout << "\n" << std::endl;

    std::cout << "Contoh penggunaan:\n";
    std::cout << "Ini pakai endl" << std::endl;
    std::cout << "Ini pakai \\n\n";

    std::cout << std::endl << std::endl;

    // Bagian 2: Penjelasan Escape Sequence
    // Tadi ada typo di std::cout, sudah diperbaiki di bawah:
    std::cout << "Kenapa bisa seperti ini?\n";
    std::cout << "Well, ini semua karena \\n itu termasuk ke Escape Sequence.\n\n";
    
    std::cout << "Apa itu Escape Sequence?\n";
    std::cout << "Singkatnya, sebuah karakter khusus yang menjalankan perintah tertentu,\n";
    std::cout << "seperti membuat New Line yang memaksa kursor berpindah ke baris baru.\n\n";

    // Bagian 3: Melanjutkan Daftar
    std::cout << "Daftar Escape Sequence yang sering digunakan:\n";
    std::cout << "1. \\n : Newline (Pindah baris baru)\n";
    std::cout << "2. \\t : Horizontal Tab (Memberi jarak tab agar output rapi)\n";
    std::cout << "3. \\v : Vertical Tab (Jarang digunakan, tab secara vertikal)\n";
    std::cout << "4. \\b : Backspace (Menghapus satu karakter ke belakang)\n";
    std::cout << "5. \\r : Carriage Return (Mengembalikan kursor ke awal baris)\n";
    std::cout << "6. \\a : Alert/Bell (Menghasilkan suara beep pada sistem)\n";
    std::cout << "7. \\\\ : Backslash (Menampilkan karakter backslash itu sendiri)\n";
    std::cout << "8. \\\' : Single Quote (Menampilkan tanda petik satu di dalam string)\n";
    std::cout << "9. \\\" : Doubel Quote (Menampilkan tanda petik dua di dalam string)\n";
    std::cout << "10. \\0 : Null Character (Menandakan akhir dari sebuah string (penting banget di Informatika!).)\n";

    return 0;
}
