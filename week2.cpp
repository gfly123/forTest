#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Student {
public:
	char name[10];
	int age;
	char numb[10];
	int g1, g2, g3, g4;
public:
	int average(int g1, int g2, int g3, int g4) {
		return floor((g1+ g2+ g3 +g4) / 4);
	}
	void print() {
		cout << name <<','<< age <<','<< numb <<','<< average(g1, g2, g3, g4) << endl;
	}
};
int main() {
	char c;
	Student s;
	char *pname = s.name;
	cin.getline(pname, 10, ',');
	cin>>s.age>>c;
	char *pnumb = s.numb;
	cin.getline(pnumb,10,','),
	cin >> s.g1 >> c >> s.g2 >> c >> s.g3 >> c >> s.g4;
	s.print();
	return 0;
}
