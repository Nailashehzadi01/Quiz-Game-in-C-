#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

int main()
{
	int x=0;
	string choice;
	char ch1[50],ch2;
	
	
		HANDLE console_color;
	console_color=GetStdHandle(STD_OUTPUT_HANDLE);
	for(int P=1;P<50;P++)
	SetConsoleTextAttribute(console_color,P);
	
	
	do
	{
	cout<<"	 Enter Your Name"<<endl;
	cin.getline(ch1,50);
	cout<<"		WELLCOME"<<ch1 <<ch1<<endl;
     cout<<"*******************************QUIZ GAME********************************"<<endl;
	cout<<"GAME START"<<endl;
	cout<<"	What is called as ' THE HOLY LAND'?   \n a.Makkah b.Mathura c.Mecca"<<endl;
	cin>>ch2;
	system("cls");
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Good Job.Your score is "<<x<<endl;

	}
	else
	cout<<"Sorry wrong answer."<<endl;
cout<<"Question # 02"<<endl;

	cout<<"	What is called as ' THE ROOF OF THE WORLD'?\n  a.Nepal b.Rome c.Tibet"<<endl;
	cin>>ch2;
	system("cls");
	if(ch2=='c')
	{
		x=x+10; 
		cout<<"Good Job. Your score is "<<x<<endl;

	}
	else
	cout<<"Sorry wrong answer."<<endl;

cout<<"Question # 03"<<endl;
	

	cout<<"What is called as ' THE LAND OF RISING SUN'?\n  a.Chicago b.Japan c.Tibet "<<endl;
	cin>>ch2;
	system("cls");
	if(ch2=='b')
	{
		x=x+10;
		cout<<"Good Job! Your score is= "<<x<<endl;


	}
	else
	cout<<"Sorry wrong answer."<<endl;

cout<<"Question # 04"<<endl;
	system("cls");
	cout<<"What is capital of hawai?\n  a.Chicago b.honololo c.Africa "<<endl;
	cin>>ch2;
	system("cls");
	if(ch2=='b')
	{
		x=x+10;
		cout<<"great!Your score is= "<<x<<endl;


	}
	else
	cout<<"Sorry wrong answer."<<endl;

cout<<"Question # 05"<<endl;
	
	cout<<"What is national animal of pakistan '?\n  a.marhoor b.cow c.fox "<<endl;
	cin>>ch2;
	system("cls");
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Great!Your score is= "<<x<<endl;


	}
	else
	cout<<"Sorry wrong answer."<<endl;

cout<<"Question # 06"<<endl;

	cout<<"How many bones are in humman body'? \n a.two hundred and six  b.fifty c.hundred "<<endl;
	cin>>ch2;
	system("cls");
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Great!Your score is= "<<x<<endl;


	}
	else
	cout<<"Sorry wrong answer."<<endl;

cout<<"Question # 07"<<endl;

	cout<<"What is the name of current president of america ? \n a.Trump b.Youman c.Jobidan "<<endl;
	cin>>ch2;
	system("cls");
	if(ch2=='c')
	{
		x=x+10;
		cout<<"\ngreat!Your score is= "<<x<<endl;


	}
	else
	cout<<"Sorry wrong answer."<<endl;

cout<<"Question # 08"<<endl;
	

	cout<<"What is called as ' THE LAND OF WHITE ELEPHANTS'? \n a.Bangladesh b.Thailand c.India"<<endl;
	cin>>ch2;
	system("cls");
	if(ch2=='b')
	{
		x=x+10;
		cout<<"Great!Your score is "<<x<<endl;


	}
	else
	cout<<"Sorry wrong answer."<<endl;

cout<<"Question # 09"<<endl;


	cout<<"What is called as ' THE CITY OF SEVEN HILLS'?\n a.Rome b.Nilgiri Hills c.Tibet"<<endl;
	cin>>ch2;
	system("cls");
	if(ch2=='a')
	{
		x=x+10;
		cout<<"Great!Your score is= "<<x<<endl;


	}
	else
	cout<<"Sorry wrong answer."<<endl;

cout<<"Question # 10"<<endl;

	cout<<"	What is called as ' THE DARK CONTIENENT'?\n  a.Asia b.Australia c.Africa"<<endl;
	cin>>ch2;
	system("cls");
	
	if(ch2=='c')
	{
		x=x+10;
		cout<<"great!Your score is= "<<x<<endl;

	}
	else
	cout<<"\nSorry wrong answer."<<endl;
	
	
	cout<<"*******************************Achievement Unlocked: Unveiling Your Quiz Mastery!*********************************"<<endl;

	if(x==100)
	cout<<"No cheating...... You have done this earlier also."<<endl;
	if(x==90)
	cout<<"You are extremely intelligent .Your Score is 90"<<endl;
	if(x==80)
	cout<<"You are intelligent .Your Score is 80"<<endl;
	if(50==x||x==70||x==60)
	cout<<"You are average Your Score is "<<x<<"  "<< "Better luck next time"<<endl;
	else if(x<=40)
	cout<<"No use........ Not even 5 questions right"<<endl;
	cout<<"\nplay again or  quit? "<<endl;
	cin>>choice;
	system("cls");
	

}
while(choice=="play");

	return 0;
}
