//nama:afriza tri rizki
//kelas:informatika-b
//SDA RECURSIVE-zero
#include <iostream>

using namespace std;

int countZero(int target[], int len, int index = 0, int count = 0) {
	//jika indexnya belum habis maka di lanjut...
	if (index != len) {
		//ketika nilai pada index itu = 0 maka variabel bertambah 1
		if (target[index] == 0) {
			count++;
		}
		index++;
		countZero(target, len, index, count);
	}
	//ketika semuanya sudah di check maka mengembalikan nilai yang berhasil dihitung
	else {
		return count;
	}
}

int main() {
	int target[] = { 0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0};
	int len = sizeof(target) / sizeof(target[0]);
	cout << countZero(target, len);
} 