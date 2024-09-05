#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>

using namespace std;

ifstream infile("billing.txt");
char n[50];
	char address[100];
	int no;
	char email[100];
char name[50];
string st;
int cu =0;
int total = 0;
int price,ch,qt,tprice=0,c=1;
void fever();
void cold();
void headache();
void painkiller();
void antibiotic();
void beauty();
void other();

 void fever()
{
	            
	            cout<<"\n\n";
	            cout<<"\t\t\t==============================================="<<endl;
	            cout<<"\t\t\t           FEVER MEDICINES LIST                 "<<endl;
	            cout<<"\t\t\t==============================================="<<endl;
	            cout<<"\n";
	            cout<<"\t\t\t1.Paracetemol                Rs.2 for each tablet"<<endl;
	            cout<<"\t\t\t2.Tylenol                    Rs.5 for each tablet"<<endl;
	            cout<<"\t\t\t3.Aspirin                    Rs.3 for each tablet"<<endl;
	            cout<<"\t\t\t4.Mortin IB                  Rs.6 for each tablet"<<endl;
	            cout<<"\t\t\t5.Adveil                     Rs.2 for each tablet"<<endl;
	                cout<<"\t\t\t6.Acetaminophen              Rs.7 for each tablet"<<endl;
	            cout<<"\t\t\t7.Aspirin                    Rs.4 for each tablet"<<endl;
	            cout<<"\t\t\t8.Naproxen                   Rs.2 for each tablet"<<endl;
	            cout<<"\t\t\t9.Citrem Plus                Rs.5 for each tablet"<<endl;
	            cout<<"\t\t\t10.Paracip -500              Rs.8 for each tablet"<<endl;
	            cout<<"\t\t\t11.BACK                                           "	;
	            cout<<"\t\t\t12.DONE"<<endl;
	            cout<<"\n";
	            cout<<"\t\t\t================================================="<<endl;	
	            
	            cout<<"\t\t\tEnter choice::";
	            cin>>ch;
	            ofstream out("billing.txt", ios::app);
	            switch(ch)
	            {
	            	case 1:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	            	       
	                       price=2;
	                       
	                       total = price * qt;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       c++;
	                       st = "PARACITAMOL";
						   out<<c<<"           "<<st<<"              "<<qt<<"            "<<total<<endl;
						  // c++;
	                       fever();
	            	       break;
	            	case 2:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=5;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\t Total price:"<<tprice;
	                       c++;
	                       total = price * qt;
	                       st = "TYLENOL";
						   out<<c<<"            "<<st<<"              "<<qt<<"            "<<total<<endl;
	                       fever();
	            	       break;
	            	case 3:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=3;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       c++;
						   total = price * qt;
	                       st = "ASPIRIN";
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       fever();
	  
	            	       break;
	            	case 4:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=6;
	                       total = price * qt;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       c++;
	                        st = "MORTIN IB";
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       fever();
	
	            	       break;
	            	case 5:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=2;
	                       total = price * qt;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       c++;
	                       st = "ADVEIL";
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       fever();
	
	            	       break;
	            	case 6:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=7;
	                       total = price * qt;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       c++;
	                        st = "ACETAMINOPHEN";
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       fever();
	
	            	       break;
	            	case 7:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=4;
	                       total = price * qt;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       c++;
	                            st = "ASPIRIN";
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       fever();
	
	            	       break;
	            	case 8:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=2;
	                       total = price * qt;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       c++;
	                            st = "NAPROXEN";
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       fever();
	
	            	       break;
	            	case 9:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=5;
	                       total = price * qt;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       c++;
	                       st = "CITREM PLUS";
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       fever();
	
	            	       break;
	            	case 10:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=8;
	                       total = price * qt;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       c++;
	                            st = "PARACIP -500";
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       fever();
	
	            	       break;
	            	case 11:cout<<"BACK";
	            	case 12:
	            		out<<"   ========================================================================="<<endl;
	            		out<<"                                              TOTAL BILL:"<<tprice<<endl;
	            		tprice = 0;
	            		c=0;
	            		break;
	        
	}
}
 
