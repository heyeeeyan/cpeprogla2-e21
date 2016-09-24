#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int chooser;
int choice(int chooser);
char again(char yesno);
char yesno;
void problem1();
void problem2();
void problem3();

void problem1(){
struct Student{
	int id, r, q1, q2, q3;
	char name[50];
	double grade;
};

void newLine();

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
	
	if (st.r <75)
	{
		cout << "Remarks: Failed" << endl;
	} 
	else
	{
		cout << "Remarks: Passed" << endl;
	}
	
}

void problem2(){
struct student{
	int id;
	char name[50];
	float q1, q2, q3, a;
};

void newLine();

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
}

void problem3(){ //For the 2nd and 3rd customer information just press enter first to input the details
	struct Customer{
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quan;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
	Item item[3];
	}order;
	
	double contNo;
};

void newLine();
	int i, j, tPrice;
	Customer c[3];
	for (i=0;i<3;i++){
		cout<<"CUSTOMER INFORMATION "<<i+1<<endl;
		cin.ignore();
		cout<<"First Name: ";
		cin.getline(c[i].name.firstName,29);
		cout<<"Last Name: ";
		cin.getline(c[i].name.lastName,29);
		cout<<"ORDER DATE: "<<endl;
		cout<<"Day: ";
		cin>>c[i].order.day;
		cout<<"Month: ";
		cin>>c[i].order.month;
		cout<<"Year: ";
		cin>>c[i].order.year;
		cout<<"\nENTER 3 ITEMS: "<<endl;
		for (j=0;j<3;j++){
		    cout<<"ID: ";
		    cin>>c[i].order.item[j].ID;
		    newLine();
    	    cout<<"Name: ";
    		cin.getline(c[i].order.item[j].itemName,29);
    		cout<<"Price: ";
    		cin>>c[i].order.item[j].Price;
    		cout<<"Quantity: ";
    		cin>>c[i].order.quan;
    		cout<<endl;
		}
		newLine();
}
	j=0;
	cout<<"SUMMARY REPORT"<<endl;
	cout<<" #"<<setw(30)<<"Customer Name"
	<<setw(20)<<"Order Date"
	<<setw(15)<<"Items"
	<<setw(15)<<"Price"
	<<setw(15)<<"Quantity"<<endl;
	
	for (i=0;i<3;i++){
		tPrice=0;
		cout<<" "<<i+1
		<<setw(23)<<c[i].name.lastName<<","
		<<setw(6)<<c[i].name.firstName
		<<setw(11)<<c[i].order.day<<"/"<<c[i].order.month<<"/"<<c[i].order.year<<endl;
		
    	for (j=0;j<3;j++){
    		cout<<setw(67)<<c[i].order.item[j].itemName
			<<setw(15)<<c[i].order.item[j].Price
			<<setw(15)<<c[i].order.quan<<endl;
    		tPrice += c[i].order.item[j].Price;
		}
		tPrice=tPrice*c[i].order.quan;
		cout<<setw(96)<<"TOTAL PRICE: "<<tPrice<<endl;
	}
}

void newLine()
{
	char s;
	do{
		cin.get(s);
		}while(s!='\n');
}					

int choose(int chooser) 
{
	cout<<"Choose a problem # to solve [1-3]..." ;
	cin>>chooser;
	switch(chooser) 
	{
		case 1:
			problem1();
			again(yesno);
			break;
		case 2:
			problem2();
			again(yesno);
			break; 
			
		case 3: 
			problem3();
			again(yesno);
			break;
	} 
			return chooser; 
}
			
char again(char yesno) 
{
	cout<<"\n\n Try another one? [y/n] ";
	cin>>yesno;
	if (yesno=='y') {
		system("cls");
		choose(chooser);
	}
	else if (yesno=='n') {
		cout<<"Signing off.....  \n";
	}
	else {
		again(yesno);
	}
	return yesno;
}
main () {
	choose(chooser);
}
