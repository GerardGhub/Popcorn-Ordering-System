#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>


using namespace std;


int main()
{
char choice='Y';

int order = 1;
int order2 = 1;

int num1=0, num2=0, num3=0, num4=0;
int f1=0, f2=0, f3=0, f4=0;
int num_customers;
int sentinel=0;
int sentinel2=0;
int ordercount=0;
const double UnitPrice1= 50.00, UnitPrice2= 75.00,UnitPrice3= 100.00, UnitPrice4= 120.00;
const double fPrice1= 10.00, fPrice2= 10.00,fPrice3= 10.00, fPrice4= 0.00;
double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0;
double Amountofflavor1=0, Amountofflavor2=0, Amountofflavor3=0, Amountofflavor4=0;


cout<<"===============POP-CORN-STORE===============\n\n"

      <<"SIZE\n\n"
     <<"\n [1] Small		   		50.00"
     <<"\n [2] Medium  		        	75.00"
	 <<"\n [3] Large	           	        100.00"
	 <<"\n [4] Extra Large                        120.00";





while (order != sentinel)
{
cout<<"\nFrom The List Of Pop Corn Size, What Would You Like to Order?:\n";
cin>>order;
switch(order)
			{

                case 0:
                break;

				case 1:

                cout<<"\nHow Many Pop Corn Small Size Would You Like To Order:\n";
                               cin>>num1;

                AmountofSale1 = UnitPrice1 * num1;
                break;




				case 2:
                cout<<"\nHow Many Pop Corn Medium Size Would You Like To Order:\n";
				               cin>>num2;

                AmountofSale2= UnitPrice2 * num2;
                break;


                case 3:
                cout<<"\nHow Many PopCorn Large Size Would You Like To Order:\n";
                                  cin>>num3;

                AmountofSale3= UnitPrice3 * num3;
                break;



                case 4:
                cout<<"\nHow Many Pop Corn Extra Large Would You Like To Order:\n";
                                cin>>num4;

                AmountofSale4= UnitPrice4 * num4;
                break;





                default: cout<<"Please Choose A Valid Item From Our List\n\n";
                }


{


cout<<"==POP-CORN- FLAVOR   & PRICE ==\n\n"

 
     <<"\n [1] Cheese		   	    10.00"
     <<"\n [2] Barbeque  		            10.00"
	 <<"\n [3] Sour and Cream	            10.00"
	 <<"\n [4] None                           0.00";






switch(order)
{

          case 0:
                break;

				case 1:

                cout<<"\nWhat Pop Corn Flavor Would You Like To Order for the Small Size:\n";
                               cin>>f1;

                Amountofflavor1 = fPrice1 + AmountofSale1;
                       ordercount = ordercount + 1;
                break;




				case 2:
       cout<<"\nWhat Pop Corn Flavor Would You Like To Order for the Medium Size:\n";
				               cin>>f2;

                    Amountofflavor2 = fPrice2 + AmountofSale2;
                        ordercount = ordercount + 1;
                break;


                case 3:
               cout<<"\nWhat Pop Corn Flavor Would You Like To Order for the Large Size:\n";
                                  cin>>f3;

                   Amountofflavor3 = fPrice3 + AmountofSale3;
                       ordercount = ordercount + 1;
                break;



                case 4:
                   cout<<"\nWhat Pop Corn Flavor Would You Like To Order for the Extra Large Size:\n";
                                cin>>f4;

                     Amountofflavor4 = fPrice4 + AmountofSale4;
                            ordercount = ordercount + 1;
                break;


                default: cout<<"Please Choose A Valid Item From Our List\n";
                }




/* magagamit mo to debug mo pra sa Yes or no try mo
 if(choice == 'Y'|| choice =='y'){
            continue; // instead of returning, skip to the next iteration
            // and ask again
        }else if(choice =='N'||choice =='n'){
            break; // return could be used here to break the while loop and 
            // terminate the program. But be explicit and use a statement specifically  
            // made for breaking out of loops
        }
*/

      
cout<<"ORDER #:";   cout<<ordercount;
cout<<"==============================================================================================================================\n\n";

cout<<left<<setw(15)<<"ITEM"<<right<<setw(15)<<"QUANTITY"<<right<<setw(20)<<"UNIT PRICE"<<setw(20)<<"FLAVOR"<<right<<setw(25)<<"AMOUNT OF SALES\n";

cout<<"=================================================================================================================================";

cout<<"\nPop Corn Cheese:\t"<<setw(6)<<left<< num1 <<setw(16)<<right<< UnitPrice1 <<setw(20)<<right<< fPrice1 <<setw(20) <<right<< Amountofflavor1<<endl;

cout<<"\nPop Corn Barbeque:\t"<<setw(6)<<left<< num2 <<setw(16)<<right<< UnitPrice2 <<setw(20)<<right<< fPrice2 <<setw(20) <<right<< Amountofflavor2<<endl;

cout<<"Pop Corn Sour and Cream:"<<setw(6)<<left<< num3 <<setw(15)<<right<< UnitPrice3 <<setw(20) <<right<< fPrice3 <<setw(20) <<right<< Amountofflavor3<<endl;

cout<<"Pop Corn Plain Flavor:\t"<<setw(6)<<left<< num4 <<setw(16)<<right<< UnitPrice4 <<setw(20) <<right<< fPrice4 <<setw(20) <<right<< Amountofflavor4<<endl;
cout<<"=================================================================================================================================";




              }




}

system("PAUSE");
return 0;



}
