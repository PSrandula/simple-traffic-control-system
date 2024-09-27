#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	start:
	for(int i=10; i>=0; i--){
		system("cls");
		cout<<" -----------"<<endl;
		cout<<" |  STOP!  |"<<endl;
		cout<<" -----------"<<endl;
		cout<<"      "<<i;
		
		if(i==1){
			system("cls");
			cout<<" ----------------"<<endl;
			cout<<" |  GET READY!  |"<<endl;
			cout<<" ----------------"<<endl;
			i--;
		}
		Sleep(1500);
	}
	for(int i=10; i>=0; i--){
		system("cls");
		cout<<" ---------"<<endl;
		cout<<" |  GO!  |"<<endl;
		cout<<" ---------"<<endl;
		cout<<"     "<<i;
		
		Sleep(1500);
	}
	goto start;
}
