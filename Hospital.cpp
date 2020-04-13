//Hospital Management System 
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>
#include<string.h>
using namespace std;
int pid=1000;
class stfmanage
{	
	public:
    void getinfo()
    {
	cout<<" ID OF STAFF MEMBER "<<endl;
	cout<<"ID STARTS SHOULD BE NUMERIC-(0-9)"<<endl;
	int id;
	cin>>id;
	switch (id)
	{
		case 1:
		{
			cout<<"NAME - Adarsh Azad"<<endl;
			cout<<"SEX - MALE"<<endl;
			cout<<"DERMALOGIST"<<endl;
			cout<<"AGE - 44 YEARS"<<endl;
			break;
					
		}
		case 2:
		{
			cout<<"NAME - DR. Saumya"<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"GYNOLOGIST"<<endl;
			cout<<"AGE - 42 YEARS"<<endl;
			break;
					
		}
		case 3:
		{
			cout<<"NAME - DR. Amisha Pandey"<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"CARDIOLOGIST"<<endl;
			cout<<"AGE - 24"<<endl;
			break;
					
		}
		case 4:
		{
			cout<<"NAME - DR. Ayush Maurya"<<endl;
			cout<<"SEX - MALE"<<endl;
			cout<<"SURGEON"<<endl;
			cout<<"AGE - 40"<<endl;
			break;
					
		}
		case 5:
		{
			cout<<"NAME - DR. NIKHIL GUPTA "<<endl;
			cout<<"SEX - MALE"<<endl;
			cout<<"NEUROLOGIST"<<endl;
			cout<<"AGE - 55"<<endl;
			break;
					
		}
		case 6:
		{
			cout<<"NAME - DHRUV SINGH"<<endl;
			cout<<"SEX -MALE"<<endl;
			cout<<"COMPOUNDER"<<endl;
			cout<<"AGE - 35"<<endl;
			break;
					
		}
		case 7:
		{
			cout<<"NAME - ANITA  HANSANDANI "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NURSE"<<endl;
			cout<<"AGE - 30"<<endl;
					
		}
		case 8:
		{
			cout<<"NAME - SHRUTI SHUKLA "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NURSE"<<endl;
			cout<<"AGE - 58"<<endl;
			break;
					
		}
		case 9:
		{
			cout<<"NAME - DIVYA RATHORE "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NURSE"<<endl;
			cout<<"AGE - 26"<<endl;
			break;
			
					
		}
		case 10:
		{
			cout<<"NAME - KIRAN "<<endl;
			cout<<"SEX - FEMALE"<<endl;
			cout<<"NURSE"<<endl;
			cout<<"AGE - 35"<<endl;
			break;
					
		}
		default:
		cout<<"IT IS THE END";
		break;
		
}}};
struct app
                            {
                                char symptom[500];
                                char diagnosis[500];
                                char medicine[500];
                                char addmission[30];
                                string ward;
                                int s;
                                char specialist[50];
                            };
           app add;
 struct patient_info
                        {
                            char name[20];
                            char address[100];
                            char contact[10];
                            char age[5];
                            char sex[8];
                            char blood_gp[5];
                            char disease_past[50];
                            int id;
                        };

            patient_info ak;
int cost=0;
int main()
//NOTE: RUN THE PROGRAM IN FULL SCREEN ONLY
{
char fname[20];
time_t rawtime;
struct tm * timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );

//printing the welcome note
re:
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
cout<<"\t\t\t\t\t|| _______________________________________________________________________________________ ||||||\n";
cout<<"\t\t\t\t\t|||                                           		                                  ||||||\n";
cout<<"\t\t\t\t\t|||                                           		                                  |||||\n";
cout<<"\t\t\t\t\t|||                                           		                                  |||||\n";
cout<<"\t\t\t\t\t|||                                           		                                  ||||||\n";
cout<<"\t\t\t\t\t|||                                           		                                  |||||\n";
cout<<"\t\t\t\t\t|||                                           		                                  ||||||\n";
cout<<"\t\t\t\t\t|||                                  WELCOME TO                                           |||||\n";
cout<<"\t\t\t\t\t|||                                                                                       |||||\n";
cout<<"\t\t\t\t\t|||                           PGI HOSPITAL                                             |||||\n";
cout<<"\t\t\t\t\t|||                                                                                       |||||\n";
cout<<"\t\t\t\t\t|||                                                                                       |||||\n";
cout<<"\t\t\t\t\t|||                                                                                       |||||\n";
cout<<"\t\t\t\t\t|||                                                                                       |||||\n";
cout<<"\t\t\t\t\t|||                                                                                       ||||||\n";
cout<<"\t\t\t\t\t|||                                                                                       |||||\n";
cout<<"\t\t\t\t\t||_______________________________________________________________________________________|||||\n";
cout<<"\t\t\t\t\t||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n\t\t\t\t\t";
system("pause");
system("cls");



