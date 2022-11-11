#include<iostream>

using namespace std;

class company{
	
	public:
	
	int id;
	char name[20];
	int staff_quantity;
	int revenue;
	int import_raw_diamonds; 
	int export_diamonds;
	char ceo[100];
	
	company()
	{
		cout<<"Enter the id:-";
		cin>>id;
		cout<<"Enter the name:-";
		cin>>name;
		cout<<"Enter the staff quantity:-";
		cin>>staff_quantity;
		cout<<"Enter the revenue:-";
		cin>>revenue;
		cout<<"Enter the import_raw_diamonds:-";
		cin>>import_raw_diamonds;
		cout<<"Enter the export_diamonds:-";
		cin>>export_diamonds;
		cout<<"Enter the CEO:-";
		cin>>ceo;
		cout<<endl<<"id:-";
		cout<<id<<endl;
		cout<<"name:-";
		cout<<name<<endl;
		cout<<"staff_quantity:-";
		cout<<staff_quantity<<endl;
		cout<<"revenue:-";
		cout<<revenue<<endl;
		cout<<"import_raw_diamonds:-";
		cout<<import_raw_diamonds<<endl;
		cout<<"Export diamond:-";
		cout<<export_diamonds<<endl;
		cout<<"CEO:-";
		cout<<ceo<<endl<<endl;
	}
	
};
main()
{
	int n;
	int i;
	
	
	cout<<"Enter size:-";
	cin>>n;
	company obj[n];


}
