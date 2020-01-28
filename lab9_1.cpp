#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0},i=0; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{ i+=1;
		cout <<"Student ["<<i<<"]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A') // if grade is A
			count[0]+=1;
		else if(grade=='B') // if grade is B
			count[1]+=1;
		else if(grade=='C') // if grade is C
			count[2]+=1;
		else if(grade=='D') // if grade is D
			count[3]+=1;
		else if(grade=='F') // if grade is F
			count[4]+=1;
		else if(grade=='0') // if grade is 0
			goto p1;	
		else{
			cout<<"“Wrong input. Please input again.\n";
			i-=1;
		}
			
		 
	}while(true);
	
	p1:
	cout << "In total "<<i-1<<" students.\n";
	cout << " A = " << count[0] <<", ";
	cout << " B = " << count[1] <<", ";
	cout << " C = " << count[2] <<", ";
	cout << " D = " << count[3] <<", ";
	cout << " F = " << count[4] <<", ";	
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}
