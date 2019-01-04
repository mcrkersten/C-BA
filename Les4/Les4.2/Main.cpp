#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define FILE1_READ "/RepositoryD/C++BA/Les4/Les4.2/jabberwocky.txt"
#define FILE2_READ "/RepositoryD/C++BA/Les4/Les4.2/wilhelmus.txt"
#define FILE_WRITE "/RepositoryD/C++BA/Les4/Les4.2/jabberwockyWilhelmus.txt"


int countLinesInFile(string FILE) {
	ifstream in_stream;
	int count = 0;
	string line;

	//Open het bestand
	in_stream.open(FILE);

	if (!in_stream) {
		cout << "Error with input-file" << endl;
	}
	while (!in_stream.eof()) {
		getline(in_stream, line);
		count++;
	}
	in_stream.close();
	return count;
}

void hussleLines() {
	int size1 = countLinesInFile(FILE1_READ);
	int size2 = countLinesInFile(FILE2_READ);

	ifstream in_stream1;
	ifstream in_stream2;
	in_stream1.open(FILE1_READ);
	in_stream2.open(FILE2_READ);

	string line;

	ofstream out_stream;
	out_stream.open(FILE_WRITE);
	if (!out_stream) {
		cout << "Error with output-file" << endl;
	}

	if (size1 > size2) {
		while (!in_stream1.eof()) {
			getline(in_stream1, line);
			out_stream << line << endl;
			if (!in_stream2.eof()) {
				getline(in_stream2, line);
				out_stream << line << endl;
			}
		}
	}
	else {
		while (!in_stream2.eof()) {
			getline(in_stream2, line);
			out_stream << line << endl;
			if (!in_stream1.eof()) {
				getline(in_stream1, line);
				out_stream << line << endl;
			}
		}
	}
	out_stream.close();
	cout << "DONE!" << endl;
}

int main() {
	hussleLines();
	cin.get();
	return 0;
}