int i;
int login();
login();
void doctor(); 
void bill();
stfmanage ob;
//giving option to the user for their choice
b:
cout<<"\n\n\n\n\n\n\n PGI HOSPITAL \n\n";	
cout<<"\n\n\t\t\tChoose from the following Options: \n\n";
cout<<"|_____________________________________________________|\n";
cout<<"|                                           	                 |\n";
cout<<"|             1  >>  New Patient Record                           |\n";
cout<<"|             2  >>  Diagnosis Information                        |\n";
cout<<"|             3  >> Patient's History                             |\n";
cout<<"|             4  >> Information About the Hospital                |\n";
cout<<"|             5  >> Doctor's appointment                          |\n";
cout<<"|             6  >> Staff information                             |\n";
cout<<"|             7  >> Room information                              |\n";
cout<<"|             8  >> Exit                                          |\n";
cout<<"|_________________________________________________________________|\n\n";
a:cout<<"\t\t\t\t\t\tEnter your choice: ";cin>>i;
if(i>8||i<1){cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";cout<<"\t\t\t\t\t\tTry again...........\n\n";goto a;} //if inputed choice is other than given choice



system("cls");

//displaying the information about the hospital........option 4
if(i==4)
{
	ifstream file;
	file.open("Awarding.txt");
		if(!file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the Hospital.............................\n\n";
		    string line;
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
			goto b;
		}
}
if(i==7)
{
	ifstream file;
	file.open("About_our.txt");
		if(!file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the rooms.............................\n\n";
		    string line;
			while(file.good())
			{
			getline(file,line);
			cout<<line<<"\n\t\t";
			}
			cout<<"\n\n\t\t";
			system("pause");
            system("cls");
			goto b;
		}
}

//Adding the record of the new patient..................option 3
if(i==1)
{
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
  ofstream pat_file;
  char fname[20];
  cout<<"\n\n\n\n Patient's file name : ";
  cin.ignore();
  gets(fname);
  pat_file.open(fname);
  		if(!fname)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
                        
            cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";//fn1353 st
            	ak.id=pid++;
            cout<<"\nPatient ID : "<<ak.id;pat_file<<"Patient ID : ";pat_file<<ak.id<<"\n";
			cout<<"\nName : ";pat_file<<"Name : ";gets(ak.name);pat_file<<ak.name<<"\n";
            cout<<"\nAddress : ";pat_file<<"Address : ";gets(ak.address);pat_file<<ak.address<<"\n";
            cout<<"\nContact Number : ";pat_file<<"Contact Number : ";gets(ak.contact);pat_file<<ak.contact<<"\n";
            cout<<"\nAge : ";pat_file<<"Age : ";gets(ak.age);pat_file<<ak.age<<"\n";
            cout<<"\nSex : ";pat_file<<"Sex : ";gets(ak.sex);pat_file<<ak.sex<<"\n";
            cout<<"\nBlood Group : ";pat_file<<"Blood Group : ";gets(ak.blood_gp);pat_file<<ak.blood_gp<<"\n";
            cout<<"\nAny Major disease suffered earlier : ";pat_file<<"Any Major disease suffered earlier : ";gets(ak.disease_past);pat_file<<ak.disease_past<<"\n";
			cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";
            cout<<"\nInformation Saved Successfully\n";
            }

  system("pause");
  system("cls");
  goto b;

}

//Appending diagnosis information of patient datewise.................option 2
if(i==2)
{
    fstream pat_file;
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<fname<<" ........................................\n\n\n\n";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
			pat_file.close();
			pat_file.open(fname, ios::out | ios::app);
            cout<<"\n";
			cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<"\n";
                            
                            

            int s;
            cout<<"\nSymptoms : "; pat_file<<"Symptoms : ";gets(add.symptom); pat_file<<add.symptom<<"\n";
            cout<<"\nDiagnosis : "; pat_file<<"Diagnosis : ";gets(add.diagnosis); pat_file<<add.diagnosis<<"\n";
            cout<<"\nMedicines : "; pat_file<<"Medicines : ";gets(add.medicine); pat_file<<add.medicine<<"\n";
            cout<<"\nSpecialist : ";pat_file<<"Specialist : ";gets(add.specialist);pat_file<<add.specialist<<"\n";
			cout<<"\nAddmission Required? : "; pat_file<<"Addmission Required? : ";gets(add.addmission); pat_file<<add.addmission<<"\n";
            cout<<"\nType of ward :\n 1.General:\n 2.Private\n ENTER YOUR CHOICE\n"; 
          	cin>>s;
		    switch(s)
            {
            	case 1:
            	cout<<"General Ward";
            	add.ward="General";
            	pat_file<<"Type of ward"; pat_file<<add.ward<<"\n";pat_file<<"\n*************************************************************************\n";
            	break;
            	case 2:
            	cout<<"Private ward";
            	add.ward="Private";
            	pat_file<<"Type of ward"; pat_file<<add.ward<<"\n";pat_file<<"\n*************************************************************************\n";
            	break;
            	default :
            	cout<<"Sorry";
            	break;
            }
            cout<<"\n\n"<<add.ward<<" ward is alloted Successfully\n";
            cout<<"\nTotal billing cost : ";bill();pat_file<<"Total billing cost : ";pat_file<<cost<<"\n";
			pat_file.close();
			cout<<"\n\n";
			system("pause");
            system("cls");
			goto b;
		}
	
}

