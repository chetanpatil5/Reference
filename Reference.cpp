#include<iostream>
#include<string>
using namespace std;

int main()
{
	int Data = 5; 
	cout << "\nData :  " << Data<<endl;
	int &ref = Data;
	cout << "Address of Data : " << &Data << endl;
	cout << "Address of Reference : " << &*&ref << endl;
	cout << "Ref : " << ref<<endl;


	int x = 1;
	ref = x;
	cout << "Ref : " << ref<<endl;
	cout << "Address of Reference : " << &*&ref << endl;

	cout << "x ka address" << &x << endl;
	cout << "Data :  " << Data << endl;

	cout << "--------------------------------------" << endl;

	//reference to a pointer
	int y = 10;
	int *ptr = &y;
	int* (&reff) = ptr;
	
	cout <<"Y : "<< y<<endl;
	cout << "Y address"<<&y<<endl;
	cout <<"Ref value :" <<*reff<< endl;
	cout << "Reff address :" << &reff << endl;

	//Reference to an array
	int arr[5] = {1,2,3,4,5};

	int (&reffarr)[5] = arr ;

	for (int i = 0; i < 5; i++)
	{
		cout << reffarr[i]<<" ";
	}
	cout << endl;

	for (int i : reffarr)
	{
		cout << i << " ";
	}
	cout << endl;







	return 0;
}