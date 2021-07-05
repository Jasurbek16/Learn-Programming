
																/*Function section*/

#include<iostream>
#include<iomanip>
using namespace std;

/*Intro statement*/


void display1() {
							/*Designing*/
	cout.width(80);
	cout.fill('*');
	cout << endl << " " << endl;
						/*Introductory word*/
	cout.width(58);
	cout <<  " Hello and welcome to the program!!! " << endl<<endl;  
	cout.width(49);
	cout << " Bank Management System" << endl;
	cout <<endl<<setw(30)<< " MJBank " << endl;
	                       /*Designing 2*/
	cout.width(81);
	cout.fill('*');
	cout <<endl<< " " << endl;
						   /*First access*/
	cout.width(70);
	cout.fill(' ');
	cout << " Sign up! (for free) " << endl;
	
	
	
}
/*For skipping*/
void next() {
	int next;
	cout<<setw(70) << " 1.Next " << endl;
	cin >> next;
}
/*For payment options*/
void PaymentOpt() {
	/*Food choices*/
	cout << setw(50) << " \/Food\/ " << endl;
	cout << " <1> Restaurant " << endl;
	cout << " <2> Pub " << endl;

	/*Shopping*/
	cout << setw(50) << " \/Shop\/ " << endl;
	cout << " <3> Market " << endl;
	cout << " <4> Clothing " << endl;

	/*Utility bill payment*/
	cout << setw(50) << " \/Utility Bills\/ " << endl;
	cout << " <5> Energy " << endl;
	cout << " <6> Water " << endl;
	cout << " <7> Natural gas " << endl;
	cout << " <8> Main menu " << endl;
}
/*Main Menu*/
void menu() {
	
	cout << endl << "     [1]Payment..." << endl;//1st Program
	cout << "     [2]Transfer money to another card..." << endl;//2nd Program
	cout << "     [3]Knowing money exchange amount..." << endl;//3rd Program
	cout << "     [4]Personal Information..." << endl;//4th Program
	cout << "     [5]Fill money to your card..." << endl;//5th Program
	cout << "     [6]Quit the program..." << endl;//6th Option
}
/*Money Convering program*/
void converter() {
	string convertcurr;//For converted name
	int convcurr1, convcurr2;//Choices of currencies
	long double currmoney;//Main money variable
	cout << setw(70) << " ||Convert|| " << endl;
	cout << " ---> Updated on Dec.24th <--- " << endl;//Info about the date of update
	convertAgain:
	cout << " 1.USD " << " 2.UZS " << " 3.Euro "<<endl;//Asking for the currency type
	cout << " Enter currency you have: "; cin >> convcurr1;
	cout << " Enter currency you want to convert to: "; cin >> convcurr2;
	cout << " How much money you want to convert(amount<=95): "; cin >> currmoney;
	if (convcurr1 == 1 && convcurr2 == 2) {
		cout << " USD --> UZS " << endl;
		currmoney *= 10468;
		convertcurr = "UZS";
	}
	else if (convcurr1 == 1 && convcurr2 == 3) {
		cout << " USD --> Euro " << endl;
		currmoney *= 0.82;
		convertcurr = "Euro";
	}
	else if (convcurr1 == 2 && convcurr2 == 1) {
		cout << " UZS --> USD " << endl;
		currmoney *= 0.000095;
		convertcurr = "USD";
	}
	else if (convcurr1 == 2 && convcurr2 == 3) {
		cout << " UZS --> Euro " << endl;
		currmoney *= 0.000078;
		convertcurr = "Euro";
	}
	else if (convcurr1 == 3 && convcurr2 == 1) {
		cout << " Euro --> USD " << endl;
		currmoney *= 1.22;
		convertcurr = "USD";
	}
	else {
		cout << " Euro --> UZS " << endl;
		currmoney *= 12758;
		convertcurr = "UZS";
	}
	cout << " Converted amount " << currmoney<<" "<<convertcurr<<endl;//Displaying the result
	}