void cold()
{
	            cout<<"\n\n";
	            cout<<"\t\t\t==============================================="<<endl;
	            cout<<"\t\t\t         COLD/COUGH MEDICINES LIST             "<<endl;
	            cout<<"\t\t\t==============================================="<<endl;
	            cout<<"\n";
	            cout<<"\t\t\t1.Codeine                    Rs.2 for each tablet"<<endl;
	            cout<<"\t\t\t2.Hydrocoden                 Rs.5 for each tablet"<<endl;
	            cout<<"\t\t\t3.Altarussin                 Rs.3 for each tablet"<<endl;
	            cout<<"\t\t\t4.Mucinex                    Rs.6 for each tablet"<<endl;
	            cout<<"\t\t\t5.Sinarest                   Rs.10 for each tablet"<<endl;
	            cout<<"\t\t\t6.Fenesin IR                 Rs.7 for each tablet"<<endl;
	            cout<<"\t\t\t7.Bidex-400                  Rs.4 for each tablet"<<endl;
	            cout<<"\t\t\t8.Guaifenex G                Rs.12 for each tablet"<<endl;
	            cout<<"\t\t\t9.Benylin E                  Rs.5 for each tablet"<<endl;
	            cout<<"\t\t\t10.Amibid LA                 Rs.8 for each tablet"<<endl;
				cout<<"\t\t\t11.BACK                                           "	;
				cout<<"\t\t\t12.DONE                                          "	;
	            cout<<"\n";
	            cout<<"\t\t\t================================================="<<endl;
	
	            cout<<"\t\t\tEnter choice::";
	            cin>>ch;
	            ofstream out("billing.txt", ios::app);
	            switch(ch)
	            {
	            	case 1:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                      price=2;
	                      tprice=tprice+(qt*price);
	                      cout<<"\t\t\tTotal price:"<<tprice;
	                      total = price * qt;
	                       st = "CODENINE";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                  
	                      cold();
	            	       break;
	            	case 2:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=5;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "HYDROCODEN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       cold();
	            	       break;
	            	case 3:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=3;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "ALTARUSSIN";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                      cold();
	  
	            	       break;
	            	case 4:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=6;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "MUCINEX";
	                       c++;
						 out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                     
	                       cold();
	
	            	       break;
	            	case 5:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=10;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "SINAREST";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       cold();
	            	       break;
	            	case 6:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=7;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "FENESIN IR";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       cold();
	            	       break;
	            	case 7:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=4;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "BIDEX -400";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       cold();
	            	       break;
	            	case 8:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=12;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "GUAIFENEX G";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                     
	                       cold();
	            	       break;
	            	case 9:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=5;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "BENYLIN E";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       cold();
	            	       break;
	            	case 10:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=8;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       c++;
						   st = "AMIBID LA";
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       cold();
	            	       break;
	            	       
	            	case 12:
	            		out<<"============================================================================"<<endl;
	            		out<<"                                              TOTAL :"<<tprice<<endl;
	            		tprice = 0;
	            		c = 0;
	            		break;
	            	   }
}

void headache()
{
	            cout<<"\n\n";
	            cout<<"\t\t\t==============================================="<<endl;
	            cout<<"\t\t\t            HEADACHE MEDICINES LIST            "<<endl;
	            cout<<"\t\t\t==============================================="<<endl;
	            cout<<"\n";
	            cout<<"\t\t\t1.Motrin IB                  Rs.12 for each tablet"<<endl;
	            cout<<"\t\t\t2.Advil                      Rs.5 for each tablet"<<endl;
	            cout<<"\t\t\t3.Paracetemol                Rs.3 for each tablet"<<endl;
	            cout<<"\t\t\t4.Sumatriptan                Rs.6 for each tablet"<<endl;
	            cout<<"\t\t\t5.Crocin                     Rs.2 for each tablet"<<endl;
	                cout<<"\t\t\t6.Saridon                    Rs.7 for each tablet"<<endl;
	            cout<<"\t\t\t7.Disprin                    Rs.4 for each tablet"<<endl;
	            cout<<"\t\t\t8.Dolo 650                   Rs.2 for each tablet"<<endl;
	            cout<<"\t\t\t9.Ventolin                   Rs.5 for each tablet"<<endl;
	            cout<<"\t\t\t10.Ibuprofen                 Rs.8 for each tablet"<<endl;
				cout<<"\t\t\t11.Back                                          "<<endl;
				cout<<"\t\t\t12.Done                                          "<<endl;	
	            cout<<"\n";
	            cout<<"\t\t\t================================================="<<endl;
	
	
	            cout<<"\t\t\tEnter choice::";
	            cin>>ch;
	            ofstream out("billing.txt", ios::app);
	            switch(ch)
	            {
	            	case 1:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=12;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "MOTRIN IB";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       headache();
	            	       break;
	            	case 2:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=5;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "ADVIL";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       headache();
	            	       break;
	            	case 3:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=3;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "PAERACITAMOL";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       headache(); 
	            	       break;
	            	case 4:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=6;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "SUMATRIPTAN";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       headache();
	            	       break;
	            	case 5:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=2;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "CROCIN";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       headache();
	            	       break;
	            	case 6:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=7;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "SARIDON";
	                       c++;;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                        headache();
	            	       break;
	            	case 7:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=4;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "DISPRIN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                     
	                       headache();
	
	            	       break;
	            	case 8:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=2;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "DOLO 650";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       headache();
	
	            	       break;
	            	case 9:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=5;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "VENTOLIN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       headache();
	
	            	       break;
	            	case 10:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=8;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "IBUPROFEN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                     
	                        headache();
	
	            	       break;
	            	       
	            	case 12:
	            		out<<"============================================================================"<<endl;
	            		out<<"                                              TOTAL :"<<tprice<<endl;
	            		tprice = 0;
	            		c=0;
	            		break;
	}
}
	            	            	 
