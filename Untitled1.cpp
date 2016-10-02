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
	cout <<"Enter your Choice: ";
	cin>>q;

	switch(q){
	case 1:{
		char w,e;
		ifstream mnlTObcd("mnlTObcd.txt");
		string to;
		string from;
		string name1;
		int name2;
		string freq;
		int departure;
		int arrival;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTObcd >>to>>from>>name1 >> name2 >>freq >> departure >> arrival){
			cout<<to<<setw(10)<<from<<setw(9)<<name1 <<name2 <<setw(13)<< freq <<setw(13)<<departure<<setw(14)<<arrival<<endl;
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
		case 2:
			{char w1,e1;
		ifstream mnlTOtag("mnlTOtag.txt");
		string to1;
		string from1;
		string name11;
		int name21;
		string freq1;
		int departure1;
		int arrival1;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOtag >>to1>>from1>>name11 >> name21 >>freq1 >> departure1 >> arrival1){
			cout<<to1<<setw(10)<<from1<<setw(9)<<name11 <<name21 <<setw(13)<< freq1 <<setw(13)<<departure1<<setw(14)<<arrival1<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w1;
		
		if((w1=='y')||(w1=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e1;
			if((e1=='y')||(e1=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}
	case 3:	{char w2,e2;
		ifstream mnlTObxu("mnlTObxu.txt");
		string to2;
		string from2;
		string name12;
		int name22;
		string freq2;
		int departure2;
		int arrival2;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTObxu >>to2>>from2>>name12 >> name22 >>freq2 >> departure2 >> arrival2){
			cout<<to2<<setw(10)<<from2<<setw(9)<<name12 <<name22 <<setw(13)<< freq2 <<setw(13)<<departure2<<setw(14)<<arrival2<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w2;
		
		if((w2=='y')||(w2=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e2;
			if((e2=='y')||(e2=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}
		case 4:
			{char w3,e3;
		ifstream mnlTOcgy("mnlTOcgy.txt");
		string to3;
		string from3;
		string name13;
		int name23;
		string freq3;
		int departure3;
		int arrival3;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOcgy >>to3>>from3>>name13 >> name23 >>freq3 >> departure3 >> arrival3){
			cout<<to3<<setw(10)<<from3<<setw(9)<<name13 <<name23 <<setw(13)<< freq3 <<setw(13)<<departure3<<setw(14)<<arrival3<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w3;
		
		if((w3=='y')||(w3=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e3;
			if((e3=='y')||(e3=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
	case 5:
		{char w4,e4;
		ifstream mnlTOtug("mnlTOtug.txt");
		string to4;
		string from4;
		string name14;
		int name24;
		string freq4;
		int departure4;
		int arrival4;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOtug >>to4>>from4>>name14 >> name24 >>freq4 >> departure4 >> arrival4){
			cout<<to4<<setw(10)<<from4<<setw(9)<<name14 <<name24 <<setw(13)<< freq4<<setw(13)<<departure4<<setw(14)<<arrival4<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w4;
		
		if((w4=='y')||(w4=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e4;
			if((e4=='y')||(e4=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
	case 6:
		{char w5,e5;
		ifstream mnlTOceb("mnlTOceb.txt");
		string to5;
		string from5;
		string name15;
		int name25;
		string freq5;
		int departure5;
		int arrival5;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOceb >>to5>>from5>>name15 >> name25 >>freq5 >> departure5 >> arrival5){
			cout<<to5<<setw(10)<<from5<<setw(9)<<name15 <<name25 <<setw(13)<< freq5<<setw(13)<<departure5<<setw(14)<<arrival5<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w5;
		
		if((w5=='y')||(w5=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e5;
			if((e5=='y')||(e5=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
	case 7:
		{char w6,e6;
		ifstream mnlTOcbo("mnlTOcbo.txt");
		string to6;
		string from6;
		string name16;
		int name26;
		string freq6;
		int departure6;
		int arrival6;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOcbo >>to6>>from6>>name16 >> name26 >>freq6 >> departure6>> arrival6){
			cout<<to6<<setw(10)<<from6<<setw(9)<<name16 <<name26 <<setw(13)<< freq6<<setw(13)<<departure6<<setw(14)<<arrival6<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w6;
		
		if((w6=='y')||(w6=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e6;
			if((e6=='y')||(e6=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}
	case 8:
	{char w7,e7;
		ifstream mnlTOdvo("mnlTOdvo.txt");
		string to7;
		string from7;
		string name17;
		int name27;
		string freq7;
		int departure7;
		int arrival7;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOdvo >>to7>>from7>>name17 >> name27 >>freq7 >> departure7 >> arrival7){
			cout<<to7<<setw(10)<<from7<<setw(9)<<name17 <<name27 <<setw(13)<< freq7<<setw(13)<<departure7<<setw(14)<<arrival7<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w7;
		
		if((w7=='y')||(w7=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e7;
			if((e7=='y')||(e7=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}		
	case 9:
		{char w8,e8;
		ifstream mnlTOdpl("mnlTOdpl.txt");
		string to8;
		string from8;
		string name18;
		int name28;
		string freq8;
		int departure8;
		int arrival8;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOdpl >>to8>>from8>>name18 >> name28 >>freq8 >> departure8 >> arrival8){
			cout<<to8<<setw(10)<<from8<<setw(9)<<name18 <<name28 <<setw(13)<< freq8<<setw(13)<<departure8<<setw(14)<<arrival8<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w8;
		
		if((w8=='y')||(w8=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e8;
			if((e8=='y')||(e8=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
	case 10:
			{char w9,e9;
		ifstream mnlTOdgt("mnlTOdgt.txt");
		string to9;
		string from9;
		string name19;
		int name29;
		string freq9;
		int departure9;
		int arrival9;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOdgt >>to9>>from9>>name19 >> name29>>freq9 >> departure9 >> arrival9){
			cout<<to9<<setw(10)<<from9<<setw(9)<<name19 <<name29 <<setw(13)<< freq9<<setw(13)<<departure9<<setw(14)<<arrival9<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w9;
		
		if((w9=='y')||(w9=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e9;
			if((e9=='y')||(e9=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		
		case 11:
				{char w10,e10;
		ifstream mnlTOges("mnlTOges.txt");
		string to10;
		string from10;
		string name110;
		int name210;
		string freq10;
		int departure10;
		int arrival10;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOges >>to10>>from10>>name110 >> name210 >>freq10 >> departure10 >> arrival10){
			cout<<to10<<setw(10)<<from10<<setw(9)<<name110 <<name210 <<setw(13)<< freq10<<setw(13)<<departure10<<setw(14)<<arrival10<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w10;
		
		if((w10=='y')||(w10=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e10;
			if((e10=='y')||(e10=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		
		case 12:
				{char w11,e11;
		ifstream mnlTOilo("mnlTOilo.txt");
		string to11;
		string from11;
		string name111;
		int name211;
		string freq11;
		int departure11;
		int arrival11;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOilo >>to11>>from11>>name111 >> name211 >>freq11 >> departure11>> arrival11){
			cout<<to11<<setw(10)<<from11<<setw(9)<<name111 <<name211 <<setw(13)<< freq11<<setw(13)<<departure11<<setw(14)<<arrival11<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w11;
		
		if((w11=='y')||(w11=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e11;
			if((e11=='y')||(e11=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		
		case 13:
				{char w12,e12;
		ifstream mnlTOklo("mnlTOklo.txt");
		string to12;
		string from12;
		string name112;
		int name212;
		string freq12;
		int departure12;
		int arrival12;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOklo >>to12>>from12>>name112 >> name212 >>freq12 >> departure12 >> arrival12){
			cout<<to12<<setw(10)<<from12<<setw(9)<<name112 <<name212 <<setw(13)<< freq12<<setw(13)<<departure12<<setw(14)<<arrival12<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w12;
		
		if((w12=='y')||(w12=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e12;
			if((e12=='y')||(e12=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		
		case 14:
				{char w13,e13;
		ifstream mnlTOlgp("mnlTOlgp.txt");
		string to13;
		string from13;
		string name113;
		int name213;
		string freq13;
		int departure13;
		int arrival13;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOlgp >>to13>>from13>>name113 >> name213 >>freq13 >> departure13 >> arrival13){
			cout<<to13<<setw(10)<<from13<<setw(9)<<name113 <<name213 <<setw(13)<< freq13<<setw(13)<<departure13<<setw(14)<<arrival13<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w13;
		
		if((w13=='y')||(w13=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e13;
			if((e13=='y')||(e13=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		
		case 15:
		{char w14,e14;
		ifstream mnlTOozc("mnlTOozc.txt");
		string to14;
		string from14;
		string name114;
		int name214;
		string freq14;
		int departure14;
		int arrival14;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOozc>>to14>>from14>>name114 >> name214 >>freq14 >> departure14 >> arrival14){
			cout<<to14<<setw(10)<<from14<<setw(9)<<name114 <<name214 <<setw(13)<< freq14<<setw(13)<<departure14<<setw(14)<<arrival14<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w14;
		
		if((w14=='y')||(w14=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e14;
			if((e14=='y')||(e14=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		
		case 16:
			{char w15,e15;
		ifstream mnlTOpag("mnlTOpag.txt");
		string to15;
		string from15;
		string name115;
		int name215;
		string freq15;
		int departure15;
		int arrival15;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOpag>>to15>>from15>>name115 >> name215 >>freq15 >> departure15 >> arrival15){
			cout<<to15<<setw(10)<<from15<<setw(9)<<name115 <<name215 <<setw(13)<< freq15<<setw(13)<<departure15<<setw(14)<<arrival15<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w15;
		
		if((w15=='y')||(w15=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e15;
			if((e15=='y')||(e15=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		
	case 17:
		{char w16,e16;
		ifstream mnlTOpps("mnlTOpps.txt");
		string to16;
		string from16;
		string name116;
		int name216;
		string freq16;
		int departure16;
		int arrival16;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOpps>>to16>>from16>>name116 >> name216 >>freq16 >> departure16 >> arrival16){
			cout<<to16<<setw(10)<<from16<<setw(9)<<name116 <<name216 <<setw(13)<< freq16<<setw(13)<<departure16<<setw(14)<<arrival16<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w16;
		
		if((w16=='y')||(w16=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e16;
			if((e16=='y')||(e16=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		
		case 18:
			{char w17,e17;
		ifstream mnlTOrxs("mnlTOrxs.txt");
		string to17;
		string from17;
		string name117;
		int name217;
		string freq17;
		int departure17;
		int arrival17;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOrxs>>to17>>from17>>name117 >> name217 >>freq17 >> departure17 >> arrival17){
			cout<<to17<<setw(10)<<from17<<setw(9)<<name117 <<name217 <<setw(13)<< freq17<<setw(13)<<departure17<<setw(14)<<arrival17<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w17;
		
		if((w17=='y')||(w17=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e17;
			if((e17=='y')||(e17=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		
		case 19:
			{char w18,e18;
		ifstream mnlTOsji("mnlTOsji.txt");
		string to18;
		string from18;
		string name118;
		int name218;
		string freq18;
		int departure18;
		int arrival18;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOsji>>to18>>from18>>name118 >> name218 >>freq18 >> departure18 >> arrival18){
			cout<<to18<<setw(10)<<from18<<setw(9)<<name118 <<name218 <<setw(13)<< freq18<<setw(13)<<departure18<<setw(14)<<arrival18<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w18;
		
		if((w18=='y')||(w18=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e18;
			if((e18=='y')||(e18=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}
	case 20:
			{char w19,e19;
		ifstream mnlTOsji("mnlTOsji.txt");
		string to19;
		string from19;
		string name119;
		int name219;
		string freq19;
		int departure19;
		int arrival19;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOsji>>to19>>from19>>name119 >> name219 >>freq19 >> departure19 >> arrival19){
			cout<<to19<<setw(10)<<from19<<setw(9)<<name119 <<name219 <<setw(13)<< freq19<<setw(13)<<departure19<<setw(14)<<arrival19<<endl;
		}
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w19;
		
		if((w19=='y')||(w19=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e19;
			if((e19=='y')||(e19=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
		
			
		}
		}
}
		
		{
			case 2:
				//Book reservation part
	

	
	

} 
bye:
return 0;
}
}

