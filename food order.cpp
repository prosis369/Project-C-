#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
using namespace std;

class one
{
    public:
        void menu1();
};

void one::menu1()
{
    cout<<"\n\n\n\t\t\t\t\t\t\t ********** WELCOME TO RUTH'S KITCHEN **********"<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t\t       ***** MENU *****"<<endl;
	cout<<"\n\n\n\t***************************\t\t\t********************************\t\t\t******************************"<<endl;
	cout<<"\n\t      ** STARTERS **\t\t\t\t      ** MAIN COURSE **\t\t\t\t\t      ** DESSERTS **\n";
	cout<<"\n\t[1] Garlic Bread-sticks (Rs.95)\t\t\t[2] Exotica Pizza (Rs.440)\t\t\t\t[3] Chocolate Truffle (Rs.185)\n\t[4] Potato Wedges (Rs.120)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Ferrero Rocher (Rs.140)\n\t[7] Paneer Tikka (Rs.130)\t\t\t[8] Double Cheese Pizza (Rs.540)\t\t\t[9] Blueberry Shake (Rs.145)\n\t[10] Veg Wrap (Rs.190)\t\t\t\t[11] Margherita Pizza (Rs.525)\t\t\t\t[12] Red Velvet (Rs.210)\n\t[13] Momos (Rs.115)\t\t\t\t[14] Crisp Corn Burger (Rs.325)\t\t\t\t[15] Mojito (Rs.130)\n\n\t***************************\t\t\t********************************\t\t\t******************************\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\n\t***************************************************************************************************************************************"<<endl;
}

class two:public one
{
    protected:
		 int  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
         string y,ye;

