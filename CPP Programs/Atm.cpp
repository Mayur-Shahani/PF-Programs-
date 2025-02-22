#include<iostream>
using namespace std;
int main()
{
  int choice;
  int balance = 1000;
  int money,deposit;
 do
 {
  cout << " MENU  " << endl;
  cout << " Check balance  " << endl;
  cout << " Withdraw Money  " << endl;
  cout << " Deposit Money  " << endl;
  cout << " EXIT  " << endl;
  cout << " Select you Choice : " ;
  cin>>choice;
   switch(choice)
   {
    case 1:
	{
       cout<<"You current balance is $"<<1000;
        break;
	}

    case 2:
    {
      cout<<"How much money you need to Withdraw: ";
      cin>>money; 
	  if(money>1000)
    {
     cout<<"You cannot withdraw.";
    }
    else
    { 
	 cout<<"Your money is withdrawn.";
	}
    break;
    }

    case 3:
    {
      cout<<"How much money you want to deposit: ";
      cin>>deposit;
      balance+=deposit;
      cout<<"Your current balance is: $"<<balance;
      break;
	}

    case 4:
    {
      cout<<"You choose Exit! Goodbye\n";
      break;
    }

    default:
     cout<<"INVALID CHOICE\n";
    }
} 
    while(choice!=4);
    return 0;
	}