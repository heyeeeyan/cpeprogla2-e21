#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream f("input.txt");
	int num;
	FILE *fp;
    fp = fopen("input.txt","r");
    
    if(!fp)
	{
        cout << "Cannot open file";
        system("pause");
        exit(1);        
    }
	while (f >> num ){
		if(num%3==0&&num%5==0)
		cout << "Fizzbuzz" << endl;
	else
	
	if (num%3==0)
		cout << "Fizz" << endl;
		
	else
	
	if (num%5==0)
		cout << "Buzz" << endl;
	else
		cout << num << endl;
	}
	
	system ("pause>0");
	return 0;
}