void painkiller()
{
	           cout<<"\n\n";
	           cout<<"\t\t\t==============================================="<<endl;
	           cout<<"\t\t\t           PAINKILLERS MEDICINES LIST          "<<endl;
	           cout<<"\t\t\t==============================================="<<endl;
	           cout<<"\n";
	           cout<<"\t\t\t1.Aspirin                    Rs.15 per tablet"<<endl;
	           cout<<"\t\t\t2.Ibuprofen                  Rs.10 per tablet "<<endl;
	           cout<<"\t\t\t3.Naproxen                   Rs.12 per tablet"<<endl;
	           cout<<"\t\t\t4.Acetaminophen              Rs.8  per tablet"<<endl;
	           cout<<"\t\t\t5.Dolo 650                   Rs.17 per tablet"<<endl;
	               cout<<"\t\t\t6.Demerol                    Rs.7  per tablet"<<endl;
	           cout<<"\t\t\t7.Methadone                  Rs.4  per tablet "<<endl;
	           cout<<"\t\t\t8.Morphine                   Rs.65 per tablet"<<endl;
	           cout<<"\t\t\t9.Hydrocodone                Rs.95 per tablet"<<endl;
	           cout<<"\t\t\t10.Zerodol                   Rs.8  per tablet"<<endl;
	           cout<<"\t\t\t11.Back                                      "<<endl;
	           cout<<"\t\t\t12.Done                                      "<<endl;
	           
	           cout<<"\n";
	           cout<<"\t\t\t================================================="<<endl;	

                   
	            cout<<"\t\t\tEnter choice::";
	            cin>>ch;
	            ofstream out("billing.txt", ios::app);
	            switch(ch)
	            {
	            	case 1:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=15;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "ASPIRIN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       painkiller();
	            	       break;
	            	case 2:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=10;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "IBUPROFEN";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       painkiller();
	            	       break;
	            	case 3:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=12;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "NAPROXEN";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       painkiller();
	  
	            	       break;
	            	case 4:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=8;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "ACETAMINOPHEN";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       painkiller();
	
	            	       break;
	            	case 5:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=17;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "DOLO 650";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       painkiller();
	
	            	       break;
	            	case 6:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=7;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "DEMEROL";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       painkiller();
	
	            	       break;
	            	case 7:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=4;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "METHADONE";
	                       c++;
						  out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                     //  c++;
	                       painkiller();
	
	            	       break;
	            	case 8:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=65;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "MORPHINE";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       //c++;
	                       painkiller();
	
	            	       break;
	            	case 9:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=95;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "HRDROCODON";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                     
	                       painkiller();
	
	            	       break;
	            	case 10:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=8;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "ZERODOL";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       painkiller();
	
	            	       break;	                                                 	            	       
	            	case 12:
	            		out<<"============================================================================="<<endl;
	            		out<<"                                              TOTAL :"<<tprice<<endl;
	            		tprice = 0;
	            		c = 0;
	            		break;
	            	   }

}   

