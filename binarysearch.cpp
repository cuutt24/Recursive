//nama:afriza tri rizki
//kelas:informatika-b
//SDA RECURSIVE-binarysearch
#include <iostream>

using namespace std;

int binary(int target[], int key , int low, int high) {
	int mid = (low + high) / 2;
	if (high >= low) {
		//jika key sama dengan index tengah nya maka mengembalikan nilai indexnya
		if (key == target[mid]) {
			return mid;
		}
		//jika key berada di kanan (lebih besar dari nilai tengah) maka index tengah menjadi index awal untuk fungsi selanjutnya
		if (key > target[mid]) {
			return binary(target, key, mid + 1, high);
		}
		//jika key berada di kiri (lebih kecil dari nilai tengah) .... sama seperti comment di atas
		return binary(target, key, low, mid - 1);
	}
	//jika semua sudah di check dan tidak menemukan indexnya .. maka mengembalikan nilai -1
	return -1;
}

int main() {
	int target[] = { 4, 6, 7, 8, 10, 9, 11 };
	int len = (int)sizeof(target);
	int key = 7;
	cout << "nilai "<< key << " berada pada index " << binary(target, key, 0, len - 1);
}