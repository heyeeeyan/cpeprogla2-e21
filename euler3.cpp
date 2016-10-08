#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int i, num, sum=0;
int main(){
    ifstream f("input.txt");
    FILE *fp;
    fp = fopen("input.txt", "r");
    
    if(!fp){
    	cout << "Cannot open file.\n";
		system("pause");
		exit(1);
	}
    while (f >> num) {
    }
    for (i=0; i<num;i++){
    	if(i%3 == 0|| i%5== 0){
    		sum+=i;
		}
	}  
	cout << sum << endl;  
    system("pause");
    return 0;
}   