void antibiotic()
{
	       cout<<"\n\n";
	               cout<<"\t\t\t==============================================="<<endl;
	           cout<<"\t\t\t          ANTIBIOTICS MEDICINES LIST           "<<endl;
	           cout<<"\t\t\t==============================================="<<endl;
	           cout<<"\n";
	           cout<<"\t\t\t1.Amoxcillin                 Rs.2 for each tablet"<<endl;
	           cout<<"\t\t\t2.Doxycycline                Rs.5 for each tablet"<<endl;
	           cout<<"\t\t\t3.Cephalexin                 Rs.3 for each tablet"<<endl;
	           cout<<"\t\t\t4.Ciprofloxacin              Rs.6 for each tablet"<<endl;
	           cout<<"\t\t\t5.Clindamycin                Rs.2 for each tablet"<<endl;
	               cout<<"\t\t\t6.Metronidazole              Rs.7 for each tablet"<<endl;
	           cout<<"\t\t\t7.Azithromycin               Rs.4 for each tablet"<<endl;
	           cout<<"\t\t\t8.Penicillin                 Rs.2 for each tablet"<<endl;
	           cout<<"\t\t\t9.Oxacillin                  Rs.5 for each tablet"<<endl;
	           cout<<"\t\t\t10.Nafcillin                 Rs.8 for each tablet"<<endl;
			   cout<<"\t\t\t11.Back                                          "<<endl;
			   cout<<"\t\t\t12.Done                                          "<<endl;	
	           cout<<"\n";
	           cout<<"\t\t\t================================================="<<endl;
	           
	            cout<<"\t\t\tEnter choice::";
	            cin>>ch;
	            ofstream out("billing.txt", ios::app);
	            switch(ch)
	            {
	            	case 1:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=2;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "AMOXCILLIN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       antibiotic();
	            	       break;
	            	case 2:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=5;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "DOXYCYCLINE";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                     
	                       antibiotic();
	            	       break;
	            	case 3:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=3;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "CEFHALEXIN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                     
	                       antibiotic();
	  
	            	       break;
	            	case 4:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=6;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "CIPROFLOXACIN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       antibiotic();
	
	            	       break;
	            	case 5:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=2;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "CLINDAMYCIN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       antibiotic();
	
	            	       break;
	            	case 6:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=7;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "METRONIDAZOLE";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       antibiotic();
	
	            	       break;
	            	case 7:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=4;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "AZITHROMYCIN";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      // c++;
	                       antibiotic();
	
	            	       break;
	            	case 8:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=2;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "PENICILLIN";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       antibiotic();
	
	            	       break;
	            	case 9:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=5;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "OXACILLIN";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       antibiotic();
	
	            	       break;
	            	case 10:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=8;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "NAFCILLIN";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       antibiotic();
	
	            	       break;
	                                                  
	            	case 12:
	            		out<<"============================================================================="<<endl;
	            		out<<"                                              TOTAL :"<<tprice<<endl;
	            		tprice = 0;
	            		c = 0;
	            		break;
	            	   }
}

void beauty()
{
	           cout<<"\n\n";
	           cout<<"\t\t\t==============================================="<<endl;
	           cout<<"\t\t\t            BEAUTY PRODUCTS LIST                "<<endl;
	           	   cout<<"\t\t\t==============================================="<<endl;
	           cout<<"\n";
	           cout<<"\t\t\t1.MOISTURISER                Rs.150 for 100ML"<<endl;
	           cout<<"\t\t\t2.ALOVERA GEL                Rs.100 for 50ML "<<endl;
	           cout<<"\t\t\t3.FACE SERUM                 Rs.120 for 250ML"<<endl;
	           cout<<"\t\t\t4.BODY LOTION                Rs.80  for 100ML"<<endl;
	           cout<<"\t\t\t5.FACE CLEANSER              Rs.170 for 250ML"<<endl;
	               cout<<"\t\t\t6.SUNSCREAM                  Rs.70  for 100ML"<<endl;
	           cout<<"\t\t\t7.VASELINE                   Rs.40  for 50ML "<<endl;
	           cout<<"\t\t\t8.FACE WASH                  Rs.65  for 100ML"<<endl;
	           cout<<"\t\t\t9.HAIR SERUM                 Rs.95  for 150ML"<<endl;
	           cout<<"\t\t\t10.NIGHT CREAM               Rs.80  for 100ML"<<endl;
	           cout<<"\t\t\t11.Back                                      "<<endl;
	           cout<<"\t\t\t12.Done                                          "<<endl;
	           cout<<"\n";
	           cout<<"\t\t\t================================================="<<endl;
	           
	           
	            cout<<"\t\t\tEnter choice::";
	            cin>>ch;
	            ofstream out("billing.txt", ios::app);
	            switch(ch)
	            {
	            	case 1:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=150;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "MOISTURISER";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                    
	                       beauty();
	            	       break;
	            	case 2:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=100;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "ALOVERA GEL";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                   
	                       beauty();
	            	       break;
	            	case 3:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=120;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "FACE SERUM";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       beauty();
	  
	            	       break;
	            	case 4:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=80;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "BODY LOTION";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       beauty();
	
	            	       break;
	            	case 5:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=170;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "FACE CLEANCER";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       beauty();
	
	            	       break;
	            	case 6:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=70;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "SUNCREAM";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       beauty();
	
	            	       break;
	            	case 7:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=40;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "VASELINE";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                    
	                       beauty();
	
	            	       break;
	            	case 8:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=65;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "FACE WASH";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl; out<<c<<"            "<<st<<"              "<<qt<<"            "<<total<<endl;
	                     
	                       beauty();
	
	            	       break;
	            	case 9:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=95;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "HAIR SERUM";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                  
	                        beauty();
	
	            	       break;
	            	case 10:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=80;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "NIGHT CREAM";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       beauty();
	
	            	       break;
	            	cout<<"\t\t\t11.BACK                                           "	;
	            	case 12:
	            		out<<"==========================================================================="<<endl;
	            		out<<"                                              TOTAL :"<<tprice<<endl;
	            		tprice = 0;
	            		c = 0;
	            		break;
	            	   }
}

