#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Student{
       int id;
       Name name;
       double grade[3]; 
	   double ave[grade];
	   int total = 0;    
};

void newLine();

int main(){
    Student stud;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    for(int i=1; i<4; i++){
            cout << "Quiz "<< i << ": ";
            cin >> stud.grade[i];     
    }
    	
	stud.total = ;
	
    cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    cout << "Average Grade: " << stud.total << endl;
    
    	if (stud.total < 75)
    		cout << "Remarks: Failed";
    	else
    		cout << "Remarks: Passed";
                   
    
    
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
