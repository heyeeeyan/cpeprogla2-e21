#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

double problem1(double num){
	cout << "Enter a number to be round off: ";
	cin >> num;
	cout << "Round off value: "<< round(num) << " " << endl << endl;
	return round(num);
}

void problem2(){
	int uniques[10], num;
	srand((unsigned)time(NULL)); 
	for(int i=0;i<10;i++){
		num=(rand()%21);
		for(int j=0;j<10;j++){
			if(num==uniques[j]){
					num=(rand()%21);
			}
			else{
				uniques[i] = num;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout << uniques[i]<<" ";
	}
}

int call_by_value(){
	int n, result=1;
	cout<<"\n\nEnter any positive integer: ";
	cin>>n;
	for(int i=1;i<n+1;i++) {
		if(n==0) cout<<" Result: 1\n";
		else result=result*i;
	}
	cout<<"Factorial of "<< n << " = " << result << endl;
}
    
main(){
	double num;
	int n;
	problem1(num);
	problem2();
	call_by_value();
}
