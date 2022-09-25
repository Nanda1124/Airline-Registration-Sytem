#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class management
{
public:
	management()
	{
		MainMenu();
	}
	string FlightName;
	string date;
	int price;
	int CustomerID;
	string Name;
	int Age;
	string gender;
	void MainMenu()
	{
		int CustomerChoice;
		int prevChoice;
		int displayChoice;
		cout << "#____MainMenu________#" << endl;
		cout << "Enter the Number to select the task" << endl;
		cout << "\n" << endl;
		cout << " press 1 to update the Customer Details" << endl;
		cout << " press 2 for the Flight Registration" << endl;
		cout << " press 3 to display ticket" << endl;
		cout << " press 4 to Exit MainMenu.." << endl;

		cin >> CustomerChoice;

		switch (CustomerChoice)
		{
		case 1 :
		        {
			      cout << "Customer Details Update Section" << endl;
				  Information();
				  cout << "press any key to go MainMenu " << endl;
				  cin >> prevChoice;
				  if (prevChoice)
				  {
					  MainMenu();
				  }
				  else
				  {
					  MainMenu();
				  }
				  break;
		        }
		case 2 :
		        {
			     cout << "Flight Ticket Booking Section" << endl;
				 Booking();
				 cout << "press any key to go MainMenu " << endl;
				 cin >> prevChoice;
				 if (prevChoice)
				 {
					 MainMenu();
				 }
				 else
				 {
					 MainMenu();
				 }
				 break;
		        }
		case 3 :
		        {
			     cout << "displaying your Ticket" << endl;
			     Collect();
				 break;
		        }
		case 4 :
				{
			      cout << "Thankyou" << endl;
			       exit;
				   break;
		        }
		default :
		        {
			     cout << "Invalid Input ! TRY AGAIN " << endl;
				 MainMenu();
				 break;
		        }
		}
	}

	

	void Information()
	{
		cout << "Enter the 4 digit CustomerID" << endl;
		cin >> CustomerID;

		cout << "Enter the Name" << endl;
		cin >> Name;

		cout << "Enter the Age" << endl;
		cin >> Age;

		cout << "Enter the Gender" << endl;
		cin >> gender;

		cout << "Your details are sucessfully updated in our data system" << endl;
		cout << "Thankyou" << endl;
	}
	
	void Booking()
	{
		int destination;
		int FlightChoice;
		string country[] = { "USA","Canada","Dubai","FRANCE","UK" };
		for (int i = 0; i < 5; i++)
		{
			cout << i + 1 << " . " << country[i] << endl;
		}

		cout << "Enter the number Based on your Destination Country" << endl;
		cin >> destination;

		switch (destination)
		{
		case 1: 
		       {
			     cout << "Welcome to USA Airlines" << endl;
				 cout << "Your Comfort Is our Priority. Enjoy the Journey" << endl;
				 cout << "Following are the flights" << endl;
				 cout << endl;
				 cout << "1. NAME : USA-258" << "  " << "DATE & TIME : 26-09-2022  RS.4000" << endl;
				 cout << "2. NAME : USA-453" << "  " << "DATE & TIME : 11-10-2022  RS.5000" << endl;
				 cout << "3. NAME : USA-582" << "  " << "DATE & TIME : 31-12-2022  RS.4400" << endl;
				 cin >> FlightChoice;
				 if (FlightChoice == 1)
				 {
					 FlightName = "USA-258";
					 date = "26-09-2022";
					 price = 4000;
					 cout << "You have successfully Booked the ticket" << endl;
					 display();
				 }
				 else if (FlightChoice == 2)
				 {
					 FlightName = "USA-453";
					 date = "11-10-2022";
					 price = 5000;
					 cout << "You have successfully Booked the ticket" << endl;
					 display();
				 }
				 else if (FlightChoice == 3)
				 {
					 FlightName = "USA-582";
					 date = "31-12-2022";
					 price = 5400;
					 cout << "You have successfully Booked the ticket" << endl;
					 display();
				 }
				 else
				 {
					 cout << "Invalid Input !" << endl;
					 cout << "TRY again";
					 Booking();
				 }
		       }
		case 2 :
		       {
			     cout << "Welcome to CANADA Airlines" << endl;
			     cout << "Your Comfort Is our Priority. Enjoy the Journey" << endl;
			     cout << "Following are the flights" << endl;
			     cout << endl;
			     cout << "1. NAME : CANADA-258" << "  " << "DATE & TIME : 26-10-2022  RS.4600" << endl;
			     cout << "2. NAME : CANADA-453" << "  " << "DATE & TIME : 11-11-2022  RS.5500" << endl;
			     cout << "3. NAME : CANADA-582" << "  " << "DATE & TIME : 31-12-2022  RS.4900" << endl;
			     cin >> FlightChoice;
			     if (FlightChoice == 1)
			     {
			    	FlightName = "CANADA-258";
				    date = "26-10-2022";
				   price = 4600;
				   cout << "You have successfully Booked the ticket" << endl;
				   display();
			     }
			     else if (FlightChoice == 2)
			     {
			    	FlightName = "CANADA-453";
			    	date = "11-11-2022";
			    	price = 5500;
			    	cout << "You have successfully Booked the ticket" << endl;
			    	display();
			     }
			     else if (FlightChoice == 3)
			     {
			    	FlightName = "CANADA-582";
			    	date = "31-12-2022";
			    	price = 4900;
			    	cout << "You have successfully Booked the ticket" << endl;
			    	display();
			     }
			     else
			     {
			    	cout << "Invalid Input !" << endl;
			    	cout << "TRY again";
			    	Booking();
			     }
		       }
		case 3 :
		       {
			      cout << "Welcome to Dubai Airlines" << endl;
			      cout << "Your Comfort Is our Priority. Enjoy the Journey" << endl;
			      cout << "Following are the flights" << endl;
			      cout << endl;
			      cout << "1. NAME : DUBAI-258" << "  " << "DATE & TIME : 26-09-2022  RS.4000" << endl;
			      cout << "2. NAME : DUBAI-453" << "  " << "DATE & TIME : 11-10-2022  RS.5000" << endl;
		       	cout << "3. NAME : DUBAI-582" << "  " << "DATE & TIME : 31-12-2022  RS.4400" << endl;
			    cin >> FlightChoice;
			     if (FlightChoice == 1)
			     {
			    	FlightName = "DUBAI-258";
			    	date = "26-09-2022";
			    	price = 4000;
			    	cout << "You have successfully Booked the ticket" << endl;
			    	display();
			     }
			     else if (FlightChoice == 2)
			     {
				  FlightName = "DUBAI-453";
				  date = "11-10-2022";
				   price = 5000;
				   cout << "You have successfully Booked the ticket" << endl;
				   display();
			     }
			     else if (FlightChoice == 3)
			     {
			    	FlightName = "DUBAI-582";
			    	date = "31-12-2022";
			    	price = 5400;
			    	cout << "You have successfully Booked the ticket" << endl;
				   display();
			     }
			     else
			     {
			    	cout << "Invalid Input !" << endl;
			    	cout << "TRY again";
			    	Booking();
		         }
		       }
		case 4:
		       {
			    cout << "Welcome to France Airlines" << endl;
			    cout << "Your Comfort Is our Priority. Enjoy the Journey" << endl;
			    cout << "Following are the flights" << endl;
			    cout << endl;
			    cout << "1. NAME : FRANCE-258" << "  " << "DATE & TIME : 26-09-2022  RS.4000" << endl;
			    cout << "2. NAME : FRANCE-453" << "  " << "DATE & TIME : 11-10-2022  RS.5000" << endl;
			    cout << "3. NAME : FRANCE-582" << "  " << "DATE & TIME : 31-12-2022  RS.4400" << endl;
			    cin >> FlightChoice;
			    if (FlightChoice == 1)
			    {
			    	FlightName = "FRANCE-258";
			    	date = "26-09-2022";
			    	price = 4000;
			    	cout << "You have successfully Booked the ticket" << endl;
			    	display();
			    }
			    else if (FlightChoice == 2)
			    {
			    	FlightName = "FRANCE-453";
			    	date = "11-10-2022";
			    	price = 5000;
			    	cout << "You have successfully Booked the ticket" << endl;
			    	display();
			    }
			    else if (FlightChoice == 3)
			    {
			    	FlightName = "FRANCE-582";
			    	date = "31-12-2022";
			    	price = 5400;
			    	cout << "You have successfully Booked the ticket" << endl;
			    	display();
			    }
			    else
			    {
			    	cout << "Invalid Input !" << endl;
			    	cout << "TRY again";
			    	Booking();
			    }
		       }
		case 5 :
		       {
			    cout << "Welcome to UK Airlines" << endl;
			    cout << "Your Comfort Is our Priority. Enjoy the Journey" << endl;
			    cout << "Following are the flights" << endl;
			    cout << endl;
			    cout << "1. NAME : UK-258" << "  " << "DATE & TIME : 26-09-2022  RS.4000" << endl;
			    cout << "2. NAME : UK-453" << "  " << "DATE & TIME : 11-10-2022  RS.5000" << endl;
			    cout << "3. NAME : UK-582" << "  " << "DATE & TIME : 31-12-2022  RS.4400" << endl;
			    cin >> FlightChoice;
			    if (FlightChoice == 1)
			    {
			    	FlightName = "UK-258";
			    	date = "26-09-2022";
			    	price = 4000;
			    	cout << "You have successfully Booked the ticket" << endl;
			    	display();
		    	}
			    else if (FlightChoice == 2)
			    {
			    	FlightName = "UK-453";
			    	date = "11-10-2022";
			    	price = 5000;
			    	cout << "You have successfully Booked the ticket" << endl;
			    	display();
			    }
			    else if (FlightChoice == 3)
			    {
			    	FlightName = "UK-582";
			    	date = "31-12-2022";
		     		price = 5400;
			    	cout << "You have successfully Booked the ticket" << endl;
			    	display();
			    }
			    else
			    {
			    	cout << "Invalid Input !" << endl;
			    	cout << "TRY again";
			    	Booking();
		     	}
		       }
		default :
		       {
			     cout << "INVALID INPUT !" << endl;
			     cout << "TRY AGAIN" << endl;
				 Booking();
		       }
			   
			   
		}
	}
	void Collect()
	{
		cout << "Enter flight name" << endl;
		string flname;
		cin >> flname;
		if (flname == FlightName)
		{
			display();
		}
		else
		{
			cout << "sorry you dont have any tickets booked" << endl;
			MainMenu();
		}

	}
	void display()
	{
		cout << "__________________________________" << endl;
		cout << "TICKET" << endl;
		cout << "|\t Flightname : " << FlightName << endl;
		cout << "|\t Price : " << price << endl;
		cout << "|\t Date Of Journey : " << date << endl;
		cout << "ENTER ANY KEY TO ENTER MAINMENU" << endl;
		int key;
		cin >> key;
		if (key == 0 || key > 0)
		{
			MainMenu();
		}
	}
};

int main()
{
	management manage;
	return 0;
}