//For displaying the full medical history of patient in that hospital............option 3
if(i==3)
{
    fstream pat_file;
    cout<<"\n\nEnter the patient's file name to be opened : ";
    cin.ignore();
    gets(fname);
    system("cls");
	pat_file.open(fname, ios::in);
		if(!pat_file)
		{
		cout<<"\nError while opening the file\n";goto b;
		}
		else
		{
		    cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<fname<<" ........................................\n\n\n\n";
		    string info;
			while(pat_file.good())
			{
			getline(pat_file,info);
			cout<<info<<"\n";
			}
			cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
}
if(i==5)
{
	doctor();
	system("pause");
   system("cls");
   goto b;
}
if(i==6)
{
	ob.getinfo();
	system("pause");
   system("cls");
   goto b;
}


//Exiting Through the system with a Thank You note........................option 5
if(i==8)
{
system("cls");
cout<<" ___________________________________________________________________________________\n";
cout<<"|                                           		                                  |\n";
cout<<"|                                           		                                  |\n";
cout<<"|                                           		                                  |\n";
cout<<"|                                           		                                  |\n";
cout<<"|                                           		                                  |\n";
cout<<"|                               THANK YOU FOR USING                                |\n";
cout<<"|                                                                                  |\n";
cout<<"|                            PGI HOSPITAL Website                                  |\n";
cout<<"|                                                                                  |\n";
cout<<"|                                                                                  |\n";
cout<<"|                                                                                  |\n";
cout<<"|                                                                                  |\n";
cout<<"|                                                                                  |\n";
cout<<"|__________________________________________________________________________________|\n";

}


cout<<"\n";

}

int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\n\n\ HOSPITAL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13)
   {  //character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "Adarsh_Azad"){
      cout << "\n\n\t\t\t\t\t\t\t\tWelcome to Sahara! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tACCESS  DENIED...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
void doctor()
{
		//doctor appointment module
cout<<endl<<endl<<"             PGI Hospital         "<<endl<<endl;
cout<<"\n\n\t\t\t\t\t\t Choose from the BELOW: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                     |\n";
cout<<"\t\t\t\t\t\t|             1  >> DERMALOGIST                                   |\n";
cout<<"\t\t\t\t\t\t|             2  >> CARDIOLOGIST                                  |\n";
cout<<"\t\t\t\t\t\t|             3  >> SURGEON                                       |\n";
cout<<"\t\t\t\t\t\t|             4  >> NEUROLOGIST                                   |\n";
cout<<"\t\t\t\t\t\t|             5  >> GYNOLOGIST                                    |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
	int i;
	cin>>i;
	switch (i)
	{
		case 1:
		cout<<"DR.Adarsh Azad\n TIME :- 9 am TO 1 pm "<<endl;
		break;
		case 2:
		cout<<"DR. Saumya\n TIME :- 9 am TO 1 pm "<<endl;
		break;
		case 3:
		cout<<"DR. Amisha Pandey\n TIME :- 9 am TO  1 pm "<<endl;
		break;
		case 4:
		cout<<"DR. Ayush Maurya\n TIME :- 9 am TO 1 pm "<<endl;
		break;
		case 5:
		cout<<"DR. NIKHIL GUPTA\n TIME :- 9 am TO 1 pm "<<endl;
		break;
		default :
		cout<<"THANK AND REGARDS"<<endl;
		break;
	}
	cout<<"IF YOU WANT TO CANCEL YOUR APPOINMENT  SAY YES OR NO "<<endl;
	string s;
	cin>>s;
	if(s=="YES")
	cout<<"YOUR APPOINMENT HAS BEEN CANCELLED"<<endl;
	else
	cout<<"THANK YOU"<<endl;
}
void bill()
{

	cost=500; //admisiion fees(300)+medicine fees(200)
	//ward cost
	if(add.ward=="General")
	cost+=200; //general ward cost (200)
	else if(add.ward=="Private")
	cost+=500; //private ward cost (500)
	//Appointment Cost with their Specialty :-
	if(strcmpi(add.specialist,"GYNOLOGIST")==0)
	cost+=250;  
	else if(strcmpi(add.specialist,"DERMOLOGIST")==0)  
	cost+=150;
	else if(strcmpi(add.specialist,"CARDIOLOGIST")==0)  
	cost+=100;                          
 	else if(strcmpi(add.specialist,"SURGEON")==0)  
	cost+=300;  
	else if(strcmpi(add.specialist,"NEUROLOGIST")==0)  
	cost+=200;  
	cout<<"your bill is"<<cost<<endl<<endl; 
	
	
	
	cout<<"thank you for visiting to Sahara";                               
}
