#include<iostream>
using namespace std;
class Patient;
class Doctornode;
class Patientnode;
class Doctor;
int ad=1234;
int Appointmentnumber=2000;
int doctornumber=1000;
Doctornode *head2,*temp1,*temp2,*temp3,*temp4,*temp5;
Patientnode *head,*temp,*tem,*tem1,*tem2;
class Doctornode{
	public:
	string specilization;
	string name1;
    string address;
    int mobile;
    string location;
    string openingTime;
    string closingTime;
    int password;
    int num;
    Doctornode *next1;
	Doctornode(){
		specilization="no specilization";
		name1="no name";
		address="no address";
		mobile=0;
		location="no location";
		openingTime="no openingTime";
		closingTime="no closingTime";
		password=0;
		num=0;
		next1=NULL;
	}	
	Doctornode(string specilization,string name1,string address,int mobile,string location,string openingTime,string closingTime,int password,int num){
	    this->specilization=specilization;
		this->name1=name1;
		this->address=address;
		this->mobile=mobile;
		this->location=location;
		this->openingTime=openingTime;
		this->closingTime=closingTime;
		this->password=password;
		this->num=num;
		next1=NULL;
	}
};
class Patientnode{
	public:
	string name;
	int age;
	int mobile;
	int number;
	string doctor;
	string specilist;
	Patientnode *next;
	Patientnode(){
		name="no name";
		age=0;
		mobile=0;
		number=0;
		doctor="no doctor";
		specilist="no specilization";
		next=NULL;
	}	
	Patientnode(string name,int age,int mobile,int number,string doctor,string specilist){
	    this->name=name;
	    this->doctor=doctor;
	    this->specilist=specilist;
		this->age=age;
		this->mobile=mobile;
		this->next=NULL;
		this->number=number;	
	}
};
class Doctor{
	public:
	Doctor(){
		head2=NULL;
		return;
	}
	void adddoctor(){
	string name;
    string address;
    int mobile;
    string location;
    string openingTime;
    string closingTime;
    string specilization;
    int password;
    cout<<"\nEnter given details : "<<endl;
    cout<<"\nEnter your specilization : ";
    getline(cin,specilization);
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your address : ";
    getline(cin,address);
    cout<<"Enter your openingTime : ";
    getline(cin,openingTime);
    cout<<"Enter your closingTime : ";
    getline(cin,closingTime);
    cout<<"Enter your mobile number : ";
    cin>>mobile;
    cin.ignore();
    cout<<"Enter your location : ";
    getline(cin,location);
    cout<<"Enter a password(using numbers) which is used for check patient : ";
    cin>>password;
    cin.ignore();
    doctornumber++;
    Doctornode *newnode=new Doctornode(specilization,name,address,mobile,location,openingTime,closingTime,password,doctornumber);
    if(head2==NULL){
    	head2=newnode;
    	return;
	}
	Doctornode *temp=head2;
	while(temp->next1!=NULL){
		temp=temp->next1;
	}
	temp->next1=newnode;
	}
	void checkPatient(){
		int key;
		int d=0;
		cout<<"\nEnter your password : ";
		cin>>key;
		while(temp3!=NULL){
		if(key==temp3->password){
			d++;
		if(head==NULL){
			cout<<"\nThere is no Appointment...";
			return;
		}
		else
		{
			if(head->doctor==temp3->name1){
			cout<<"\n\nPatient Details : "<<endl;
		    cout<<"Appointment Name : "<<head->number<<endl;
			cout<<"Name : "<<head->name<<endl;
			cout<<"Age : "<<head->age<<endl;
			cout<<"Mobile number : "<<head->mobile<<endl;	
		    head=head->next;
			return;
			}
			else{
				temp3=temp3->next1;
			}	
	   	}	
			}
			else{
				temp3=temp3->next1;
			}
		}
		if(d==0){
			cout<<"\nYour entered password is incorrect..."<<endl;
		}
	}
};
class Patient{
	public:
	Patient(){
		head=NULL;
		return;
	}	
	void Appointment(){
	Appointmentnumber++;
	string name;
	int age;
	string doctor;
	string specilist;
	int mobile;
	if(head2==NULL){
    	cout<<"\n\nThere is no doctor available for your appointment..."<<endl;
    	return;
	}
	cout<<"\n\nPatient number : "<<Appointmentnumber<<endl;
	cout<<"Patient number is required if you want to edit in your Appointment..."<<endl;
	int c;
out: cout<<"Select Doctor for Appointment : "<<endl;
   	temp1=head2;
   	int i=0;
	while(temp1!=NULL){
		i++;
		cout<<i<<". "<<temp1->name1<<"(Specilist of "<<temp1->specilization<<")"<<endl;
		temp1=temp1->next1;
	}
	cin>>c;
	cin.ignore();
	if(c<=0 || c>i){
		cout<<"Invalid choice..."<<endl;
		goto out;
	}
	else{
	int a=0;
    temp1=head2;
        for(int a=1;a<c;a++){
            temp1=temp1->next1;
        }       
	doctor = temp1->name1;
    specilist = temp1->specilization;
	cout<<"Enter patient name : ";
	getline(cin,name);
	cout<<"Enter patient age : ";
	cin>>age;
	cin.ignore();
	cout<<"Enter mobile number : ";
	cin>>mobile;
	cin.ignore();
	Patientnode *newnode=new Patientnode(name,age,mobile,Appointmentnumber,doctor,specilist);
	if(head==NULL){
		head=newnode;
		return;
	}
	Patientnode *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
	}
}
void emergencyAppointment(){
	Appointmentnumber++;
	string name;
	int age;
	string doctor;
	string specilist;
	int mobile;
	if(head2==NULL){
    	cout<<"\n\nThere is no doctor available for your appointment..."<<endl;
    	return;
	}
	cout<<"\n\nPatient number : "<<Appointmentnumber<<endl;
	cout<<"Patient number is required if you want to edit in your Appointment..."<<endl;
	int c;
out: cout<<"Select Doctor for Appointment : "<<endl;
   	temp1=head2;
   	int i=0;
	while(temp1!=NULL){
		i++;
		cout<<i<<". "<<temp1->name1<<"(Specilist of "<<temp1->specilization<<")"<<endl;
		temp1=temp1->next1;
	}
	cin>>c;
	if(c<=0 || c>i){
		cout<<"Invalid choice..."<<endl;
		goto out;
	}
	else{
	int a=0;
    temp1=head2;
        for(int a=1;a<c;a++){
            temp1=temp1->next1;
        }       
	doctor = temp1->name1;
    specilist = temp1->specilization;
	cout<<"Enter patient name : ";
	getline(cin,name);
	cout<<"Enter patient age : ";
	cin>>age;
	cin.ignore();
	cout<<"Enter mobile number : ";
	cin>>mobile;
	cin.ignore();
	Patientnode *newnode=new Patientnode(name,age,mobile,Appointmentnumber,doctor,specilist);
	if(head==NULL){
		head=newnode;
		return;
	}
    newnode->next=head;
    head=newnode;
}	
}
	void editAppointment(){
		int a;
		cout<<"\n\nEnter your Appointment number : ";
		cin>>a;
		int s=0;
		Patientnode *temp5=head;
		while(temp5!=NULL){
			temp5=temp5->next;
			s++;
		}
		Patientnode *temp=head;
		int z=0;
		while(temp!=NULL){
			if(temp->number==a){
			int choice;
			while(choice!=4){
			cout<<"\nSelect one of them \n1.Name\n2.Age\n3.Mobile number\n4.Doctor\n5.Exit\nYour choice is : ";
			cin>>choice;
			if(choice==1){
				string name1;
				cout<<"Enter name : ";
				getline(cin,name1);
				temp->name=name1;
			}
			else if(choice==2){
				int age1;
				cout<<"Enter age : ";
				cin>>age1;
				cin.ignore();
				temp->age=age1;
			}
			else if(choice==3){
				int mobile1;
				cout<<"Enter mobile number : ";
				cin>>mobile1;
				cin.ignore();
				temp->mobile=mobile1;
			}
			else if(choice==4){
	int c;
	out: cout<<"Select Doctor for Appointment : "<<endl;
   	temp1=head2;
   	int i=0;
	while(temp1!=NULL){
		i++;
		cout<<i<<". "<<temp1->name1<<"(Specilist of "<<temp1->specilization<<")"<<endl;
		temp1=temp1->next1;
	}
	cin>>c;
	if(c<=0 || c>i){
		cout<<"Invalid choice..."<<endl;
		goto out;
	}
	else{
	int a=0;
    temp1=head2;
        for(int a=1;a<c;a++){
            temp1=temp1->next1;
        }       
	temp->doctor= temp1->name1;
   temp->specilist= temp1->specilization;
	
			}
		}
			else if(choice==5){
				cout<<"\n\nYour Appointment after changing : "<<endl;
				cout<<"Appointment number : "<<temp->number<<endl;
				cout<<"Name : "<<temp->name<<endl;
				cout<<"Age : "<<temp->age<<endl;
				cout<<"Mobile number : "<<temp->mobile<<endl;
				return;
			}	
			else{
				cout<<"\nInvalid choice...";
			}
		}
			}
			else{
			z++;
			temp=temp->next;
		}
		if(z==s){
			cout<<"\n\nThere is no appointment according to that Appointment number...";
			return;
		}
		}
		
	}
	void Appointmentdetails(){
		if(temp3==NULL){
			cout<<"\n\nThere is no Appointment...";
		}
		else{
			Patientnode *temp=head;
			cout<<"\n\nAppointment Details : ";
			while(temp!=NULL){
				cout<<"\nAppointment number : "<<temp->number<<endl;
				cout<<"Name : "<<temp->name<<endl;
				cout<<"Age : "<<temp->age<<endl;
				cout<<"Mobile number : "<<temp->mobile<<endl;
				temp=temp->next;
			}
		}
	}
};
class Admin{
	public:
		void noofdoctors(){
			int p;
			cout<<"\nEnter password : ";
			cin>>p;
			if(p==ad){
			int h=0;
			if(head2!=NULL){
			cout<<"\n\nDoctor numbers : "<<endl;
			temp4=head2;
			while(temp4!=NULL){
				h++;
				cout<<temp4->num<<endl;
				temp4=temp4->next1;
			}	
			}
			if(h==0){
				cout<<"\nThere is no doctor..."<<endl;
				return;
			}
			int sel;
			cout<<"Choose from this : "<<endl;
			cout<<"1.Check detail of any doctor\n2.Exit\nYour choice is : ";
			cin>>sel;
			if(sel==1){
				int q,h=0;
				cout<<"Enter doctor number : ";
				cin>>q;
				temp5=head2;
				while(temp5!=NULL){
					if(temp5->num==q){
						h++;
                    cout<<"Doctor specilization is : "<<temp5->specilization<<endl;
                    cout<<"Doctor name is : "<<temp5->name1<<endl;
                    cout<<"Doctor address is : "<<temp5->address<<endl;
                    cout<<"Doctor mobile number is : "<<temp5->mobile<<endl;
                    cout<<"Doctor location is : "<<temp5->location<<endl;
                    cout<<"Doctor openingTime is : "<<temp5->openingTime<<endl;
                    cout<<"Doctor closingTime is : "<<temp5->closingTime<<endl;
                    cout<<"Doctor password is : "<<temp5->password<<endl;	
					}
					temp5=temp5->next1;
				}
				if(h==0){
					cout<<"\nThat doctor number is not exist in the list..."<<endl;
				}	
			}
			else if(sel==2){
				cout<<"\nLeave..."<<endl;
			}
			else{
				cout<<"\nInvalid choice..."<<endl;
			}
		}
		else{
			cout<<"\n\nYour password is incorrect..."<<endl;
		}
	}
		void noofAppointment(){
			int d2;
			cout<<"\nEnter password : ";
			cin>>d2;
			if(d2==ad){
			int g=0;
			if(head!=NULL){
			cout<<"\n\nAppointment numbers : "<<endl;
			tem=head;
			while(tem!=NULL){
				g++;
				cout<<tem->number<<endl;
				tem=tem->next;
			}	
			}
			if(g==0){
				cout<<"\nThere is no Appointment..."<<endl;
				return;
			}
			int se;
			cout<<"Choose from this : "<<endl;
			cout<<"1.Check detail of any Appointment\n2.Exit\nYour choice is : ";
			cin>>se;
			if(se==1){
				int e,i=0;
				cout<<"Enter Appointment number : ";
				cin>>e;
				tem1=head;
				while(tem1!=NULL){
					if(tem1->number==e){
						i++;
                    cout<<"Patient name is : "<<tem1->name<<endl;
                    cout<<"Patient doctor is : "<<tem1->doctor<<" ( "<<tem1->specilist<<" )"<<endl;
                    cout<<"Patient age is : "<<tem1->age<<endl;
                    cout<<"Doctor mobile number is : "<<tem1->mobile<<endl;	
					}
					tem1=tem1->next;
				}
				if(i==0){
					cout<<"\nThat Appointment number is not exist in the list..."<<endl;
				}	
			}
			else if(se==2){
				cout<<"\nLeave..."<<endl;
			}
			else{
				cout<<"\nInvalid choice..."<<endl;
			}
		}
		else{
			cout<<"\n\nYour password is incorrect..."<<endl;
		}	
	}
};
int main(){
	cout<<"-------------------------------------------------------------Welcome to NSK Hospital-------------------------------------------------------------"<<endl;
	temp3=head2;
	Patient p1;
	Doctor d1;
    Admin a1;
    d1.adddoctor();
    d1.adddoctor();
    p1.Appointment();
    p1.editAppointment();
    p1.Appointmentdetails();
    p1.Appointment();
    d1.checkPatient();
    a1.noofdoctors();
    a1.noofAppointment();
	return 0;
}
