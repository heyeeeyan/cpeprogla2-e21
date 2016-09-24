#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

void problem1(){

  char str1[100];
  char str2[100];
  int result;
  cout<<"Enter a first word (str1): ";
  gets(str1);
  cout<<"Enter second word (str2): ";
  gets(str2);
  if (strcmp(str1,str2)>0){
  	cout << "Positive";
  }
  else if (strcmp(str1,str2)<0){
  	cout << "Negative";
  }
  else{
  	cout << "Equal";
  } 

}

void problem2(){
	char str1[100];
	char str2[100];
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word (str2): ";
	gets(str2);
	int result = 0;
	for(int i = 0; i<strlen(str2); i++){
		if(str2[i]<str1[i]){
			result = 1;
			break;
		}
		else if(str2[i]>str1[i]){
			result = -1;
			break;
		}
	}
	cout << result;
}

void problem3(){
  char str1[100];
  char str2[100];
  int result;
  strcat(str1, str2);
  cout << "Enter a first word: ";
  cin.getline(str1,100);
  cout << "Enter a second word: ";
  cin.getline(str2,200);
  cout << "New value for str1: " << strcat(str1, str2);
}

void problem4(){
	char str1[100];
	char str2[100];
	int n, flag;
	cout<<"Enter a word: ";
	gets(str1);
	n=strlen(str1);
	for(int i=0;i<n;i++) {
	if(str1[i]!=str1[n-(i+1)]) flag=0;
	else flag=1;
	}
	if (flag==1) cout<<"The word "<<str1<<" is a palindrome.";
	else if (flag==0) cout<<"The word "<<str1<<" is NOT a palindrome.";
}

void problem5(){
	char str1[100];
	char str2[100];
	int result;
    cout << "Enter some string: ";
    cin.getline(str1,100);
    for(int i = 0; i< strlen(str1); i++){
  	if(i==0){
  	if(str1[i] >= 97 && str1[i] <= 122){
  		str1[i] -= 32;
	  }
	}
	if(str1[i]=='\0'){
		str1[i+1]-=32;
	}
}
	cout << str1;
}

void problem6(){
  char str1[100];
	int i, a(0), length;
	cout<<"Enter the string: ";
	gets(str1);
	
	length=strlen(str1);
	for(i=length;i>=0;i--){
		if(str1[i]==32){
			a=i+1;
			while(str1[a]!=32&&a<length){
				cout<<str1[a];
				a++;
			}
			cout<<endl;
		}
	}
	a=0;
	while(str1[a]!=32){
		cout<<str1[a];
		a++;
	}
}

main(){
	
	problem1();
	cout<<endl;
	system("pause");
	system("cls");
	problem2();
	cout<<endl;
	system("pause");
	system("cls");
	problem3();
	cout<<endl;
	system("pause");
	system("cls");
	problem4();
	cout<<endl;
	system("pause");
	system("cls");
	problem5();
	cout<<endl;
	system("pause");
	system("cls");
	problem6();
	cout<<endl;
	system("pause");
	system("cls");
}
