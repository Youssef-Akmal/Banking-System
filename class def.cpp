#include<iostream>
using namespace std;

class BankingSystem
{
		private:
			long int account_number,mob_number,balance,newbalance,amount;
			string name,address,email;
			char choice,ch;
		public:
			void open_new_account(int n,BankingSystem *ob);
			void account_info();
			void withdraw();
			void deposit();
			void balance_info();
            bool transfer(const string username1, const string username2, float amount);
			int check(long int account_number,BankingSystem *ob,int n); 
			int  ret();
};