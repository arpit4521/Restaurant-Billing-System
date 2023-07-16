#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>


using namespace std;


int main()
{
char choice='Y';

int order = 1;

int num1=0, num2=0, num3=0, num4=0, num5=0;
int num_customers;
int sentinel=0;
const double UnitPrice1= 100, UnitPrice2= 150,UnitPrice3= 80, UnitPrice4= 120, UnitPrice5= 200;
double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0;

cout<<"Welcome to our restaurant !\n\n";
cout<<":::::::::::::::::::MENU:::::::::::::::::::\n\n"
     <<"\n Item[1] Veg Burger		           -> Rs.100 \n"
     <<"\n Item[2] Cheeze Pizza  		       -> Rs.150 \n"
     <<"\n Item[3] Veg Spring Rolls            -> Rs.80 \n"
     <<"\n Item[4] Grilled Sandwich		       -> Rs.120 \n"
     <<"\n Item[5] White Sauce Pazta           -> Rs.200 \n";
	 

         
         
while (order != sentinel)
{
cout<<"\nFrom The List Of Food Items, What Would You Like?:\n";
cin>>order;
switch(order)
			{
                
                case 0:
                break;
                
				case 1:
                     
                cout<<"\nHow Many Veg Burger Would You Like To Order:\n";
                               cin>>num1;
                
                AmountofSale1 = UnitPrice1 * num1;
                break;
                
                
          
                 
				case 2: 
                cout<<"\nHow Many Cheeze Pizza Would You Like To Order:\n";
				               cin>>num2;
               
                AmountofSale2= UnitPrice2 * num2;
                break;
                
                
                case 3: 
                cout<<"\nHow Many Veg Spring Roll Would You Like To Order:\n";
                                  cin>>num3;
                
                AmountofSale3= UnitPrice3 * num3;
                break;
                
                
                 
                case 4: 
                cout<<"\nHow Many Grilled Sandwich Would You Like To Order:\n";
                                cin>>num4;
                
                AmountofSale4= UnitPrice4 * num4;
                break;
                
                
                
                case 5: 
                cout<<"\nHow Many White Sauce Pazta Would You Like To Order:\n";
                                cin>>num5;
                                
                
                AmountofSale5= UnitPrice5 * num5; 
                break;
                
                
                default: cout<<"Please Choose A Valid Item From Our List\n";
                }
                

{       

cout<<"You Have Ordered:\n\n";
cout<<"===========================================================\n";

cout<<left<<setw(15)<<"ITEM"<<right<<setw(10)<<"QUANTITY"<<right<<setw(15)<<"UNIT PRICE"<<right<<setw(20)<<"AMOUNT OF SALE\n";

cout<<"===========================================================";

cout<<"\nVeg Burger:  \t"<<setw(6)<<left<< num1 <<setw(16)<<right<< UnitPrice1 <<setw(20) <<right<< AmountofSale1<<endl;

cout<<"\nCheeze Pizza:  \t"<<setw(6)<<left<< num2 <<setw(16)<<right<< UnitPrice2 <<setw(20) <<right<< AmountofSale2<<endl<<endl;

cout<<"Veg Spring Rolls:\t"<<setw(6)<<left<< num3 <<setw(15)<<right<< UnitPrice3 <<setw(20) <<right<< AmountofSale3<<endl<<endl;

cout<<"Grilled Sandwich:\t"<<setw(6)<<left<< num4 <<setw(16)<<right<< UnitPrice4 <<setw(20) <<right<< AmountofSale4<<endl<<endl;

cout<<"White Sauce Pazta:\t"<<setw(6)<<left<< num5 <<setw(16)<<right<< UnitPrice5 <<setw(20) <<right<< AmountofSale5<<endl<<endl;

cout << "Your feedbacks are welcome !";
}
              }

system("PAUSE");
return 0;
}