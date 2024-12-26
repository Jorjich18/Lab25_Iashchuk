#include <iostream>
#pragma warning(disable: 4996)
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	int i, n, kol = 0;
	char* s = new char[100];
	char spaces[] = " ";
	puts("¬ведiть р€док: ");
	gets_s(s, 100);
	n = strlen(s);
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ' ') {
			kol++;
		}
	if (kol > 2) {
		puts("\nЅагато пробiлiв\n");
		system("pause");
		delete[]s;
		return 0;
	}
	cout << "\nќстаннi лiтери слiв:" << endl;
	char* word = strtok(s, spaces);
	while (word) {
		size_t len = strlen(word);
		if (len > 0)
			cout << word[len - 1] << " ";
		word = strtok(NULL, spaces);
	}
	cout << endl << endl;
	delete[]s;
	system("pause");
	return 0;
}