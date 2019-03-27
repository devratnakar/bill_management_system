#include<iostream>
#include<stdlib.h>
using namespace std;
int main()   //main function
{
	int n,amt[99],q[99],i,yes;
	char name[99][90];//variable decalartion

eve:
		system ("CLS");
	system("color B0");// used to change the background and text color 
	cout<<"plz enter number of items";
		cin>>n;
		
		for(int i=0;i<n;i++){

	cout<<"enter name of the items/item"<<"\n";
	cin>>name[i];
	cout<<"enter quantity of the items"<<"\n";
	cin>>q[i];
	cout<<"plz enter amout "<<"\n";
	cin>>amt[i];
	}
	system ("CLS");//to clear screen
	system("color A1");

	cout<<"**********************billing summary*****************/\n";
	cout<<"name_of_the_items            quantity                price                    total price\n";
	for(i=0;i<n;i++){
	
	cout<<name[i]<<"\t"<<"\t"<<"\t"<<"\t"<<    q[i] <<"\t"<<"\t"<<"\t"<<   amt[i]  << "\t"<<"\t"<<"\t"<<"\t"<<q[i]*amt[i]<<"\n";}
	cout<<"***********************end of the billing*******************\n";

	cout<<"do u want another bill if yes then press 1"<<"\n";
	cin>>yes;
	if(yes==1){
	
goto eve;}

	return 0;}