void other()
{
	 cout<<"\n\n";
	         cout<<"\t\t\t==============================================="<<endl;
	         cout<<"\t\t\t           OTHER MEDICINES LIST                "<<endl;
	          	 cout<<"\t\t\t==============================================="<<endl;
	         cout<<"\n";
	         cout<<"\t\t\t1.Savlon                     Rs.75 for 100ml   "<<endl;
	         cout<<"\t\t\t2.Dettol                     Rs.100 for 100ml  "<<endl;
	         cout<<"\t\t\t3.Inhaler                    Rs.50 each tube   "<<endl;
	         cout<<"\t\t\t4.Sanitiser                  Rs.60 for 150ml   "<<endl;
	         cout<<"\t\t\t5.Bandage                    Rs.2 for each     "<<endl;
	             cout<<"\t\t\t6.Medicated cotton           Rs.45 per pack    "<<endl;
	         cout<<"\t\t\t7.Cipladine Cream            Rs.120 for 120ml  "<<endl;
	         cout<<"\t\t\t8.MOOV Spray                 Rs.80 for 200ml   "<<endl;
	         cout<<"\t\t\t9.Handwash                   Rs.50 for 100ml   "<<endl;
	         cout<<"\t\t\t10.Vicks                     Rs.80 per 50ml    "<<endl;
			 cout<<"\t\t\t11.Back                                        "<<endl;
			 cout<<"\t\t\t12.Done                                          "<<endl;	
	         cout<<"\n";
	         cout<<"\t\t\t================================================="<<endl;
	         
	         
	            cout<<"\t\t\tEnter choice::";
	            cin>>ch;
	            ofstream out("billing.txt", ios::app);
	            switch(ch)
	            {
	            	case 1:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=75;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "SAVLON";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       other();
	            	       break;
	            	case 2:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=100;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "DETTOL";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                    
	                       other();
	            	       break;
	            	case 3:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=50;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "INHALER";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       other();
	  
	            	       break;
	            	case 4:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=60;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "SANITISER";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       other();
	
	            	       break;
	            	case 5:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=2;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "BANDAGE";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       other();
	
	            	       break;
	            	case 6:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=45;
	                      tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "MEDICATED COTTON";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                       
	                       other();
	
	            	       break;
	            	case 7:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=120;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "CIPLADINE CREAM";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                      
	                       other();
	
	            	       break;
	            	case 8:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=80;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "MOOV SPRAY";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                    
	                       other();
	
	            	       break;
	            	case 9:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=50;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "HANDWASH";
	                       c++;
						    out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                    
	                       other();
	
	            	       break;
	            	case 10:cout<<"\t\t\tEnter Qty:";
	            	       cin>>qt;
	                       price=80;
	                       tprice=tprice+(qt*price);
	                       cout<<"\t\t\tTotal price:"<<tprice;
	                       total = price * qt;
	                       st = "VICKS";
	                       c++;
						   out<<c<<"            "<<st<<"\t\t"<<qt<<"\t\t"<<total<<endl;
	                    
	                       other();
	
	            	       break;
	            	case 12:
	            		out<<"============================================================================"<<endl;
	            		out<<"                                              TOTAL :"<<tprice<<endl;
	            		tprice = 0;
	            		c = 0;
	            		break;
	            	   }
}

