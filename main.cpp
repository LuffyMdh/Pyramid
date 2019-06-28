#include <iostream>

using namespace std;

int main()
{
	int rows =3;
	char userChoice;
	int counterMid;
	
	cout << "Enter direction: ";
	cin >> userChoice;
	
	switch(userChoice)
	{
		case 'U':
			for(int i=1;i<=rows;i++){
				for(int j=rows;j>i;j--){
					cout << " ";
				}
				for(int star=0;star<2*i-1;star++){
					cout << "*";
				}
			cout << endl;
			}
			break;
			
		case 'L':
			counterMid = 0;
			for(int i=1;i<=rows*2-1;i++){
				if(counterMid < 3){
					for(int j=0;j<rows-i;j++){
						cout << " ";
					}
					for(int star=0;star<i;star++){
						cout << "*";
					}
					cout << endl;
					counterMid++;
				}
				else{
					for(int j=0;j<=i-4;j++){
						cout << " ";
					}
					for(int star=rows-1;star>i-(rows+1);star--){
						cout << "*";
					}
					cout << endl;
				}
			}
			break;
			
		case 'D':
			for(int i=rows;i>=1;i--){
				for(int j=rows-1;j>=i;j--){
					cout << " ";
				}
				for(int star=0;star<2*i-1;star++){
					cout << "*";
				}
				cout << endl;
			}
			break;
				
		case 'R':
			counterMid = 0;
			for(int i=1;i<=rows*2-1;i++){
				if(counterMid < 3){
					for(int star=0;star<i;star++){
						cout << "*";
					}
				cout << endl;
				counterMid++;
				}
				else{
					for(int star=rows-1;star>i-(rows+1);star--){
						cout << "*";
					}
					cout << endl;
				}
			}
			break;
			
			default:
				cout << userChoice << " is an invalid entry, please try again." << endl;
				break;
	}
}
