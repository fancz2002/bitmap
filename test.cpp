#include "bitmap.h"

using namespace std;

int main() {
	string data_path = "ipData.txt";
	BitMap *bitmap_test = new BitMap();
	bitmap_test->ReadData(data_path);
	cout << "ip_data has been saved" << endl;
	bitmap_test->GenerateBitmap();
	cout << "bitmap has been established" << endl;
	bitmap_test->Compress();
	cout << "bitmap has been compressed" << endl;

	int query_index[8];
	char option;
	while (1) {
		cout << "please input the ip address:" << endl;
		cout << "(missing address please type -1)" << endl;
		for (int i = 0; i < 8; ++i) {
			cin >> query_index[i];
		}
		bitmap_test->ResponseQuery(query_index);
		cout << "continue or not?  y/n" << endl;
		cin >> option;
		if (option == 'n')
			break;
	}
	return 0;
}