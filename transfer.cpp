void Bank::bankTransferScreen()
{
    system("cls"); 
    header();
    if (authenticated)
    {   
        string amtInput;
        string toInput;
        float amt;
        cout << "   Please key in your transfer amount: $"; cin >> amtInput;
        cout << "\n";

        cout << "   Please key in your transfer recipient: "; cin >> toInput;
        cout << "\n";

        if (amtInput.find_first_not_of("1234567890.") != string::npos )
        {
            cout << "   Invalid input: " << amtInput << endl;
            cout << "\n\n";
            system("PAUSE");
            bankTransferScreen();
        }

        amt = stof(amtInput);
        if (amt <= 0)
        {
            cout << "   Please key in only positive values.\n";
        }

        if (transfer(unAttempt, toInput, amt))
        {   
            cout << "   Successfully transferred $" << amt << " from account to " << toInput << ".\n";
            Sleep(1000);
            bankMenuScreen();
        }
        else
        {
            cout << "   Please check your balance or recipient.\n";
            system("PAUSE");
            bankMenuScreen();
        }
    }
}
