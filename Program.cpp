
                        /*                U2010164
                                      Mamurov Jasurbek
                                   Bank Management System
                           
                        */
  /*
                                                                                            Thank you for your attention and time!!!
  */

#include<iostream>
#include<cmath>
#include"Functions.h"
#include<string>
#include<iomanip>
#include<windows.h>


using namespace std;
long money;//Global Variable for money

int main(){
                                                                                                        system("color 79");//System color
      string Name,sName, country, currencyName;//Full name, country, and currency type
      int choice, currency;//For menu choice
      display1();//Intro function
     
      cout << endl << " Please, enter your name:  " ; cin >> Name;//For Name Input
      cout << " And your surname: " ; cin >> sName;//For surname input
      cout << endl << " Welcome " << Name << "!" << endl << " First, you should register a credit card! " << endl << endl; next();//For registering a card
      cout.width(50);//Title width
      cout << endl << endl << " ...Registration... " << endl << endl;//Title
      /*Registration. Sign up!*/
      cout << " Fullname: " << Name << " " << sName << endl;//Full name sign up
      cout << " Country: "; cin >> country;/*Country identification*/ cout << " Currency you want to proceed with:  " <<endl<< endl;//Currency asking
      currencyChoice://Repetition when wrong #entered
      cout<< " 1.USD " << " 2.UZS " << " 3.Euro ";//Asking for the type
      cin >> currency;
      /*Condition for currency check*/
      if (currency != 0 && currency>=1 && currency<=3) {
          if (currency == 1)
              currencyName = "USD";
          else if (currency == 2)
              currencyName = "UZS";
          else if (currency == 3)
              currencyName = "Euro";
          cout << " Thanks!!! ";
          }
      else {
          cout << " !@#$? " << " Please, type again..."<<endl;//Wrong value for currency
          goto currencyChoice;//Repetition of choice for currency
      }
      
       
      cout << endl << endl << " Thanks for registration!" <<endl<<" (You can change these from personal information section). " << endl << endl; next();//Info about correctness

      cout << endl << " First, you have to fill some money " << endl;
      /*Asking for proper amount*/
      if (currencyName == "USD")
          cout << " Amount has to be < 5,000" << endl;
      else if (currencyName == "UZS") 
          cout << " Amount has to be < 100,000,000" << endl;
      else if (currencyName == "Euro") 
          cout << " Amount has to be < 5,000" << endl;
      
   cout << " Enter the amount you want: "; again2: /*<--When wrong amount inputted*/ fillrepeat:/*<--Wrong amount for currency type*/  cin >> ::money;//Filling up for money
   if (::money > 0) {
       if (currencyName == "USD" && ::money > 5000) {
           cout << " Amount has to be < 5,000" << endl;
           goto fillrepeat;
       }
       if (currencyName == "UZS" && ::money > 100000000) {
           cout << " Amount has to be < 100,000,000" << endl;
           goto fillrepeat;
       }
       if (currencyName == "Euro" && ::money > 5000) {
           cout << " Amount has to be < 5,000" << endl;
           goto fillrepeat;
       }
       cout << " Successfully filled! " << endl;//Correct amount typed

       next();
   }
   else {
       cout << " !@#$? " << " Please, type again (Money > 0)... " << endl;//wrong amount typed
       /*When wrong amount inputted*/ goto again2;
   }                                                                                                    /*From payment to menu*/    menuPay:
                                                                                                        /*After completing transfer section*/ transferMenu:
                                                                                 /*After completing editing section*/               mainMenu:
  /*Goto statements -->*/                                                        /*After completing editing section2*/    mainMenu2:
                                                                                 /*After converting*/        mainMenu3:
                                                                                 /*From edit to menu*/       exitEdit:
                                                                                 /*After wrong # typed for choice of mainM*/        beginMenu:                                                                                                                                    
                                                                                 /*From filling to menu*/                           fillingExit:
                                                                                 /*After no money left from transfer*/              fillingReturn:
                  /*Main menu*/                                                            /*After no money left from payment*/     fillMenu:

                      menu();
      cin >> choice;
      while (choice>0&&choice<=6) {//Condition for the main menu

          string companyName;//Variable for company name and person's name
          switch (choice) {//Different choices on menu
          case 1:
          {int pChoice, payment, goMenu;//Variable for choice of payment sources
      payment:
          cout << setw(70) << " ||Payment|| " << endl << setw(70) << "Money: " << ::money << currencyName << endl;//Level of money amount
          cout << " Where you want to pay? " << endl;//Asking for place of payment                              /*Payment*/

          PaymentOpt();
          /*Wrong payment #*/againPay: cin >> pChoice;                                                          /*Condition for payment menu*/
          while (pChoice > 0 && pChoice <= 8) {
              switch (pChoice) {
              case 1:                                                   /*Restaurant billing*/
                  cout << setw(20) << " --Restaurant-- " << endl;
                  cout << " Enter the name of restaurant: "; cin >> companyName;//Asking for the name and Input
                  cout << " How much you want to pay?(Payment>0)! "; enterAgain2: cin >> payment;
                  if (payment > ::money || payment < 0) {
                      cout << " !@#$ Not enough money " << endl << " 1.Fill from main menu " << endl << " 2.Enter another amount ";
                      cin >> goMenu;
                      if (goMenu == 1) /*Return to main menu*/goto fillMenu;
                      else if (goMenu == 2)/*Wrong amount inputted*/ goto enterAgain2;
                  }
                   /*Changing main money*/::money -= payment;
                  cout << " Thanks!!!" << ::money << currencyName << " left " << " source: " << companyName << endl;
                  goto payment;
                  break;
              case 2: cout << setw(20) << " --Pub-- " << endl;
                  cout << " Enter the name of pub: "; cin >> companyName;//Asking for the name of pub
                  cout << " How much you want to pay?(Payment>0)! ";/*Wrong amount inputted*/ enterAgain3: cin >> payment;
                  if (payment > ::money || payment < 0) {
                      cout << " !@#$ Not enough money " << endl << " 1.Fill from main menu " << endl << " 2.Enter another amount ";
                      cin >> goMenu;
                      if (goMenu == 1) /*Return to main menu*/goto fillMenu;
                      else if (goMenu == 2)/*Wrong amount inputted*/ goto enterAgain3;
                  }
                  /*Changing main money*/::money -= payment;
                  cout << " Thanks!!!" << ::money << currencyName << " left " << " source: " << companyName << endl;
                  goto payment;
                  break;
              case 3: cout << setw(20) << " --Market-- " << endl;
                  cout << " Enter the name of market: "; cin >> companyName;//Asking for the name of pub
                  cout << " How much you want to pay?(Payment>0)! ";/*Wrong amount inputted*/ enterAgain4: cin >> payment;
                  if (payment > ::money || payment < 0) {
                      cout << " !@#$ Not enough money " << endl << " 1.Fill from main menu " << endl << " 2.Enter another amount ";
                      cin >> goMenu;
                      if (goMenu == 1) /*Return to main menu*/goto fillMenu;
                      else if (goMenu == 2)/*Wrong amount inputted*/ goto enterAgain4;
                  }
                  /*Changing main money*/::money -= payment;
                  cout << " Thanks!!!" << ::money << currencyName << " left " << " source: " << companyName << endl;
                  goto payment;
                  break;
              case 4: cout << setw(20) << " --Clothing-- " << endl;
                  cout << " Enter the name of clothing: "; cin >> companyName;//Asking for the name of pub
                  cout << " How much you want to pay?(Payment>0)! ";/*Wrong amount inputted*/ enterAgain5: cin >> payment;
                  if (payment > ::money || payment < 0) {
                      cout << " !@#$ Not enough money " << endl << " 1.Fill from main menu " << endl << " 2.Enter another amount ";
                      cin >> goMenu;
                      if (goMenu == 1) /*Return to main menu*/goto fillMenu;
                      else if (goMenu == 2)/*Wrong amount inputted*/ goto enterAgain5;
                  }
                  /*Changing main money*/::money -= payment;
                  cout << " Thanks!!!" << ::money << currencyName << " left " << " source: " << companyName << endl;
                  goto payment;
                  break;
              case 5:
                  cout << setw(20) << " --Energy-- " << endl;
                  cout << " Enter the name of energy office: "; cin >> companyName;//Asking for the name of pub
                  cout << " How much you want to pay?(Payment>0)! ";/*Wrong amount inputted*/ enterAgain6: cin >> payment;
                  if (payment > ::money || payment < 0) {
                      cout << " !@#$ Not enough money " << endl << " 1.Fill from main menu " << endl << " 2.Enter another amount ";
                      cin >> goMenu;
                      if (goMenu == 1) /*Return to main menu*/goto fillMenu;
                      else if (goMenu == 2)/*Wrong amount inputted*/ goto enterAgain6;
                  }
                  /*Changing main money*/::money -= payment;
                  cout << " Thanks!!!" << ::money << currencyName << " left " << " source: " << companyName << endl;
                  goto payment;
                  break;
              case 6:
                  cout << setw(20) << " --Water-- " << endl;
                  cout << " Enter the name of water office: "; cin >> companyName;//Asking for the name of pub
                  cout << " How much you want to pay?(Payment>0)! ";/*Wrong amount inputted*/ enterAgain7: cin >> payment;
                  if (payment > ::money || payment < 0) {
                      cout << " !@#$ Not enough money " << endl << " 1.Fill from main menu " << endl << " 2.Enter another amount ";
                      cin >> goMenu;
                      if (goMenu == 1) /*Return to main menu*/goto fillMenu;
                      else if (goMenu == 2)/*Wrong amount inputted*/ goto enterAgain7;
                  }
                  /*Changing main money*/::money -= payment;
                  cout << " Thanks!!!" << ::money << currencyName << " left " << " source: " << companyName << endl;
                  goto payment;
                  break;
              case 7:cout << setw(20) << " --Natural gas-- " << endl;
                  cout << " Enter the name of gas office: "; cin >> companyName;//Asking for the name of pub
                  cout << " How much you want to pay?(Payment>0)! ";/*Wrong amount inputted*/ enterAgain8: cin >> payment;
                  if (payment > ::money || payment < 0) {
                      cout << " !@#$ Not enough money " << endl << " 1.Fill from main menu " << endl << " 2.Enter another amount ";
                      cin >> goMenu;
                      if (goMenu == 1) /*Return to main menu*/goto fillMenu;
                      else if (goMenu == 2)/*Wrong amount inputted*/ goto enterAgain8;
                  }
                  /*Changing main money*/::money -= payment;
                  cout << " Thanks!!!" << ::money << currencyName << " left " <<" source: "<< companyName << endl;
                    goto payment; 
                    break;
              case 8:goto menuPay;
                  break;
              default: cout << " !@#$? " << " Please, type again..." << endl;//Wrong number typed
                  break;
              }

          }
          cout << " Wrong number typed! Please type again! " << endl;//Wrong number typed to the menu
          /*Wrong payment #*/goto againPay;
          }
          break;
          case 2:/*Transferring money*/
          {string personName1;//For a name
          int payment1, againTransfer, returnNum;//For money amount and for repetition
          cout << setw(70) << " ||Transfer|| " << setw(70) << endl << "Money: " << ::money;
      againTransferto:/*Repeat transfer*/
          cout << endl << " Type the person's name: "; cin >> personName1; cout << " Amount of money(Amount>0): "; /*Not proper amount inputted*/ againEnter: cin >> payment1;
          if (payment1 < 0) {
              cout << " Enter proper amount: ";
              /*Not proper amount inputted*/goto againEnter;
          }
          else if (payment1 > ::money) {
              cout << " !@# You don't have this amount! " << endl;/*Not enough money*/
              cout << " Type any number to return to main menu for filling "; cin >> returnNum;
              goto fillingReturn;/*Return for filling*/
          }
          ::money-=payment1;//Transferring money
          cout << payment1 << " Successfully transferred to " << personName1;//Result of transfer
          cout << setw(70) << " Money: " << ::money<<endl;
          if (::money == 0) {
              cout << " No money! " << endl;//When money is over
              cout << " Type any number to return to main menu for filling "; cin >> returnNum;
              goto fillingReturn;/*Return for filling*/
          }
          cout << " 1.Transfer again?"<<endl<<" (Any number).End transferring "; cin >> againTransfer;//Asking whether to transfer again
          if (againTransfer == 1)
              goto againTransferto;/*Repeat transfer*/
          else goto transferMenu;/*After completing transfer section*/
          }
          break;
          case 3:
          convertAgain:
              converter();//Function
              {int nextConvert;//To skip or try again
              cout << " Want again press 1(No press any number): "; cin >> nextConvert;
              if (nextConvert == 1)
                  goto convertAgain;//Start convet again
              else
                  goto mainMenu3;//Goto main menu
              }
              break;
          case 4:
          {int change;//For changing 
          cout << setw(80) << " |Personal info| " << endl;
          /*Personal data*/
          cout << setw(70) << " Name: " << Name << endl;
          cout << setw(70) << " Surname: " << sName << endl;
          cout << setw(70) << " Country: " << country << endl;
          cout << setw(70) << " Currency: " << currencyName << endl;
          /*Changing personal data*/
          cout << " Want to change data, then press 0(No press any number...) "; cin >> change;//Inputting for change
          if (change != 0) {
              goto exitEdit;//Quit editing
          }
          if (change == 0) {
              cout << setw(70) << " Editing... " << endl;
              cout << " Which one would you choose? " << endl;/*Showng options of editing*/
          againEdit:
              cout << " 1.Name " << endl << " 2.Surname " << endl << " 3.Country " << endl << " 4.Currency " << endl << " 5.Return to main menu " << endl; cin >> change;
              while (change > 0 && change <= 4) {
                  switch (change) {
                  case 1: cout << " Enter new name: "; cin >> Name;
                      break;
                  case 2: cout << " Enter new surname: "; cin >> sName;
                      break;
                  case 3: cout << " Enter new country: "; cin >> country;
                      break;
                  case 4: cout << " Enter new currency: " << endl;
                      cout << " 1.USD " << " 2.UZS " << " 3.Euro ";//Asking for the type
                      wrongCurr:/*Repeat currency#*/
                      cin >> currency;
                      if (currency == 1) 
                          currencyName = "USD";
                      if(currency==2)
                          currencyName = "UZS";
                      if (currency == 3)
                          currencyName = "Euro";
                      if (currency != 1 && currency != 2 && currency != 3) {
                          cout << " Wrong number typed! " << " Try Again! ";//Wrong # typed
                          goto wrongCurr;/*Repeat currency#*/
                      }
                      break;
                  case 5: goto mainMenu;/*Goto main menu*/
                      break;
                  default: cout << " !#* Enter proper number! " << endl;
                      break;
                  }
                  cout << " Which one would you choose? " << endl;
                  cout << " 1.Name " << endl << " 2.Surname " << endl << " 3.Country " << endl << " 4.Currency " << endl << " 5.Return to main menu " << endl; cin >> change;
                  if (change == 5) {
                      goto mainMenu2;/*Goto main menu*/
                  }
              }

              
          }
          }
          break;
          case 5:/*Filling section*/
          {int returnMainf, addMoney;
          cout << setw(70) << " ||Filling|| " << endl;
          cout << setw(70) << " Money:" << ::money << currencyName << endl;//Remaining money
          cout << " 1.Return to main menu(Not press any number): "; cin >> returnMainf;//Asking whether to return
          if (returnMainf == 1)
              goto fillingExit;/*Exit program*/
          else {
              if (currencyName == "USD")
                  cout << " Amount has to be < 5,000" << endl;
              else if (currencyName == "UZS")
                  cout << " Amount has to be < 100,000,000" << endl;
              else if (currencyName == "Euro")
                  cout << " Amount has to be < 5,000" << endl;
              cout << " Enter the amount you want: "; againEnter1:/*<--When wrong amount inputted*/ fillrepeat1:/*<--Wrong amount for currency type*/ cin >> addMoney;//Filling up for money
              if (addMoney>0) {
                  if (currencyName == "USD" && addMoney > 5000) {
                      cout << " Amount has to be < 5,000" << endl;
                      goto fillrepeat1;
                  }
                  if (currencyName == "UZS" && addMoney > 100000000) {
                      cout << " Amount has to be < 100,000,000" << endl;
                      goto fillrepeat1;
                  }
                  if (currencyName == "Euro" && addMoney > 5000) {
                      cout << " Amount has to be < 5,000" << endl;
                      goto fillrepeat1;
                  }
                  ::money += addMoney;
                  cout << " Successfully filled! " << endl;//Correct amount typed
                  next();//Return to main menu
              }
              else if(addMoney<=0) {
                  cout << " !@#$? " << " Please, type again (Money > 0)... " << endl;//wrong amount typed
                  /*When wrong amount inputted*/ goto againEnter1;
              }
          }
          }break;
          case 6: /*Additional info*/
              cout << " ------->Dec25th-------->" << endl<<"--------> Developed by Jasurbek Mamurov(U2010164)-------->" << endl<<"-------> MJBank <-------- "<<endl <<  endl << endl;
              exit(6);//Exit the main program
              break;
          default:
             break;
          }
      }
      cout << " Wrong number typed! ";/*For wrong #of menu*/
      goto beginMenu;/*start from the beginning*/
      
          system("pause");
          return 0;
      }

  

    








