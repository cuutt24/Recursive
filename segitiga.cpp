//nama:afriza tri rizki
//kelas:informatika-b
//SDA RECURSIVE-segitiga
#include <iostream>

using namespace std;

void segitiga(int limit, int cur = 1) {
	//print bintang berdasarkan variabel cur
	for (int i = 0; i < cur; i++) {
		cout << "*";
	} cout << endl; //new line ketika selesai print bintang

	cur++;	
	
	//jika nilai cur bukan sama dengan limitnya , maka menjalankan fgungsinya lagi 
	if (cur != limit + 1) {
		segitiga(limit, cur);
	}
}


int main() {
	int limit = 10;
	segitiga(limit);
	// fungsi segitiga
}