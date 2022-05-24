#include <iostream>
using namespace std;
void BankingSystem::deposit()
{
			cout<<"HELLO "<<name<<" HAS BALANCE-> "<<balance<<endl<<" ENTER THE AMOUNT TO DEPOSIT"<<endl;
			do{
				cin>>amount;
				balance+=amount;
				cout<<"DO YOU WANT TO CONTINUE DEPOSITING -Y/N"<<endl;		
				cin>>ch;	
			}while(toupper(ch)=='Y');
	cout<<"NEW BALANCE IS "<<balance<<endl;	
}