#include <iostream>
#include <iomanip>
using namespace std;
struct student{
	int id;
	char name[50];
	float q1, q2, q3, a;
};

void newLine();

int main(){
	student stud[5];
	int i;
	cout << "ENTER 5 STUDENT RECORDS \n";
	for (i=0; i<5; i++)
	{
		cout << "\nStudent " << (i+1) << endl;
		cout << "ID: ";
		cin >> stud[i].id;
		newLine();
		cout << "Name: ";
		cin.getline(stud[i].name,49);
		cout << "Enter 3 Quizzes: ";
		cin >> stud[i].q1 >> stud[i].q2 >> stud[i].q3;
		stud[i].a =stud[i].q1 + stud[i].q2 + stud[i].q3;
	}
	cout << setw(10) << "No. "
					<< setw(16) << "Student No"
					<< setw(30) << "Name"
					<< setw(10) << "Grade"
					<< setw(20) << "Remark";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	for (i=0; i<5; i++)
	{
		cout << endl;
		cout << setw(10) << i+1
				<< setw(16) << stud[i].id
				<< setw(30) << stud[i].name
				<< setw(10) << stud[i].a/3;
					
		if (stud[i].a < 75)
		{
			cout << setw(30) << "Remarks: Failed" << endl;
		} 
		else
		{
			cout << setw(30) <<"Remarks: Passed" << endl;
		}
	}
	
	system("pause>0");
	return 0;				
}
void newLine()
{
	char s;
	do{
		cin.get(s);
		}while(s!='\n');
}					

