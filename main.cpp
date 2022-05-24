int main(void)
{
		int wish,i=0,n=0,f=0;;
		char demand;
		BankingSystem ob[100];
		long int tmp=ob[0].ret();
		do{
		    f=0;
			cout<<"\t\t\t"<<"WELCOME TO SECTION C BANK "<<endl<<endl;
			cout<<"PRESS 1 TO OPEN NEW ACCOUNT"<<endl;
			cout<<"PRESS 2 TO CHECK YOUR ACCOUNT INFO"<<endl;
			cout<<"PRESS 3 TO WITHDRAW AMOUNT"<<endl;
			cout<<"PRESS 4 TO DEPOSIT AMOUNT"<<endl;
			cout<<"PRESS 5 TO CHECK YOUR BALANCE INFO"<<endl;
			cout<<"PRESS 6 TO EXIT"<<endl<<endl;
			cout<<"ENTER YOUR WISH"<<endl;
			cin>>wish;
			switch(wish)
			{
				case 1:
					ob[i].open_new_account(n,ob);
					n=n+1;
					i=i+1;
					break;
				case 2:
				do{
					cout<<"ENTER YOUR ACCOUNT NUMBER"<<endl;
					cin>>tmp;
					for(int j=0;j<=n-1;j++){
						if(tmp==ob[j].ret()){
							ob[j].account_info();
							f=1;
							break;
					    }	
					}
					if(f==0)
						cout<<"INVALID ACCOUNT NUMBER"<<endl;
					cout<<"DO YOU WANT TO CHECK OTHER ACCOUNT DETAILS -Y/N"<<endl;
			        cin>>demand;
			        }while(toupper(demand)=='Y');
						break;
				case 3:
						cout<<"ENTER YOUR ACCOUNT NUMBER"<<endl;
						cin>>tmp;
						for(int j=0;j<=n-1;j++){
							if(tmp==ob[j].ret()){
								ob[j].withdraw();
								f=1;
								break;
							}
						}	
						if(f==0)
							cout<<"INVALID ACCOUNT NUMBER"<<endl;
						break;
				case 4:
						cout<<"ENTER YOUR ACCOUNT NUMBER"<<endl;
						cin>>tmp;
						for(int j=0;j<=n-1;j++){
							if(tmp==ob[j].ret()){
								ob[j].deposit();
								f=1;
							    break;
							}
						}
						if(f==0)
						cout<<"INVALID ACCOUNT NUMBER"<<endl;
						break;
				case 5:
				        do{
				    		cout<<"ENTER YOUR ACCOUNT NUMBER"<<endl;
						    cin>>tmp;
						    for(int j=0;j<=n-1;j++){
							    if(tmp==ob[j].ret()){
							    	ob[j].balance_info();
						    		f=1;
						    		break;
							    }
					    	}
				    		if(f==0)
					    		cout<<"INVALID ACCOUNT NUMBER"<<endl;
							cout<<"DO YOU WANT TO CHECK OTHER ACCOUNT DETAILS -Y/N"<<endl;
			            cin>>demand;
			            }while(toupper(demand)=='Y');
						break;
				case 6:
						cout<<"THANK YOU"<<endl;
						demand='N';
						break;
				default:
						cout<<"INVALID CHOICE";
						break;
			}	
			cout<<"DO YOU WANT TO CONTINUE BANKING-Y/N"<<endl;
			cin>>demand;
		}while(toupper(demand)=='Y');
}
