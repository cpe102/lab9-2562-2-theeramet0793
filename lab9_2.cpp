//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

 ofstream file_copy;
 file_copy.open("D:\\lab9\\lab9-2562-2-theeramet0793\\cheerbook_copy.txt");
 ifstream file_original;
 file_original.open("D:\\lab9\\lab9-2562-2-theeramet0793\\cheerbook.txt");
 string textline;

file_copy<<"“-------------------- SOTUS ---------------------”\n";
 while (getline(file_original,textline))
 {
     file_copy<<textline<<"\n";
 }
 file_copy<<"“-------------------- SOTUS ---------------------”\n";
 file_copy.close();
 file_original.close();

 return 0;   
}