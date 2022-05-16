#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a, b,c ,bill = 0;
	char m;
	cout<<"-----------------------------  WELCOME  -----------------------------"<<endl;
	cout<<"--------------------------  TO ABC BAKERY  --------------------------"<<endl;
	cout<<endl<<endl;
	cout<<"-----------------------------   MENU   ------------------------------"<<endl;
	cout<<endl;
	cout<<"--------------------ENTER THE NUMBER FOR THE ITEM--------------------"<<endl;
	cout<<endl;
	menu:
	cout<<"\n1. BREAD"<<endl;
	cout<<endl;
	cout<<"2. PATTY"<<endl;
	cout<<endl;
	cout<<"3. PASTRY"<<endl;
	cout<<endl;
	cout<<"4. CAKE"<<endl;
	cout<<endl;
	cout<<"5. BISCUIT"<<endl;
	cout<<endl;
	cout<<"6. NAMKEEN"<<endl;
	cout<<endl;
		cin>>a;
		switch(a){
			case 1:
				system("cls");
				cout<<endl;
				cout<<"--- WHICH TYPE OF BREAD DO YOU WANT ---"<<endl;
				cout<<endl;
				cout<<"-- WE HAVE ... --"<<endl;
				cout<<endl;
				cout<<"1. FLOUR BREAD------------------------------RS 50/-"<<endl;
				cout<<endl;
				cout<<"2. MULTI GRAIN------------------------------RS 50/-"<<endl; 
				cout<<endl;
				cout<<"-- WHAT DO YOU LIKE TO HAVE SIR/MA'AM --\n"<<endl;
				cout<<"-- ENTER THE NUMBER YOU CHOOSE TO HAVE --"<<endl;
				cin>>b;
				cout<<endl;
				cout<<" -- HOW MANY DO YOU WANT ? --"<<endl;
				cin>>c;
				cout<<endl;
				bill = (c * 50) + bill;
				system("cls"); 
				cout<<"---  DO YOU NEED ANYTHING ---\n "<<endl;
				cout<<"----------y/n-----------"<<endl;
				cin>>m;
				if(m=='y')
				{
					system("cls");
					goto menu;
					cout<<endl;
				}
				else
				{
					break;
				}			
				break;
			case 2:
				system("cls");
				cout<<endl;
				cout<<"--- WHICH TYPE OF PATTY DO YOU WANT ---"<<endl;
				cout<<endl;
				cout<<"-- WE HAVE ... --"<<endl;
				cout<<endl;
				cout<<"1. ALLO PATTY------------------------------RS 20/-"<<endl;
				cout<<endl;
				cout<<"2. CHEESE PATTY----------------------------RS 20/-"<<endl; 
				cout<<endl;
				cout<<"3. PANNER PATTY----------------------------RS 20/-"<<endl;
				cout<<endl;
				cout<<"4. TANDORI PATTY---------------------------RS 20/-"<<endl;
				cout<<endl;
				cout<<"-- WHAT DO YOU LIKE TO HAVE SIR/MA'AM --\n"<<endl;
				cout<<"-- ENTER THE NUMBER YOU CHOOSE TO HAVE --"<<endl;
				cin>>b;
				cout<<endl;
				cout<<" -- HOW MANY DO YOU WANT ? --"<<endl;
				cin>>c;
				cout<<endl;
				bill = (c * 20) + bill;
				system("cls"); 
				cout<<"---  DO YOU NEED ANYTHING ---\n "<<endl;
				cout<<"----------y/n-----------"<<endl;
				cin>>m;
				if(m=='y')
				{
					system("cls");
					goto menu;
					cout<<endl;
				}
				else
				{
					break;
				}
				break;
			case 3:
				system("cls");
				cout<<endl;
				cout<<"WHICH FLAVOR"<<endl;
				cout<<endl;
				cout<<"WE HAVE.....\n";
				cout<<endl;
				cout<<"1. STRAWBERRY FLAVOR-----------------------RS 50/-"<<endl;
				cout<<endl;
				cout<<"2. CHOCOLATE FLAVOR------------------------RS 50/-"<<endl; 
				cout<<endl;
				cout<<"3. PINEAPPLE FLAVOR------------------------RS 50/-"<<endl;
				cout<<endl;
				cout<<"4. BUTTERCOTCH FLAVOR----------------------RS 50/-"<<endl;
				cout<<endl;
				cout<<"-- WHAT DO YOU LIKE TO HAVE SIR/MA'AM --\n"<<endl;
				cout<<"-- ENTER THE NUMBER YOU CHOOSE TO HAVE --"<<endl;
				cin>>b;
				cout<<endl;
				cout<<" -- HOW MANY DO YOU WANT ? --"<<endl;
				cin>>c;
				cout<<endl;
				bill = (c * 50) + bill;
				system("cls"); 
				cout<<"---  DO YOU NEED ANYTHING ---\n "<<endl;
				cout<<"----------y/n-----------"<<endl;
				cin>>m;
				if(m=='y')
				{
					system("cls");
					goto menu;
					cout<<endl;
				}
				else
				{
					break;
				}
				break;
			case 4:
				system("cls");
				cout<<endl;
				cout<<"WHICH FLAVOR"<<endl;
				cout<<endl;
				cout<<"WE HAVE.....\n";
				cout<<endl;
				cout<<"1. STRAWBERRY FLAVOR-----------------------RS 450/-"<<endl;
				cout<<endl;
				cout<<"2. CHOCOLATE FLAVOR------------------------RS 450/-"<<endl; 
				cout<<endl;
				cout<<"3. PINEAPPLE FLAVOR------------------------RS 450/-"<<endl;
				cout<<endl;
				cout<<"4. BUTTERCOTCH FLAVOR----------------------RS 450/-"<<endl;
				cout<<endl;
				cout<<"5. FRUIT CAKE------------------------------RS 450/-"<<endl;
				cout<<endl;
				cout<<"-- WHAT DO YOU LIKE TO HAVE SIR/MA'AM --\n"<<endl;
				cout<<"-- ENTER THE NUMBER YOU CHOOSE TO HAVE --"<<endl;
				cin>>b;
				cout<<endl;
				cout<<" -- HOW MANY DO YOU WANT ? --"<<endl;
				cin>>c;
				cout<<endl;
				bill = (c * 450) + bill;
				system("cls"); 
				cout<<"---  DO YOU NEED ANYTHING ---\n "<<endl;
				cout<<"----------y/n-----------"<<endl;
				cin>>m;
				if(m=='y')
				{
					system("cls");
					goto menu;
					cout<<endl;
				}
				else
				{
					break;
				}
				break;
			case 5:
				system("cls");
				cout<<endl;
				cout<<"WHICH BISCUIT DO YOU WANT"<<endl;
				cout<<endl;
				cout<<"WE HAVE.....\n";
				cout<<endl;
				cout<<"1. ATTA BISCUIT----------------------------RS 60/-"<<endl;
				cout<<endl;
				cout<<"2. COOKIES---------------------------------RS 60/-"<<endl; 
				cout<<endl;
				cout<<"3. CHOCO CHIP------------------------------RS 60/-"<<endl;
				cout<<endl;
				cout<<"4. PEANUT BUTTER---------------------------RS 60/-"<<endl;
				cout<<endl;
				cout<<"-- WHAT DO YOU LIKE TO HAVE SIR/MA'AM --\n"<<endl;
				cout<<"-- ENTER THE NUMBER YOU CHOOSE TO HAVE --"<<endl;
				cin>>b;
				cout<<endl;
				cout<<" -- HOW MANY DO YOU WANT ? --"<<endl;
				cin>>c;
				cout<<endl;
				bill = (c * 60) + bill;
				system("cls"); 
				cout<<"---  DO YOU NEED ANYTHING ---\n "<<endl;
				cout<<"----------y/n-----------"<<endl;
				cin>>m;
				if(m=='y')
				{
					system("cls");
					goto menu;
					cout<<endl;
				}
				else
				{
					break;
				}
				break;
			case 6:
				system("cls");
				cout<<endl;
				cout<<"--- WHICH TYPE OF NAMKEEN DO YOU WANT ---"<<endl;
				cout<<endl;
				cout<<"-- WE HAVE ... --"<<endl;
				cout<<endl;
				cout<<"1. ALLO BUJIA---------------------------------RS 120/-"<<endl;
				cout<<endl;
				cout<<"2. PUNJABI TADKA------------------------------RS 120/-"<<endl; 
				cout<<endl;
				cout<<"3. ROASTED PEANUTS----------------------------RS 120/-"<<endl;
				cout<<endl;
				cout<<"4. KHATTA METHA-------------------------------RS 120/-"<<endl;
				cout<<endl;
				cout<<"5. MIX NAMKEEN--------------------------------RS 120/-"<<endl;
				cout<<endl;
				cout<<"-- WHAT DO YOU LIKE TO HAVE SIR/MA'AM --\n"<<endl;
				cout<<"-- ENTER THE NUMBER YOU CHOOSE TO HAVE --"<<endl;
				cin>>b;
				cout<<endl;
				cout<<" -- HOW MANY DO YOU WANT ? --"<<endl;
				cin>>c;
				cout<<endl;
				bill = (c * 120) + bill;
				system("cls"); 
				cout<<"---  DO YOU NEED ANYTHING ---\n "<<endl;
				cout<<"----------y/n-----------"<<endl;
				cin>>m;
				if(m=='y')
				{
					system("cls");
					goto menu;
					cout<<endl;
				}
				else
				{
					break;
				}
				break;
			default:
				system("cls");
				cout<<"CHOOSE THE RIGHT NUMBER"<<endl;
				goto menu;
	}
	system("cls");	
	cout<<"--- THE BILL IS : "<<bill;
	cout<<endl;
	cout<<endl; 
	cout<<"------------------------ THANKS FOR SHOPPING -----------------------------"<<endl;
	getch();
	return 0;
}
