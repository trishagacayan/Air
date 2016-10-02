#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<stdio.h>
using namespace std;

void equal(char Equal, int n){//for design
	for(int i=0;i<n;i++){
		cout << Equal;
	}
}
struct customer{
	
	
	
};

main(){
	int x;
bback:	equal('=',50);//call for the equal
	cout <<endl;
	cout<<"            BOOK YOUR FLIGHT WITH US" <<endl;//so lame you can change it guys haha
	equal('=',50);
	cout <<"\nPlease pick an option from the menu below:"<<endl;
	cout <<"1. Check the Flight Schedule"<<endl;
	cout <<"2. Book Reservation"<<endl;
	cin>>x;
	switch(x){
		case 1:{
				int q;
	
back:cout<<"\nChoose your Flight:"<<endl;
	cout<<"1. Manila to Bacolod"<<endl;
	cout<<"2. Manila to Bohol(Tagbilaran)"<<endl;
	cout<<"3. Manila to Butuan"<<endl;
	cout<<"4. Manila to Cagayan De Oro"<<endl;
	cout<<"5. Manila to Cauayan"<<endl;
	cout<<"6. Manila to Cebu"<<endl;
	cout<<"7. Manila to Cotabato"<<endl;
	cout<<"8. Manila to Davao"<<endl;
	cout<<"9. Manila to Dipolog"<<endl;
	cout<<"10. Manila to Dumaguete"<<endl;
	cout<<"11. Manila to General Santos"<<endl;
	cout<<"12. Manila to Iloilo"<<endl;
	cout<<"13. Manila to Kalibo"<<endl;
	cout<<"14. Manila to Legaspi"<<endl;
	cout<<"15. Manila to Ozamis"<<endl;
	cout<<"16. Manila to Pagadian"<<endl;
	cout<<"17. Manila to Puerto Princesa"<<endl;
	cout<<"18. Manila to Roxas"<<endl;
	cout<<"19. Manila to San Jose(Mindoro)"<<endl;
	cout<<"20. Manila to Tuguegarao"<<endl;
	cout<<"21. Manila to Virac"<<endl;
	cout<<"22. Manila to Zamboanga"<<endl;
	cout <<"Enter your Choice: ";
	cin>>q;

	switch(q){
	case 1:{
		char w;
		char e;
		ifstream mnlTObcd("mnlTObcd.txt");
		string name1;
		int name2;
		string freq;
		int departure;
		int arrival;
		cout<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTObcd >>name1 >> name2 >>freq >> departure >> arrival){
			cout<<name1 <<name2 <<setw(13)<< freq <<setw(13)<<departure<<setw(14)<<arrival<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w;
		
		if((w=='y')||(w=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e;
			if((e=='y')||(e=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}
		}
		//break;
		}


	
	

} 
bye:
return 0;
}

