#include <iostream>
#include <iomanip>
using namespace std;

struct Student{
	int id, r, q1, q2, q3;
	char name[50];
	double grade;
};

int main(){
	Student st;
	cout <<"Enter Student Records" << endl;
	cout << "ID: ";
	cin >> st.id;
	cin.ignore();
	cout << "Name: ";
	cin.getline(st.name,49);
	cout << "Quiz 1: ";
	cin >> st.q1;
	cout << "Quiz 2: ";
	cin >> st.q2;
	cout << "Quiz 3: ";
	cin >> st.q3;
	st.r = (st.q1 + st.q2 + st.q3);
	cout << endl << endl;
		cout << "Student Record" << endl;
		cout << "ID: " << st.id << endl;
		cout << "Name: " << st.name << endl;
		cout << "Grades: " << st.r/3 << setprecision(3) << endl;
	
	if (st.r <74)
	{
		cout << "Remarks: Failed" << endl;
	} 
	else
	{
		cout << "Remarks: Passed" << endl;
	}
	
	system("pause>0");
	return 0;
}