    public:
        void menu2()
        {
            ofstream write;
            write.open("order.text");
            if(!write)
            {
                cout<<"file can not open"<<endl;
                exit (-1);
            }

        a:
        cout<<"\n\n\tENTER YOUR ORDER KEY ONE AT A TIME: ";
        cin>>ch;
        cout<<"\n\n\tDO YOU WISH TO CHANGE YOUR ORDER KEY? (Y/N): ";
        cin>>ye;
        if(ye=="y"|| ye=="Y")
        {
            goto a;
        }
        else
        {
            switch(ch)
            {
                case 1:
                    cout<<"\n\n\tHOW MANY GARLIC BREAD STICKS DO YOU WANT? ";
                    cin>>pizza;
                    a=95;
                    s=s+a*pizza;
                    write<<"YOU ORDERED  Garlic Bread-sticks : 95";
                    write<<" \n";
                    write<<"NUMBER OF GARLIC BREADSTICKS IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED  " <<pizza<<"  Garlic Bread-sticks"<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl<<endl;
                break;

                case 2:
                    cout<<"\n\n\tHOW MANY EXOTICA PIZZAS DO YOU WANT? ";
                    cin>>pizza;
                    b=440;
                    s=s+b*pizza;
                    write<<"YOU ORDERED Exotica Pizza: 440";
                    write<<" \n";
                    write<<"NUMBER OF Exotica Pizza IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Exotica Pizza(s)"<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 3:
                    cout<<"\n\n\tHOW MANY CHOCOLATE TRUFFLES DO YOU WANT? ";
                    cin>>pizza;
                    c=185;
                    s=s+c*pizza;
                    write<<"YOU ORDERED Chocolate truffles : 185";
                    write<<" \n";
                    write<<"NUMBER OF Chocolate truffles IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Chocolate Truffle(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 4:
                    cout<<"\n\n\tHOW MANY POTATO WEDGES DO YOU WANT? ";
                    cin>>pizza;
                    d=120;
                    s=s+d*pizza;
                    write<<"YOU ORDERED  Potato Wedges : 120";
                    write<<" \n";
                    write<<"NUMBER OF Potato Wedges IS : "<<pizza;
                    write<<"\n";
                   cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Potato Wedges "<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 5:
                    cout<<"\n\n\tHOW MANY SPAGHETTI DO YOU WANT? ";
                    cin>>pizza;
                    e=350;
                    s=s+e*pizza;
                    write<<"YOU ORDERED  Spaghetti : 350";
                    write<<" \n";
                    write<<"NUMBER OF Spaghetti IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Spaghetti(s)"<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 6:
                    cout<<"\n\n\tHOW MANY FERRERO ROCHERS DO YOU WANT? ";
                    cin>>pizza;
                    f=140;
                    s=s+f*pizza;
                    write<<"YOU ORDERED Ferrero Rocher : 140";
                    write<<"\n";
                    write<<"NUMBER OF Ferrero Rochers IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Ferrero Rocher(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 7:
                    cout<<"\n\n\tHOW MANY PANEER TIKKAS DO YOU WANT? ";
                    cin>>pizza;
                    g=130;
                    s=s+g*pizza;
                    write<<"YOU ORDERED Paneer Tikka : 130";
                    write<<"\n";
                    write<<"NUMBER OF Paneer Tikkas IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Paneer Tikka(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 8:
                    cout<<"\n\n\tHOW MANY DOUBLE CHEESE PIZZAS DO YOU WANT? ";
                    cin>>pizza;
                    h=540;
                    s=s+h*pizza;
                    write<<"YOU ORDERED Double Cheese  Pizza: 540";
                    write<<" \n";
                    write<<"NUMBER OF Double Cheese Pizza IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Double Cheese Pizza(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 9:
                    cout<<"\n\n\tHOW MANY BLUEBERRY SHAKES DO YOU WANT? ";
                    cin>>pizza;
                    i=145;
                    s=s+i*pizza;
                    write<<"YOU ORDERED Blueberry Shakes : 145";
                    write<<" \n";
                    write<<"NUMBER OF Blueberry Shakes IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Blueberry Shake(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 10:
                    cout<<"\n\n\tHOW MANY VEG WRAPS DO YOU WANT? ";
                    cin>>pizza;
                    j=190;
                    s=s+j*pizza;
                    write<<"YOU ORDERED Veg Wraps : 190";
                    write<<" \n";
                    write<<"NUMBER OF Veg Wraps IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Ham Burger(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 11:
                    cout<<"\n\n\tHOW MANY Margherita Pizzas DO YOU WANT? ";
                    cin>>pizza;
                    k=525;
                    s=s+k*pizza;
                    write<<"YOU ORDERED Margherita Pizza: 525";
                    write<<" \n";
                    write<<"NUMBER OF Margherita Pizza IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Margherita Pizza(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 12:
                    cout<<"\n\n\tHOW MANY RED VELVET CAKES DO YOU WANT? ";
                    cin>>pizza;
                    l=210;
                    s=s+l*pizza;
                    write<<"YOU ORDERED Red Velvet Cakes : 210";
                    write<<" \n";
                    write<<"NUMBER OF Red Velvet Cakes IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Red Velvet Cake(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 13:
                    cout<<"\n\n\tHOW MANY MOMOS DO YOU WANT? ";
                    cin>>pizza;
                    m=115;
                    s=s+m*pizza;
                    write<<"YOU ORDERED  Momos  : 115";
                    write<<" \n";
                    write<<"NUMBER OF Momos IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Momo(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 14:
                    cout<<"\n\n\tHOW MANY CRISP CORN BURGERS DO YOU WANT? ";
                    cin>>pizza;
                    n=325;
                    s=s+n*pizza;
                    write<<"YOU ORDERED Crisp Corn Burgers : 325";
                    write<<" \n";
                    write<<"NUMBER OF Crisp Corn Burgers IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Crisp Corn Burger(s) "<<endl<<endl<<"\tYOUR ORDER IS SUCCESSFULLY SAVED "<<endl;
                break;

                case 15:
                    cout<<"\n\n\tHOW MANY MOJITO DO YOU WANT :";
                    cin>>pizza;
                    o=130;
                    s=s+o*pizza;
                    write<<"YOU ORDERED  Mojito : 130";
                    write<<"\n";
                    write<<"NUMBER OF Mojitos IS : "<<pizza;
                    write<<"\n";
                    cout<<"\n\n\n\tYOU ORDERED "<<pizza<<" Mojito(s) "<<endl<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
                break;

                case 16:
                    char opt;
                    cout<<"\n\t\t\t\t\t Are you sure you want to exit? (Y/N): ";
                    cin>>opt;
                    if(opt=='y' || opt=='Y'){
                        exit(0);
                    }
                    else{
                        goto a;
                    }

                break;

                default:
                    cout<<"\n\n\t\t\t\t\t\t\tINCORRECT ORDER KEY, PLEASE TRY AGAIN! "<<endl;
                    goto a;
                break;
            }
           cout<<"\n\tDO YOU WANT MORE FOOD? (Y/N): ";
           cin>>y;
           if(y=="y"|| y=="Y")
           {
                goto a;
           }
           else
           {
               cout<<"\n\t\t\t\t\t\t\tPlease enter your details in the next screen\n\t\t\t\t\t\t\t";
               system("PAUSE");
               system("cls");
               char name[30], addressline1[100], addressline2[100], addressline3[100], addressline4[10], number[10];

               cout<<"\n\t\t\t\t\t\t\tEnter Details\n\n";
               cout<<"\n\t\t\t\t\t\t\tPERSONAL DETAILS\n";
               cin.ignore();
               cout<<"\n\t\t\t\t\t\t\tFull Name: ";
               cin.getline(name,100);
               write<<endl<<name<<endl;
               write<<endl;
               cout<<"\n\t\t\t\t\t\t\tPhone No.: ";
               cin.getline(number,100);
               write<<number<<endl;
               write<<endl;
               cout<<"\n\t\t\t\t\t\t\tADDRESS\n";
               cout<<"\n\t\t\t\t\t\t\tStreet Address: ";
               cin.getline(addressline1, 100);
               write<<addressline1<<endl;
               cout<<"\n\t\t\t\t\t\t\tApartment/House name: ";
               cin.getline(addressline2, 100);
               write<<addressline2<<endl;
               cout<<"\n\t\t\t\t\t\t\tCity and State: ";
               cin.getline(addressline3, 100);
               write<<addressline3<<endl;
               cout<<"\n\t\t\t\t\t\t\tPincode: ";
               cin.getline(addressline4, 100);
               write<<addressline4<<endl;
               cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL, PLEASE WAIT ";
               for(int a=1;a<6;a++) // Change 'a<?' to how many * you want
               {
                    Sleep(500); //500 ms
                    cout << "...";
               }
            cout<<"\n\t\t\t\t\t\t\t";
            system("PAUSE");
           }
           write<<"\nTOTAL BILL IS : "<<s;
           write.close();
        }

    system("cls");
                            cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
                            cout << "\t\t\t\t\t\t\t|           Food Ordering System (BILL)          |"<<endl;
                            cout << "\t\t\t\t\t\t\t ================================================"<<endl;
                            cout << endl;
                            cout << endl;
                            cout << "\t\t\t\t\t\t\t  Bill No : 1201           Order : SN1353"<<endl;
                            cout << endl;
                            //cout << endl;
                            cout << "\t\t\t\t\t\t\t  Cashier :  Ruth"<<endl;
                            cout << endl;
                            char line[1000];
                            ifstream infile;
                            infile.open("order.text");
                            //infile>>line;
                            while(infile)
                            {
                                infile.getline(line,255);
                                if(infile)
                                cout<<"\t\t\t\t\t\t\t"<<"  "<<line<<"\n";
                            }
                            cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
                            infile.close();
                            cout<<"\n\t\t\t\t\t\t\t Thank you for ordering from Ruth's Kitchen!\n\t\t\t\t\t\t\t We hope to serve you again next time :)";

  }
  void show1()
  {
  	menu1();
  	menu2();
  }

};
class three:public one,public two
{
	public:
		void total()
      {
      		long userId; //for user id of administrator

			d:
			//cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------";
			cout<<"\n\t\t\t\t\t\t\tEnter Login Id = ";
			//cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t---------------------\n";
			cin>>userId;
			if(userId!=1203)
			{
				cout<<"\nPlease enter the correct id\n";
				goto d;
			}
			else
			cout<<"\n\n\n\t\t\t\t\t\t\tHello, Ruth\n";
			z:
			string pwd="hello";  //password
			string pass="";  //empty string
			char c;
				cout<<"\n\n\n\t\t\t\t\t\t\tPassword = ";
				p:
				c=getch();
				cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating the string
					goto p;
				}

      			{
      			if(pass==pwd)
      			{
      				cout<<"\n\n\t\t\t\t\t\t\tWelcome!\n\n\n\t\t\t\t\t\t\t";
      				system("PAUSE");
      				system("CLS");
      				show1();
				}
				else
				{
				cout<<"\nWrong Password\n";
				goto z;
				}
			}
		}
};

int main()
{
   three ob;
   ob.total();
   getch();
}
