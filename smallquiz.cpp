#include<iostream>
using namespace std;
int main()
{
	cout<<"                                             SO IT's JUST A SMALL QUIZ , HOPE YOU WILL ENJOY IT";
    cout<<endl<<endl;
	int n;
	cout<<"enter 1 to start the quiz OR enter 2 to stop the quiz"<<endl<<endl;
	cin>>n;
	if(n==2)
	{
	  cout<<endl<<endl<<"SORRY! YOU HAVE STOPPED THE QUIZ!!! ";
	}
	else if(n==1)
	{
		cout<<endl<<endl<<"SO LET's START THE QUIZ"<<endl<<endl;
	    cout<<"-----------------------------------";
	    cout<<endl<<"PLEASE READ THE INSTRUCTIONS CAREFULLY";
		cout<<endl<<"1) FOR EVERY CORRECT ANSWER YOU ARE AWARDED WITH 10 MARKS"<<endl<<"2) FOR EVERY WRONG ANSWER 1 MARK WILL BE REDUCED FROM YOUR SCORE"<<endl<<"3) FOR EACH ZONE YOU WILL HAVE 5 QUESTIONS";		
		cout<<endl<<"-----------------------------------";
		int zone=0;
		cout<<endl<<endl<<"SELECT A ZONE FOR THE QUIZ"<<endl<<endl;
		cout<<"1) SPORTS"<<endl<<"2) MOVIES"<<endl<<"3) GENERAL KNOWLEDGE"<<endl<<"4) SCIENCE"<<endl;
		cout<<endl<<endl<<"ENTER 1 FOR SPORTS QUIZ"<<endl<<"ENTER 2 FOR MOVIES QUIZ"<<endl<<"ENTER 3 FOR GENERAL KNOWLEDGE QUIZ"<<endl<<"ENTER 4 FOR SCIENCE QUIZ"<<endl<<endl;
        cin>>zone;
	    if(zone==1)
	    {
	    	int marks=0;
	    	cout<<endl<<"YOU HAVE CHOOSEN QUIZ ON SPORTS"<<endl;
	    	for(int i=0;i<5;i++)
	    	{
	    	if(i==0)
	    	{
	    		int ans=0;
	    	cout<<"1) WHICH CRICKET CAPTAIN HAS A RECORD TO WIN ALL ICC TROPHIES ?"<<endl;
	    	cout<<"1) MS DHONI"<<endl<<"2) VIRAT KOHLI"<<endl<<"3) STEVE SMITH"<<endl<<"4) FAF DU PLESSIS"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    	    cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
  	    	    marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==1)
	    	{
	    		int ans=0;
	    	cout<<"2) WHO WON 2011 ICC WORLD CUP ?"<<endl;
	    	cout<<"1) INDIA"<<endl<<"2) SRI LANKA"<<endl<<"3) SOUTH AFRICA"<<endl<<"4) WEST INDIES"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==2)
	    	{
	    		int ans=0;
	    	cout<<"3) WHICH CRICKET TEAM IS RUNNER OF 2011 WORLD CUP ?"<<endl;
	    	cout<<"1) SRI LANKA"<<endl<<"2) INDIA"<<endl<<"3) WEST INDIES"<<endl<<"4) BANGLADESH"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==3)
	    	{
	    		int ans=0;
	    	cout<<"4) WHICH TEAM IS 2011 IPL WINNERS ?"<<endl;
	    	cout<<"1) MI"<<endl<<"2) RCB"<<endl<<"3) KKR"<<endl<<"4) CSK"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==4)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==4)
	    	{
	    		int ans=0;
	    	cout<<"5) WHICH TEAM IS THE WINNERS OF IPL 2023 ? "<<endl;
	    	cout<<"1) CSK"<<endl<<"2) MI"<<endl<<"3) RCB"<<endl<<"4) RR"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
	    }
	    cout<<endl<<endl<<"YOUR TOTAL SCORE IS = "<<marks<<endl;
		cout<<endl<<endl<<"THANKS FOR PARTICIPATING IN THE QUIZ"<<endl;
		}
			    if(zone==2)
	    {
	    	int marks=0;
	    	cout<<endl<<"YOU HAVE CHOOSEN QUIZ ON MOVIES"<<endl;
	    	for(int i=0;i<5;i++)
	    	{
	    	if(i==0)
	    	{
	    		int ans=0;
	    	cout<<"1) MOVIE WITH HEROs NTR AND RAM CHARAN  ?"<<endl;
	    	cout<<"1) RRR"<<endl<<"2) KGF"<<endl<<"3) OKADU"<<endl<<"4) BAHUBALI"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    	    cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
  	    	    marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==1)
	    	{
	    		int ans=0;
	    	cout<<"2) MAIN LEAD OF BAHUBALI ?"<<endl;
	    	cout<<"1) YASH"<<endl<<"2) PRABHAS"<<endl<<"3) NTR"<<endl<<"4) RAM CHARAN"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==2)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==2)
	    	{
	    		int ans=0;
	    	cout<<"3) MAIN LEAD OF  MOVIE POKIRI ?"<<endl;
	    	cout<<"1) PRABHAS"<<endl<<"2) MAHESH BABU"<<endl<<"3) PAWAN KALYAN"<<endl<<"4) VENKATESH"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==2)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==3)
	    	{
	    		int ans=0;
	    	cout<<"4) WHO IS KNOWN AS POWER STAR IN TELUGU STATES ?"<<endl;
	    	cout<<"1) PAWAN KALYAN"<<endl<<"2) NTR"<<endl<<"3) MAHESH BABU"<<endl<<"4) NONE OF THE ABOVE"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==4)
	    	{
	    		int ans=0;
	    	cout<<"5) KGF WAS DIRECTED BY ? "<<endl;
	    	cout<<"1) PRASHANTH NEEL"<<endl<<"2) RAJAMOULI"<<endl<<"3) MANI RATNAM"<<endl<<"4) SHANKAR"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
	    }
	    cout<<endl<<endl<<"YOUR TOTAL SCORE IS = "<<marks<<endl;
		cout<<endl<<endl<<"THANKS FOR PARTICIPATING IN THE QUIZ"<<endl;
		}
			    if(zone==3)
	    {
	    	int marks=0;
	    	cout<<endl<<"YOU HAVE CHOOSEN QUIZ ON GENERAL KNOWLEDGE"<<endl;
	    	for(int i=0;i<5;i++)
	    	{
	    	if(i==0)
	    	{
	    		int ans=0;
	    	cout<<"1) INDIA IS A FEDERAL UNION COMPRISING TWENTY-EIGHT STATES AND HOW MANY UNION TERRITORIES ?"<<endl;
	    	cout<<"1) 6"<<endl<<"2) 7"<<endl<<"3) 8"<<endl<<"4) 9"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==3)
	    	{
	    	    cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
  	    	    marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==1)
	    	{
	    		int ans=0;
	    	cout<<"2) WHICH OF THE FOLLOWING IS THE CAPTAIL OF ARUNACHAL PRADESH ?"<<endl;
	    	cout<<"1) ITANAGAR"<<endl<<"2) DISPUR"<<endl<<"3) MANIPAL"<<endl<<"4) PANAJI"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==2)
	    	{
	    		int ans=0;
	    	cout<<"3) WHAT IS THE MAJOR LANGUAGE OF ANDHRA PRADESH ?"<<endl;
	    	cout<<"1) HINDI"<<endl<<"2) TELUGU"<<endl<<"3) URDU"<<endl<<"4) PANJABI"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==2)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==3)
	    	{
	    		int ans=0;
	    	cout<<"4) WHAT IS THE STATE FLOWER OF HARYANA ?"<<endl;
	    	cout<<"1) GLODEN SHOWER"<<endl<<"2) JASMINE"<<endl<<"3) ROSE"<<endl<<"4) LOTUS"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==4)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==4)
	    	{
	    		int ans=0;
	    	cout<<"5) IN WHICH STATE THE MAIN LANGUAGE IS KHASI ? "<<endl;
	    	cout<<"1) NAGALAND"<<endl<<"2) TRIPURA"<<endl<<"3) MEGHALAYA"<<endl<<"4) MIZORAM"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
	    }
	    cout<<endl<<endl<<"YOUR TOTAL SCORE IS = "<<marks<<endl;
		cout<<endl<<endl<<"THANKS FOR PARTICIPATING IN THE QUIZ"<<endl;
		}
		if(zone==4)
	    {
	    	int marks=0;
	    	cout<<endl<<"YOU HAVE CHOOSEN QUIZ Of SCIENCE"<<endl;
	    	for(int i=0;i<5;i++)
	    	{
	    	if(i==0)
	    	{
	    		int ans=0;
	    	cout<<"1) WHICH OF THE FOLLOWING GAS IS REDUCED IN THE REDUCTION PROCESS ?"<<endl;
	    	cout<<"1) OXYGEN"<<endl<<"2) HELIUM"<<endl<<"3) HYDROGEN"<<endl<<"4) CARBON"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==3)
	    	{
	    	    cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
  	    	    marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==1)
	    	{
	    		int ans=0;
	    	cout<<"2) WHICH OF THE FOLLOWING COMPOUND IS MAINLY USED IN HAND SANITIZER ?"<<endl;
	    	cout<<"1) ALDEHYDE"<<endl<<"2) ALCOHOL"<<endl<<"3) ACETIC ACID"<<endl<<"4) KETONE"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==2)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==2)
	    	{
	    		int ans=0;
	    	cout<<"3) WHAT IS THE  SI UNIT FREQUENCY ?"<<endl;
	    	cout<<"1) DIOPTER"<<endl<<"2) SECOND"<<endl<<"3) HERTZ"<<endl<<"4) METER"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==3)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==3)
	    	{
	    		int ans=0;
	    	cout<<"4) ACID TURNS BLUE LITMUS PAPER INTO WHICH COLOR ?"<<endl;
	    	cout<<"1) BLACK"<<endl<<"2) BLUE"<<endl<<"3) RED"<<endl<<"4) ORANGE"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==3)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
		    if(i==4)
	    	{
	    		int ans=0;
	    	cout<<"5) WHICH OF THE FOLLOWING GLAND IS PRESENT IN HUMAN MOUTH ? "<<endl;
	    	cout<<"1) ADRENAL"<<endl<<"2) PITUITARY"<<endl<<"3) GONADS"<<endl<<"4) SALIVARY"<<endl<<"ENTER YOUR OPTION"<<endl<<endl;
	    	cin>>ans;
	    	if(ans==1)
	    	{
	    		cout<<endl<<"CORRECT ANSWER"<<endl<<endl;
	    		marks=marks+10;
			}
			else
			{
				cout<<endl<<"WRONG ANSWER"<<endl<<endl;
				marks=marks-1;
			}
		    }
	    }
	    cout<<endl<<endl<<"YOUR TOTAL SCORE IS = "<<marks<<endl;
		cout<<endl<<endl<<"THANKS FOR PARTICIPATING IN THE QUIZ"<<endl;
		}
	}
	else
	{
		cout<<endl<<endl<<"YOU HAVE ENTERED WRONG NUMBER";
	}		
}

