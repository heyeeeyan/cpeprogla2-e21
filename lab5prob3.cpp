#include <iostream>
#include <iomanip>
using namespace std;

struct info{
	char fname[50],lname[50];
	int cn,d,m,y,r;
		struct {
		int id,price,q, tp;
		char name[50];	
		}Item;
};
void newLine();
int main()
{
	info a[5];
	int i;
	cout << "Enter 3 customers " << endl;
	for(int i=0; i<3; i++)
	{
		cout << "CUSTOMER INFORMATION " << i+1<< endl;
		cin.ignore();
		cout << "Name: ";
		cin.getline(a[i].fname,50);
		cout << "Last name: ";
		cin.getline(a[i].lname,50);
		cout << "Contact No.: ";
		cin >> a[i].cn;	
		cout << "Oder Date" << endl;
		newLine();
		cout << "Day: "; 
		cin >> a[i].d;
		cout << "Month: ";
		cin >> a[i].m;
		cout << "Year: ";
		cin >> a[i].y;
		cout << "Enter 3 items " << endl;
		cout << "ID: ";
		cin >> a[i].Item.id;
		cin.ignore();
		cout << "Name: ";
		cin.getline(a[0].Item.name,50);
		cout << "Price: ";
		cin >> a[0].Item.price;
		cout << "Quantity: ";
		cin >> a[0].Item.q;
		cout << "ID: ";
		cin >> a[1].Item.id;
		cin.ignore();
		cout << "Name: ";
		cin.getline(a[1].Item.name,50);
		cout << "Price: ";
		cin >> a[1].Item.price;
		cout << "Quantity: ";
		cin >> a[i].Item.q;
		cout << "ID: ";
		cin >> a[2].Item.id;
		newLine();
		cout << "Name: ";
		cin.getline(a[2].Item.name,50);
		cout << "Price: ";
		cin >> a[2].Item.price;
		cout << "Quantity: ";
		cin >> a[2].Item.q;
		a[i].Item.tp = a[0].Item.price + a[1].Item.price + a[2].Item.price;
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "\n\n";
	cout << "SUMMARY REPORT " << "\n"; 
	cout << setw(10) << "# "
					<< setw(20) << "Customer Name"
					<< setw(20) << "Order"
					<< setw(20) << "Items"
					<< setw(10) << "Price"
					<< setw(10) << "Quantity";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	for (i=0; i<3; i++)
	{
		cout << endl;
		cout << setw(9) << i+1
				<< setw(16) << a[i].lname <<"," << a[i].fname
				<< setw(20) << a[i].d << "/" << a[i].m << "/" << a[i].y
				<< setw(15) << a[0].Item.name << endl << setw(65) << a[1].Item.name << endl << setw(65) << a[2].Item.name
				<< setw(10) << a[0].Item.price << endl <<  setw(65) << a[1].Item.price << endl << setw(65) << a[2].Item.price
				<< setw(10) << a[i].Item.q;
		cout << setw(65) << "TOTAL PRICE: " << a[i].Item.tp <<endl;	
	}
	return 0;
}
void newLine()
{
	
	char s;
	do{
		cin.get(s);
	}while(s!='\n');
}

