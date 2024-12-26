#include <iostream>
#pragma warning(disable: 4996)
#include <cstring>
using namespace std;

void remspc(char* s)
{
	int n = strlen(s), j = 0;
	bool spaceFound = false;
	int i = 0;
	while (i < n && s[i] == ' ')
		i++;
	for (; i < n; i++) {
		if (s[i] != ' ') {
			s[j++] = s[i];
			spaceFound = false;
		}
		else if (!spaceFound) {
			s[j++] = ' ';
			spaceFound = true;
		}
	}
	if (j > 0 && s[j - 1] == ' ')
		j--;
	s[j] = '\0';
}

int main()
{
	setlocale(LC_ALL, ".1251");
	char s[100];
	puts("Введiть рядок: ");
	cin.getline(s, 100);
	remspc(s);
	cout << "\nРядок пiсля видалення зайвих пробiлiв:\n" << s << endl;
	system("pause");
	return 0;
}