#include <iostream>
#include <fstream>
using namespace std;

//Bestand wat moet worden gelezen.
#define FILE_READ "/RepositoryD/C++BA/Les4/Les4.1/jabberwocky.txt"
#define FILE_WRITE "/RepositoryD/C++BA/Les4/Les4.1/ykcowrebbaj.txt"


int countCharactersInFile() {
	char ch;
	ifstream in_stream;
	int count = 0;

	//Open het bestand.
	in_stream.open(FILE_READ);
	in_stream.get(ch);
	//sla Spaties niet over
	in_stream >> noskipws;
	//Kijken of bestand werkt.
	if (!in_stream) {
		cout << "Error with input-file" << endl;
	}
	//Tel de karrakters in het bestand.
	while (!in_stream.fail()) {
		count++;
		in_stream.get(ch);
	}
	in_stream.close();
	return count;
}


char getCharAtPosition(int position) {
	char ch;
	ifstream in_stream;
	in_stream.open(FILE_READ);
	in_stream >> noskipws;

	for (int i = 0; i < position; i++) {
		in_stream.get(ch);
	}
	in_stream.close();
	return ch;
}


void backwardsBamboozle() {
	int fileSize = countCharactersInFile();
	int currentCharacter = 0;
	ofstream out_stream;

	out_stream.open(FILE_WRITE);

	if (!out_stream) {
		cout << "Error with output-file" << endl;
	}
	for (int i = fileSize; i > 0; i--) {
		out_stream << getCharAtPosition(i);
	}
	out_stream.close();
	cout << "DONE!" << endl;
}




int main() {
	backwardsBamboozle();
	cin.get();
	return 0;
}