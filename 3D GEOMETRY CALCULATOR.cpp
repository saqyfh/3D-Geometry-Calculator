#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main (){
	char code;
	double side, pw, user, sd, lg, wd, hg, rd, length, width, height, radius;	
    string password, username;
    int x = 1, option;
    double pi=3.142;

    while (1){
    	cout << "Input username: ";
    	cin >> username;
        cout << "Input password: ";
        cin >> password;
        
       if ( password == "1" && username == "2") 
       {
        cout << "Access Granted!!!!";
        break;
       }
       else if ( password != "1" && username != "2") 

       {
       cout << "Wrong username/password" << "\n" << "Please reenter your username and password" << "\n" << x << " " << "wrong attempts" << "\n";
       cout<<endl;
       ++x;
        if ( x > 3) 
        {
           cout << "Program terminated!";
		   break;
        }
       }
    }
    //right username and password
	if(username == "2" && password == "1"){
		do{	
		system("cls");
		cout << "[NO.]\t[3D GEOMETRY]\t\t[CODE]"<< endl;
		cout<<"1.\tCube\t\t\t A"<<endl;
		cout<<"2.\tRectangle Solid   \t B"<<endl;
		cout<<"3.\tSphere \t\t\t C"<<endl;
		cout<<"4.\tRight Circular Cylinder  D"<<endl;
		cout<<"5.\tRight Circular Cone \t E"<<endl;
		cout<<"6.\tSquare Pyramid \t\t F"<<endl;
		cout<<"7.\tRegular Tetrahedron   \t G"<<endl;
	//user enter code
		while(code!='A', code!='B', code!='C', code!='D',code!='E', code!='F', code!='G')
		{
		cout << " Enter code: ";
		cin >> code;
		system("cls");
		 if(code=='A'){
			cout << "Enter 1 to calculate volume of cube" << endl;
			cout << "Enter 2 to calculate surface of cube" << endl;
			while(1)
			{
			 cout << "Option: ";
			 cin >> option;	
			 if(option==1){
				cout << "Enter the value of side: ";
				cin >> side;
				cout << "The Volume of Cube is " << pow(side,3) << endl;
				break;
			 	}
			 if(option==2){
				cout << "Enter the value of side: ";
				cin >> side;
				cout << "The surface  of Cube is " << 6*pow(side,2) << endl;
				break;
				}
			 else {
				cout << "Invalid input entered! Please reenter..." << endl;
				++x;
				}
			}
			break;
		}
		 else if(code=='B'){
			cout << "Enter 1 to calculate volume of Rectangle Solid" << endl;
			cout << "Enter 2 to calculate surface of Rectangle Solid" << endl;
			while(1)
			{
			cout << "Option: ";
			cin >> option;
			if(option==1){
				cout << "Enter the value" << endl;
				cout << "Length: ";
				cin >> lg;
				cout << "Width: ";
				cin >> wd;
				cout << "Height: ";
				cin >> hg;
				cout << "The volume of rectangle solid is: " << lg*wd*hg << endl;
				break;
				}
			if(option==2){
				cout<< "Enter the value" << endl;
				cout <<"Length: ";
				cin >> lg;
				cout << "Width: ";
				cin >> wd;
				cout << "Height: ";
				cin >> hg;
				cout << "The surface area of rectangle solid is: " << 2*lg*wd+2*lg*hg+2*wd*hg << endl;
				break;
				}
			else{
		 		cout << "Invalid input entered! Please reenter..." << endl;
		 		++x;
				}
	 		}
	 		break;
		}
		else if(code=='C'){
			cout << "Enter 1 to calculate volume of Sphere" << endl;
			cout << "Enter 2 to calculate surface of Sphere" << endl;
			while(1)
			{
			cout << "Option: ";
			cin >> option;	
			if (option==1){
				cout << "Enter the value" << endl;
				cout << "Radius: ";
				cin >> rd;
				cout << "The volume of sphere is: " << ((4/3*pi)*pow(rd,2)) << endl;
				break;
				}
			if(option == 2){
				cout << "Enter the value" << endl;
				cout << "Radius: ";
				cin >> rd;
				cout << "The surface area of Sphere is: " << 4*pi*pow(rd,2) << endl;
				break;
				}		
			else {
				cout << "Invalid input entered! Please reenter..." << endl;
				++x;
				}
			}
			break;
		}
		else if(code=='D'){
			cout << "Enter 1 to calculate volume of Right Circular Cylinder" << endl;
			cout << "Enter 2 to calculate surface of Right Circular Cylinder" << endl;
			while(1)
			{
			cout << "Option: ";
			cin >> option;		
			if (option==1){
				cout << "Enter The value" << endl;
				cout << "Radius: ";
				cin >> rd;
				cout << "Height: ";
				cin >> hg;
				cout << "The volume of Right Circular Cylinder is: " << pi*pow(rd,2)*hg << endl;
				break;
				}
			if (option==2){
				cout << "Enter The value" << endl;
				cout << "Radius: ";
				cin >> rd;
				cout << "Height: ";
				cin >> hg;
				cout << "The surface of Right Circular Cylinder is: " << 2*pi*rd*hg+2*pi*pow(rd,2) << endl;
				break;
				}
			else {
				cout << "Invalid input entered! Please reenter..." << endl;
				++x;
				}
			}
			break;
		}
		else if (code=='E'){
			cout << "Enter 1 to calculate volume of Right Circular Cone" << endl;
			cout << "Enter 2 to calculate surface of Right Circular Cone" << endl;
			while(1)
			{
			cout << "Option: ";
			cin >> option;		
			if (option==1){
				cout << "Enter the value" << endl;
				cout << "radius: ";
				cin >> rd;
				cout << "height: ";
				cin >> hg;
				cout <<"The volume of Right Circular Cone is: " << 1.0/3.0*pi*pow(rd,2)*hg << endl;
				break;
			}
			if (option==2){
				cout << "Enter the value" << endl;
				cout << "Radius: ";
				cin >> rd;
				cout << "Height: ";
				cin >> hg;
				cout << "The surface of Right Circular Cone is: " << pi*rd*sqrt(pow(rd,2)+pow(hg,2))+pi*pow(rd,2) << endl;
				break;
			}
			else {
		 		cout << "Invalid input entered! Please reenter..." << endl;
				++x;
				}
			}
			break;
		}
		else if (code=='F'){
			cout << "Enter 1 to calculate volume of Square Pyramid" << endl;
			cout << "Enter 2 to calculate surface of Square Pyramid" << endl;
			while(1){
			cout << "Option: ";
			cin >> option;
			if (option==1){
				cout << "Enter the value" << endl;
				cout << "Side: ";
				cin >> sd;
				cout << "Height: ";
				cin >> hg;
			  	cout << "The volume of square pyramid is: " << 1.0/3.0*pow(sd,2)*hg << endl;
				break;
			}
			if (option==2){
				cout << "Enter the value" << endl;
				cout << "Side: ";
				cin >> sd;
				cout << "Height: ";
				cin >> hg;
				cout << "The surface of square pyramid is: " << sd*(sd+sqrt(pow(sd,2)+4*pow(hg,2))) << endl;
				break;
			}	
			else {
				cout << "Invalid input entered! Please reenter..." << endl;
				++x;
				}
			}
			break;	
		}
		else if  (code=='G'){
			cout << "Enter 1 to calculate volume of Square Pyramid" << endl;
			cout << "Enter 2 to calculate surface of Square Pyramid" << endl;
			while(1){
			cout << "Option: ";
			cin >> option;
			if (option==1){
				cout << "Enter the value" << endl;
				cout <<"Side: ";
				cin >> sd;
				cout << "The volume of regular tetrahedron is: " << 1.0/12.0*sqrt(2)*pow(sd,3) << endl;
				break;
				}
			if (option==2){
				cout << "Enter the value" << endl;
				cout << "Side: ";
				cin >> sd;
				cout << "The surface of regular tetrahedron is: " << sqrt(3)*pow(sd,2) << endl;
				break;
			}
			else {
				cout << "Invalid input entered! Please reenter..." << endl;
				++x;
				}
			}
			break;
		}
		else{
			cout << "Invalid input entered! Please reenter the code." << endl;
			++x;
		}
	}
      cout << "Press Y to continue or N to terminate the program: ";
      cin>>code;  
      }while(code !='N');
      system("cls");
      cout <<"Program terminated!";
      exit(0);
      
  }        
}