class Customer
{
	public:
	

	void getdetails()
	{
	
	cout<<"\n\n           Enter Customer Name:\t";
	cin>>n;
	ofstream out("billing.txt", ios::app);
	out<<"                       $ RIT MEDICAL $        "<<endl;
	out<<"\nAdd : ISLAMPUR                       Contact: 7559300805"<<endl;
	out<<"----------------------------------------------------------------------------"<<endl;
	out<<"Customer Name:"<<n<<endl;
	cout<<"           Enter Customer Address:\t";
	cin>>address;
	out<<"Customer Address:"<<address<<endl;
	cout<<"           Enter Customer Contact Number:\t";
	cin>>no;
	out<<"Customer Contact:"<<no<<endl;
	cout<<"           Enter Customer Email Id:\t";
	cin>>email;
	out<<"Customer Address:"<<email<<endl;
	out<<"==============================BILL==========================================" <<endl;
		out<<"SR.NO\t\t NAME OF MEDICINE\t\tQUANTITY\t\tTOTAL PRICE" <<endl;
		
		
		cout<<"                                            TOTAL BILL"<<tprice;
		c = 0;
	}
	
	
};

class bill:public Customer
{
	public:
   void show()
   {
       ofstream out("billing.txt", ios::out);
  }
	
};

class List:public Customer
{
	public:
	friend void display(); 
	  
     void menu()
     {
     	
	    label:	
	int c;
	while(c!=8)
	{	
	cout<<"\n\n";
	cout<<"\t\t\t==============================================="<<endl;
	cout<<"\t\t\t           MEDICINES CATEGORIES              "<<endl;
	cout<<"\t\t\t==============================================="<<endl;
	cout<<"\n";
	cout<<"\t\t\t             1.FEVER                           "<<endl;
	cout<<"\t\t\t             2.COLD/COUGH                      "<<endl;
	cout<<"\t\t\t             3.HEADACHE                        "<<endl;
	cout<<"\t\t\t             4.PAIN KILLERS                     "<<endl;
	cout<<"\t\t\t             5.ANTIBIOTICS                     "<<endl;
	cout<<"\t\t\t             6.BEAUTY PRODUCTS                 "<<endl;
	cout<<"\t\t\t             7.OTHERS                          "<<endl;
	cout<<"\t\t\t             8.BACK MAIN MENU                  "<<endl;
	cout<<"\n";
	cout<<"\t\t\t================================================"<<endl;
	
	    cout<<"\n                           Enter your choice:\t\t";
	    cin>>c;
	    
	switch(c)
	{
	case 1: fever();
	            break;
	    case 2: cold();
	        break;
	        case 3: headache();
	        break;
	        case 4: painkiller();
	        break;
	case 5: antibiotic();
	    break;
	case 6: beauty();
	    break;
	case 7:	other();
	            break; 
	case 8 :goto label;	
	    }	
      }
    }
};

void display()
{
	 cout<<"\n\n"<<endl;
	 cout<<"                     \t==============================================="<<endl;
	 cout<<"                      \t      MEDICAL STORE MANAGEMENT SYSTEM           "<<endl;
	 cout<<"                     \t==============================================="<<endl;
	 cout<<"\n\n"<<endl;
	 cout<<"                           1.CUSTOMER DETAILS\n"<<endl;
	 cout<<"                           2.SHOW LIST AND GIVE ORDER\n"<<endl;
	 cout<<"                           3.EXIT\n"<<endl;
	 
	  cout<<"                     \t==============================================="<<endl;
}

int main()
{
    Customer c1;
	bill b1;
	List l1;

    int ch;
    label:
    display();
    cout<<"\n                           Enter your choice: \t   ";
	cin>>ch;
	
	switch(ch)
	{
	case 2:l1.menu();
	    goto label;
	       break;
	case 1:
		ofstream out("billing.txt", ios::out);
		c1.getdetails();
	       break;
	}
	goto label;
	return 0;
   }

