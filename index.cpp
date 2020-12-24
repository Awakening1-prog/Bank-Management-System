# include<bits/stdc++.h>
using namespace std;
class bank
{
	char name[100],add[100],y;
	int balance;
	public :
		void open_account();
		void deposite_money();
		void withdraw_money();
		void display_account();
};
void bank::open_account()
{
	cout<<"Enter Your Full Name :: ";
	cin.ignore();
	cin.getline(name,100);
	cout<<"Enter Your Address :: ";
	cin.ignore();
	cin.getline(add,100);
	cout<<"What type of account you want to open open saving(s) ot current(c) ";
	cin>>y;
	cout<<"Enter Amount for Deposite :: ";
	cin>>balance;
	cout<<"Account Created Successfully";
	
}
void bank  :: deposite_money()
{
	int a;
	cout<<"Enter the amount :: ";
	cin>>a;
	balance+=a;
	cout<<"Total Amount Deposited :: \t" << balance;
}
void bank :: display_account()
{
	cout<<"\nYour Full Name :: \t"<<name ;
	cout<<"\nEnter Your Address :: \t"<<add ;
	cout<<"\nType of Account :: \t"<< y ;
	cout<<"\nAmount Deposited :: \t"<<balance;
}
void bank :: withdraw_money()
{
	float amount;
	cout<<"\nWithdraw :: ";
	cout<<" Enter Amount to withdraw :: ";
	cin>>amount;
	balance-=amount;
	cout<<"Total Balance :: \t"<<balance;
}
int main()
{
	int ch;
	char x;
	bank obj;
	do{
    cout<<"1) Open Account \n";
    cout<<"2) Deposite Money \n";
    cout<<"3) Withdraw Money \n";
    cout<<"4) Display \n";
    cout<<"5) Exit \n";
    cout<<"Select The  Options \n";
    cin>>ch;
    switch(ch)
    {
    	case 1: "1) open account \n ";
    	{
    	obj.open_account();
    	break;
        }
    	case 2: "2) Deposite Money \n";
    	{
		obj.deposite_money();
		break;
		}
		case 3: "3) Withdraw Money \n";
		{
		obj.withdraw_money();
		break;
		}
		case 4: "Display \n";
		{
		obj.display_account();
		break;
		}
		case 5:
		{
		if(ch==5)
		{
			exit(1);
		
		}
		}
default:
	{
	cout<<"This Account is not Exist try again \n";
	}
}
	cout<<"\nDo you want to select next options press Y otherwise press N  :: \n";
	cin>>x;
	if(x=='N' )
	{
		
		exit(0);
		
	}
}while(x=='Y');
    return 0;
}
