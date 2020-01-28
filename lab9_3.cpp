//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
   ifstream calculator;
   calculator.open("D:\\lab9\\lab9-2562-2-theeramet0793\\score.txt");
   float num,mean,Standd,sum=0,square=0;
   float count=0;
   string textline;

   while (getline(calculator,textline))
   {   num=atof(textline.c_str());
       sum=sum+num;
       square=square+pow(num,2);
       count+=1;
   }
   calculator.close();
    
   mean=sum/count; 
   Standd=sqrt(((1/count)*square)-(mean*mean));
   cout<<"Number of data = "<<count<<endl;
   cout<<"Mean = "<<mean<<endl;
   cout<<"Standard deviation = "<<Standd<<endl;
    




    return 0;
}