#include<iostream.h>
#include<conio.h>
class bank
{
  char name;
  int acc_no;
  int phn_no;
  int amount;
   public:
     void getdata();
     void display();
     void deposit();
     void withdraw();
};


  void bank :: getdata()
   {
      cout<<"\nEnter Name ";
      cin>> name;
       cout<< "\nEnter account number ";
       cin>>acc_no;
      cout<<"\nEnter Phone number ";
      cin>>phn_no;

   }


   void bank::display()
   {
     cout<<"\nyou have entered ";
     cout<<"\nName  "<<name;
     cout<<"\nAccount number  " <<acc_no;
     cout<<"\nPhone number  "<<phn_no;

   }

   void bank:: deposit()
   {
   int a;
     cout<<"Enter account number  "  ;
     cin>>a;
     cout<<"Enter amount ";
     cin>>amount;

     cout<<"\n";
     cout<<"Amount has been cr. to your account  ";
   }

   void bank:: withdraw()
   {
   int w;
     cout<<"Enter account number  " ;
     cin>>w;
     cout<<"Enter amount ";
     cin>>amount;

     cout<<"\n";
     cout<<"Amount has been dr. from your account  ";

   }

   void main()
   {
     int ch;
     bank order;
     clrscr();
     do
     {
      cout<<"\nChoose from the following  ";
      cout<<"\nPress 1 to add account ";
      cout<<"\nPress 2 to display  ";
      cout<<"\nPress 3 to deposit amount ";
      cout<<"\npress 4 to withdraw amount  " ;
      cout<<"\nPress 5 to exit  ";
      cin>>ch;

      switch(ch)
      {
	case 1: order.getdata(); break;
	case 2: order.display(); break;
	case 3: order.deposit(); break;
	case 4: order.withdraw(); break;
	case 5: break;
	default : cout<<"\ninvalid choice !!!!!! ";
      }
     }while(ch!=5);

 getch();
   }
