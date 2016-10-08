#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int ipt[3];
int i;
int main(){
    ifstream f("hashmat.txt");
    
    if(!f)	{
	cout << "Cannot open file.\n";
	system("pause");
	exit(1);
	}
		
    int hashmat, opponent;
    
  	for (i=0; i<3; i++){
  		while (f >> hashmat >> opponent) {
        cout << abs(hashmat-opponent) << endl;      
    }
	}
    system("pause");
    return 0;
}   
