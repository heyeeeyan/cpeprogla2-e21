#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
char str1[100], str2[200], word[100], yesno;
int n, flag, chooser;
//LAB3 String Manipulation by Kyle Zabala
char problem1() {
  int result;
  cout<<"Enter a first word (str1): ";
  gets(str1);
  cout<<"Enter second word (str2): ";
  gets(str2);
  outputString(str1,str2);
  if (result==-1){
  	cout << "negative";
  }
  else if (result==0){
  	cout << "equal";
  }
  else{
  	cout << "positive";
  } 

}
char problem2() {
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
char problem3() {
  int result;
  strcat(str1, str2);
  cout << "Enter a first word: ";
  cin.getline(str1,100);
  cout << "Enter a second word: ";
  cin.getline(str2,200);
  cout << "New value for str1: " << customStrCat(str1, str2);
}
char problem4() {
cout<<"\n\n**\nPALINDROME\n**\n";
cout<<"Enter a word: ";
gets(word);
n=strlen(word);
for(int i=0;i<n;i++) {
if(word[i]!=word[n-(i+1)]) flag=0;
else flag=1;
}
if (flag==1) cout<<"The word "<<word<<" is a palindrome.";
else if (flag==0) cout<<"The word "<<word<<" is NOT a palindrome.";
system("pause");
system("cls");
}
char problem5(){
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
char problem6(){
	string inp_str("I am British");
  string out_str("");
  string word_str;
  istringstream iss( inp_str );


  while (iss >> word_str) {
    out_str = word_str + " " + out_str;
  } // while (my_iss >> my_word) 

  cout << out_str << endl;
}
}
int choose(int chooser) {
cout<<"Choose a problem# to solve...";
cin>>chooser;
switch(chooser) {
case 1:problem1();break;
case 2:problem2();break;
case 3:problem3();break;
case 4:problem4();break;
case 5:problem5();break;
case 6:problem6();break;
default: break;
}
return chooser;
system("pause");
system("cls");
}
main() {
choose(chooser);
cout<<"\n*\nSolve another problem??? [y/n]";
cin>>yesno;
if(yesno=='y') {
choose(chooser);
}
else if(yesno=='n') cout<<"Thanks for using this program \n";
else {
cout<<"\n*\nSolve another problem??? [y/n]";
cin>>yesno;
}
system("pause");
system("cls");
}
