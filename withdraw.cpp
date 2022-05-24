void BankingSystem::withdraw()
{
			cout<<"HELLO "<<name<<" HAS BALANCE-> "<<balance<<endl<<" ENTER THE AMOUNT TO BE WITHDRAWN"<<endl;
			do{	
				cin>>amount;
				if(balance<amount)
					cout<<"INSUFFICIENT BALANCE"<<endl;
				else
					balance-=amount;
				cout<<"DO YOU WANT TO CONTINUE WITHDRAWING -Y/N"<<endl;		
				cin>>ch;	
			}while(toupper(ch)=='Y');
		cout<<"NEW BALANCE IS "<<balance<<endl;
}