#include<iostream>
using namespace std;
class food{
	public:
	
	int id;
	char name[20];
	char type[20];
	char rating[20];
	char location[20];
	int establish_year;
	int staff_quantity;
	
	food()
	{
		cout<<"Enter the id:-";
		cin>>id;
		cout<<"Enter the name:-";
		cin>>name;
		cout<<"Enter the type:-";
		cin>>type;
		cout<<"Enter the rating:-";
		cin>>rating;
		cout<<"Enter the location:-";
		cin>>location;
		cout<<"Enter the establish_year:-";
		cin>>establish_year;
		cout<<"Enter the staff quantity:-";
		cin>>staff_quantity;
		
		cout<<"id:-";
		cout<<id<<endl;
		cout<<"name:-";
		cout<<name<<endl;
		cout<<"type:-";
		cout<<type<<endl;
		cout<<"rating:-";
		cout<<rating<<endl;
		cout<<"location:-";
		cout<<location<<endl;
		cout<<"establish_year:-";
		cout<<establish_year<<endl;
		cout<<"staff quantity:-";
		cout<<staff_quantity<<endl;
	}
};
main()
{
	int n;
	int i;
	cout<<"Enter size:-";
	cin>>n;

	for(i=0;i<n;i++)
	{
		food obj[i];
	}
}
