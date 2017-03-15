#include <bits/stdc++.h>
using namespace std;

void ReadAnimal(const char *filename) {
// map_animal.txt formatnya selalu "C3", yaitu kode hewan dan jumlah hewan
// hewan = menentukan hewan apa yg di implementasi di map
// n_hewan = menentukan jumlah hewan yg dibuat
	ifstream f;
	f.open(filename);
	char output[2];
	char hewan;
	int n_hewan;
	if (f.is_open()) {
		while (!f.eof()) {
			f >> output;
			hewan = output[0];
			n_hewan = ((int) output[1] - 48);
			
			//CONTOH IMPLEMENTASI:
			cout << hewan << " x" << n_hewan << endl;
			
		}
	}
	f.close();
}

int main() {
	ReadAnimal("map_animal.txt");
}