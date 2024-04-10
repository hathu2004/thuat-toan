#include <iostream>

// Hàm giải bài toán Tháp Hà Nội
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        std::cout << "Di chuyen dia 1 tu cot " << from_rod << " sang cot " << to_rod << std::endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    std::cout << "Di chuyen dia " << n << " tu cot " << from_rod << " sang cot " << to_rod << std::endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    std::cout << "Nhap so dia: ";
    std::cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
