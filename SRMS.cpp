#include<iostream>
using namespace std;
string roll_no[30],name[30],Class[30],course[30],mobile_no[30],admission_year[30];
//arrays for storing students data.
int total=0; //to store all data
void enter()
{
int ch=0;
cout<<"Enter The Number Of Students You Want To Enter::"<<endl;
cin>>ch;
if(total==0)
{
total=ch+total;
for(int i=0;i<ch;i++)
{
cout<<"\nEnter The Data Of Student "<<i+1<<endl<<endl;
cout<<"Enter The Roll No. Of Student:: "<<endl;
cin>>roll_no[i];
cout<<"Enter The Name Of Student:: "<<endl;
cin>>name[i];
cout<<"Enter Class:: "<<endl;
cin>>Class[i];
cout<<"Enter Course:: "<<endl;
cin>>course[i];
cout<<"Enter Mobile No.:: "<<endl;
cin>>mobile_no[i];
cout<<"Enter The Year Of Admission:: "<<endl;
cin>>admission_year[i];
cout<<endl<<"---------------------------------------------------------------------------------"<<endl<<endl;
}
}
else
{
for(int i=total;i<ch+total;i++)
//to store onward students data rather than storing double data()
{
cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
cout<<"Enter The Roll No. Of Student:: ";
cin>>roll_no[i];
cout<<"Enter The Name Of Student:: ";
cin>>name[i];
cout<<"Enter Class:: ";
cin>>Class[i];
cout<<"Enter Course:: ";
cin>>course[i];
cout<<"Enter Mobile No.:: ";
cin>>mobile_no[i];
cout<<"Enter The Year Of Admission:: ";
cin>>admission_year[i];
cout<<endl<<"---------------------------------------------------------------------------------"<<endl<<endl;
}
total=ch+total; //making choice
}
}
void show()
{
if(total==0)
{
cout<<"The Data Is Not Entered Yet"<<endl;
cout<<"Please Press 1 To Enter The Data!!"<<endl;
}
else
{
for(int i=0;i<total;i++)
{
cout<<"\nData of Student "<<i+1<<endl<<endl;
cout<<"Roll No.:: "<<roll_no[i]<<endl;
cout<<"Name:: "<<name[i]<<endl;
cout<<"Class:: "<<Class[i]<<endl;
cout<<"Course:: "<<course[i]<<endl;
cout<<"Mobile No.:: "<<mobile_no[i]<<endl;
cout<<"Admission Year:: "<<admission_year[i]<<endl;
cout<<endl<<"---------------------------------------------------------------------------------"<<endl<<endl;
}
}
}
void search()
{
if(total==0)
{
cout<<"The Data Is Not Entered Yet"<<endl;
cout<<"Please Press 1 To Enter The Data!!"<<endl;
}
else
{
string rollno;
cout<<"Enter The Roll No Of Student::"<<endl;
cin>>rollno;
for(int i=0;i<total;i++)
{
if(rollno==roll_no[i])
{
cout<<"Roll No.:: "<<roll_no[i]<<endl;
cout<<"Name:: "<<name[i]<<endl;
cout<<"Class:: "<<Class[i]<<endl;
cout<<"Course:: "<<course[i]<<endl;
cout<<"Mobile No.:: "<<mobile_no[i]<<endl;
cout<<"Admission Year:: "<<admission_year[i]<<endl;
cout<<endl<<"---------------------------------------------------------------------------------"<<endl<<endl;
}
}
}
}
void update()
{
if(total==0)
{
cout<<"The Data Is Not Entered Yet"<<endl;
cout<<"Please Press 1 To Enter The Data!!"<<endl;
}
else{
string rollno;
cout<<"Enter The Roll No Of Student Which You Want To Update"<<endl;
cin>>rollno;
for(int i=0;i<total;i++)
{
if(rollno==roll_no[i])
{
cout<<"\nPrevious data"<<endl<<endl;
cout<<"Data of Student "<<i+1<<endl;
cout<<"Roll No.:: "<<roll_no[i]<<endl;
cout<<"Name:: "<<name[i]<<endl;
cout<<"Class:: "<<Class[i]<<endl;
cout<<"Course:: "<<course[i]<<endl;
cout<<"Mobile No.:: "<<mobile_no[i]<<endl;
cout<<"Admission Year:: "<<admission_year[i]<<endl;
cout<<"\nEnter New Data::"<<endl<<endl;
cout<<"Enter Roll No.:: ";
cin>>roll_no[i];
cout<<"Enter Name:: ";
cin>>name[i];
cout<<"Enter Class:: ";
cin>>Class[i];
cout<<"Enter Course:: ";
cin>>course[i];
cout<<"Enter Mobile No.:: ";
cin>>mobile_no[i];
cout<<"Enter The Year Of Admission:: ";
cin>>admission_year[i];
}
}
}
}
void Delete()
{
if(total==0)
{
cout<<"The Data Is Not Entered Yet"<<endl;
cout<<"Please Press 1 To Enter The Data!!"<<endl;
}
else
{
int a;
cout<<"Are you Sure to Delete Data?"<<endl;
cout<<"Press 1 to delete all record"<<endl;
cin>>a;
if(a==1)
{
total=0;
cout<<"All record is deleted..!!"<<endl;
}
else
{
cout<<"Please Press 1 to Delete All Record"<<endl;
}
}
}
int main() //main function, execution of program starts from here
{
int value;
while(true) //always in Loop
{
cout<<endl;
cout<<"(1) For Enter Data"<<endl<<endl;
cout<<"(2) For Show Data"<<endl<<endl;
cout<<"(3) For Search Data"<<endl<<endl;
cout<<"(4) For Update Data"<<endl<<endl;
cout<<"(5) For Delete Data"<<endl<<endl;
cout<<"(6) For Quit"<<endl<<endl<<endl;
cout<<"---------------------------------------------------------------------------------"<<endl<<endl;
cin>>value;
switch(value)
{
case 1:
enter();
break;
case 2:
show();
break;
case 3:
search();
break;
case 4:
update();
break;
case 5:
Delete();
break;
case 6:
exit(0);
break;
default:
cout<<"Invalid input"<<endl;
break;
}
}
}
