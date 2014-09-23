#include <iostream>
#include <string>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{

	/* declare variables */
	cout << "declaring variables...";
	char gender = 'n';
	string name = "dummy";
	int weight = 0;
	int age = 0;
	int num = 0;
	float grams = 0.00;
	string drink = "water";

	float bac = 0;
	float bodyfluid = 0;
	float flush = 0;
	float sober = 0;
	float kg = 0;
	float maxgrams = 0;
	float timesober = 0;
	float underlimit = 0;
	char cont = 'm';
	
	/* declare-enate prototypes */
	cout << "prototyping...";

	void intimidate();
	void interrogate(char &, string &, int &, int &, string &, float &, int &);
	void manipulate(int, int, float, char, float, float &, float &, float &, float &, int, float &,float &,float &);
	void generate(string, int, char, float, int, string, float, float, float, float, float);

	

	cin.clear();
	cout << "opening up main loop..."<< endl;
	system("cls");
	

	while ((tolower(cont) != 'n'))
	{
		intimidate();
		interrogate(gender, name, weight, age, drink, grams, num);
		manipulate(weight, age, kg, gender, bodyfluid, bac, flush, sober, grams, num, maxgrams, timesober, underlimit);
		generate(name, age, gender, bac, num, drink, flush, sober, maxgrams, timesober, underlimit);

		cout << endl << "Want to try again? (y/n) > ";
		cin >> cont
			;
		if (tolower(cont) == 'y')
			cout << endl << "For some stupid reason, you turn around and drive back around the block towards the checkpoint." << endl;
	}
	
	cout << endl << "Game Over." << endl;
	system("pause");
}


void intimidate()
{
	// no real purpose for this function
	cout << endl << endl;
	cout << endl << "You are driving home from a party, and suddenly notice the tail lights";
	cout << endl << "of the car in front of you get brighter.";
	cout << endl << "You slam on the breaks and your vehicle comes to an abrupt halt.";
	cout << endl << "SKREEEEECH";
	cout << endl << endl << endl << endl;
	system("pause");
	system("cls");
	return;
}

//void    interrogate(char &,       string &,     int &,       int &,    string &,      float &,      int &)
//        interrogate(gender,       name,         weight,      age,      drink,         grams,        num);
     void interrogate(char &gender, string &name, int &weight, int &age, string &drink, float &grams, int &num)
{
	/*****************************************************************************/
	/* FUNCTION NAME: interrogate                                                */
	/* FUNCTION AUTHOR: chad                                                     */
	/* PRECONDITIONS: 							                                  */
	/* POSTCONDITIONS:				                                         	  */
	/*     																	      */
	/* asks questions 															  */
	/* 1. boy or girl  	 					modifies   char gender  		      */
	/* 2. what their name is  					modifies string   name	    	  */
	/* 3. what do you weigh 					modifies    int weight   		  */
	/* 4. how old are you 						modifies    int    age			  */
	/* 5. what were you drinking 				modifies  grams drink			  */
	/*****************************************************************************/

	/* declarations */

	age = 0;
	gender = 'n';
	weight = 0;

	int tmp = 0; /* used for input validation */
	char drinking = 'm'; /* messing with them, have they been drinking */
	int option; /* for picking options in drink menu */


	// 1.1 find out if they're a boy or a girl
	cout << endl;
	cout << "The trooper walks up to your window and taps on it with a flashlight." << endl << endl;
	cout << "'What seems to be the problem, uhhh ossifer?', you mumble as you roll it down." << endl << endl;
	cout << "The light shines directly into your eyes and says he says loudly, 'WOW!'" << endl << endl;
	cout << "'You're so ugly, I can't even tell if you're a boy or a girl!' he exclaims." << endl << endl;

	cin.clear();
	while ((tolower(gender) != 'm') && (tolower(gender) != 'f'))
	{
		cout << "Well, are you male or female?" << endl << "(m/f) > ";
		cin >> gender;
	}

	// 1.2 find out their name
	cout << "After thinking a moment he says, 'Hmm... Well then what is your first name";
	if (tolower(gender) == 'm') { cout << " son?' " << endl << endl; }
	if (tolower(gender) == 'f') { cout << " miss?' " << endl << endl; } 
	cin.clear();
	cout << "What will you tell the officer?" << endl << "> ";
	cin >> name;
	name[0] = toupper(name[0]);

	if (tolower(gender) == 'm')
	cout << endl << "He laughs and says to you, 'Hah! really? isn't " << name << " a girls name?'" << endl;
	else
	cout << "He replies, 'What kind of parent gives their little girl a name like " << name << "' ?" << endl;

	// 1.3 find out their weight 
	cout << endl << "'How much do you weigh, " << name << "?' he asks." << endl;

	while ((weight <= 0))
	{
		cin.clear();
		cout << endl << " > ";
		cin >> weight;
	//	weight = atoi(tmp);
		if (weight > 700)
		{
			cout << endl << "...yeah right. Lets try again." << endl;
			weight = 0;
		}
	}

	// 1.4 find out their age      
	cout << endl << "'You don't even look old enough to be out this late, how old are you?' says the officer." << endl << endl;
	cin.clear();
	tmp = 0;

	while ((age <= 0))
	{
		cin.clear();
		cout << "How old are you?" << endl << " > ";
		cin >> age;
		// age = atoi(tmp);
		if (age > 100)
		{
			cout << endl << "...yeah right." << endl;
			age = 0;
		}
	}
	system("cls");
		// 1.5 Find out if they have been drinking 
		cout << endl << endl << "The officer says, 'Tell me something, have you been drinking?'" << endl;
	    cin.clear();
	while ((tolower(drinking) != 'y'))
	{
		cin.clear();
		cout << endl << "Well have you?? (y/n) >";
		cin >> drinking;
		if (tolower(drinking) == 'n')
		cout << endl << "He loudly says, 'Yeah right I can smell it on you! Tell me the truth!'" << endl;
	}


	// 1.5.5 What were they drinking, anyway?  


	cout << "The officer demands to know what you were drinking:" << endl;


	cout << endl;
	cout << "		        12  oz. Regular Beer ................ 1" << endl << endl;
	cout << "		        12  oz. Light Beer .................. 2" << endl << endl;
	cout << "		         4  oz. Port Wine ................... 3" << endl << endl;
	cout << "		         4  oz. Burgundy Wine ............... 4" << endl << endl;
	cout << "		         4  oz. Rose Wine ................... 5" << endl << endl;
	cout << "		        1.5 oz. 100-Proof Vodka ............. 6" << endl << endl;
	cout << "		        1.5 oz. 100-Proof Bourbon ........... 7" << endl << endl;
	cout << "		        1.5 oz. 80-Proof Vodka .............. 8" << endl << endl;
	cout << "		        1.5 oz. 80-Proof Bourbon ............ 9" << endl << endl;
	cout << endl << endl << endl;
	cout << "Drink Option: (1-9) >";
	cin >> option;

	while (option != 1 && option != 2 && option != 3 && option != 4 && option != 5 && option != 6 && option != 7 && option != 8 && option != 9)
	{
		cout << endl << "'Quit messing around! What were you drinking?', he demands." << endl << endl;
		cout << "		 Drink Option: (1-9)" << endl;
		cin >> option;
	}

	switch (option)
	{
	case 1:
		grams = float(13.6);
		drink = "regular beers";
		break;

	case 2:
		grams = float(11.3);
		drink = "light beers";
		break;

	case 3:
		grams = float(16.4);
		drink = "Port Wines";
		break;

	case 4:
		grams = float(10.9);
		drink = "Burgundy Wines";
		break;

	case 5:
		grams = float(10.0);
		drink = "4 oz. Rose Wines";
		break;

	case 6:
		grams = float(16.7);
		drink = "100-Proof Vodka shots";
		break;

	case 7:
		grams = float(16.7);
		drink = "100-Proof Bourbon shots";
		break;

	case 8:
		grams = float(13.4);
		drink = "80-Proof Vodka shots";
		break;

	case 9:
		grams = float(13.4);
		drink = "80-Proof Bourbon shots";
		break;

	default:
		grams = float(0);
		drink = "water";
		break;

	}

	cout << endl << endl;
	cout << "So you were drinking " << drink << "? " << endl;
	cout << "How many did you have?" << endl << "> ";
	cin >> num;

	while (num < 0)
	{
		cout << endl << endl << "The officer looks sternly at you over his aviator sunglasses," << endl;
		cout << "'Don't mess with me, punk. I eat peices of shit like you for breakfast.'" << endl << endl << endl;
		cout << "Number of Drinks Taken: >";
		cin >> num;
	}

	cout << endl;
	cout << "'Here, blow into this', says the officer as he hands you a breathalizer" << endl;
	cout << "mouthpeice." << endl;
	system("pause");
	
	return;
}

// void manipulate(int       , int    , float   , char       , float          , float &   , float &     , float &     , float &  , int, float &,  float &,   float &);
// call manipulate(weight    , age,     kg,       gender,      bodyfluid,       bac,        flush,        sober,        grams,     num, maxgrams, timesober, underlimit)
void manipulate(int weight, int age, float kg, char gender, float bodyfluid, float &bac, float &flush, float &sober, float &grams,int num, float &maxgrams, float &timesober, float &underlimit)
{

	// 2.1 lbs_to_kg = weight/2.2046                                          convert us to metric weight
	// 2.2 bodyfluid = conversionfactor * lbs_to_kg                           amount of fluid in body conversionfactor from age&gender
	// 2.3 BAC       =  ( (grams * num   ) / (10 * bodyfluid) );              blood alcohol content
	// 2.4 flush     =    (grams / 12)                                        will be completely sober in this many hours
	// 2.5 maxgrams    =    (0.08 * bodyfluid)                                can have this much alcohol and be legal to drive.        
	// 2.6 underlimit    =  ( maxgrams / 12)                                  will be legal less time
	// 2.7 timesober    =  ( flush - underlimit )                             result is number of hours until sober.

	// 2.1 Calculate lbs to kg
	cout << endl << "You blow into the device." << endl;
	kg = float (weight / 2.2046);


	// 2.2 Calculate bodyfluid
	cout << "The machine beeps.\a" << endl;
	if (tolower(gender) == 'm')
	{
		if (age >= 18 && age <= 40)
			bodyfluid = float (0.61 * (weight / 2.2046));
		if (age > 40 && age <= 60)
			bodyfluid = float (0.61 * (weight / 2.2046));
		if (age > 60)
			bodyfluid = float (0.51 * (weight / 2.2046));
	}

	if (tolower(gender) == 'f')
	{
		if (age >= 18 || age <= 40)
			bodyfluid = float (0.52 * (weight / 2.2046));
		if (age > 40 && age <= 60)
			bodyfluid = float (0.52 * (weight / 2.2046));
		if (age > 60)
			bodyfluid = float (0.46 * (weight / 2.2046));
	}

	// 2.3 Calculate BAC
	cout << "'Blow into it again. Harder this time, I didn't get a good reading.' says the trooper.'" << endl;
	bac = float((grams * num) / (10 * bodyfluid));
		
	system("pause");
	
	// 2.4 Calculate Flush Time
	flush = float((num * grams) / 12);
		
	// 2.5    can have this much alcohol and be legal to drive.        
	maxgrams = float(0.08 * bodyfluid);
	
	// 2.6                                   will be legal less time
	underlimit = float(maxgrams / 12);
	
	// 2.7                              result is number of hours until sober.
	timesober = float(flush - underlimit);

	cout << endl << endl << "The machine beeps twice." << endl << endl;
	cout << "\a\a";
	system("pause");

	return;
}

// void generate(string,      int,     char,        float,     int,     string,       float,       float,       float,          float,           float);
// call generate(name,        age,     gender,      bac,       num,     drink,        flush,       sober,       maxgrams,       timesober,       underlimit)
   void generate(string name, int age, char gender, float bac, int num, string drink, float flush, float sober, float maxgrams, float timesober, float underlimit)
{

	 // PRECONDITION: requires name, gender, age, 
	 // POSTCONDITION: return contol to main function

	   // 3.1 are they legal to drive?
	   // 3.2 are they dead?
	   // 3.3 are they in a coma?
	   // 3.4 how drunk were they?

	   
	   system("cls");

	   // 3.1 are they legal to drive?
	   if (bac < 0.08)
	   {
		   cout << "Hey, this thing says your BAC is " << setprecision(2) << bac << endl;
		   cout << "I guess you're legal to drive, you can carry on about your business." << endl;
		   cout << "Please be safe." << endl;
		   system("pause");
		   return;
	   }

	   // 3.2 are they dead?
	   if (bac >= 0.45)
		{
		cout << name << " you drank" << num << " " << drink << ".";
		cout << " After that, your bac was:" << bac << endl;
		cout << " You died. No one attends your funeral.";
		return;
		}

	   // 3.3 are they in a coma?
	if (bac > 0.35 && bac <= 0.50)
	{
		cout << "You awaken from a coma in the hospital. Handcuffed to your bed." << endl;
		cout << "You told the cops that you had " << num << " " << drink << ", and then crapped your pants.";
		cout << "After blowing into the respirator you blacked out." << endl;
		cout << "The nurse tells you that you blew a " << setprecision(2) << bac << ", and are lucky to be alive." << endl << endl;
		
		cout << "You spend the next seven years in federal prison doing hard time, convicted of manslaughter during a hit and run." << endl;
		cout << "By the time you get out, you are able to do 300 pushups without even breaking a sweat." << endl << endl;
		return;
	}
	

	
	// 3.4 how drunk were they?
	cout << endl << endl;
	cout << "You made it into the newspaper! Congratulations!" << endl;
	cout << "NEWS RELEASE" << endl;

	cout << "Fulton, MO - FultonPD and the Missouri State Highway Patrol conducted a DUI" << endl;
	cout << "checkpoint at Hickman and 7th street between the hours of 9:30 and 3:30am." << endl;

	cout << name << ", who is a " << age << " year old ";
	if (tolower(gender) == 'm') { cout << "male"; }
	if (tolower(gender) == 'f') { cout << "female"; }
    cout << " was arrested on suspicion of driving" << endl;
	cout << "while intoxicated after failing a field sobriety test." << endl;
	cout << endl;
	
	cout << name << setprecision(2) << " had a blood alcohol content of " << bac << " which is " << float(bac-0.08) << " over the legal limit." << endl;
	cout << name << " was overheard yelling while being pulled out of";
	if (tolower(gender) == 'm') { cout << " his "; }
	if (tolower(gender) == 'f') { cout << " her "; }
	cout << "vehicle," << endl;

	cout << "'This is crazy! I only had " << num << " " << drink << "!'"<< endl;
	cout << endl;
	
	cout << "The human body can process approximately 12 grams of alcohol per hour." << endl;
	cout << "After " << setprecision(3) << flush;
	if (tolower(gender) == 'm') { cout << " he "; }
	if (tolower(gender) == 'f') { cout << " she "; }
	cout << "might have possibly eliminated all of the alcohol." << endl << endl;

	cout << "A spokesman for the force said, 'It really is a shame, had that" << endl;
	cout << "individual only waited ";
	cout << setprecision(2) << timesober << " hours before driving they probably could have" << endl;
	cout << "been able to pass right through our checkpoint, instead they get to go to jail.'" << endl << endl;
	
	cout << "The subject was probably experiencing:" << endl;
	if (bac>0.01 && bac < 0.05)
	{
		cout << "Subclinical intoxication, and their behavior was nearly normal" << endl;
	}
	else if (bac>0.03 && bac < 0.12)
	{
		cout << "Mild euphoria, they were sociable and talkative. And was experencing increased self-confidence and decreased inhibitions. Unable to pay attention, loss of judgment and control. and their sensory-motor skills were impaired." << endl;
	}
	else if (bac>0.09 &&bac< 0.25)
	{
		cout << "Excited mood, and emotional instability. Suffering from  loss of critical judgment, impairment of perception, memory and comprehension decreased. Increased reaction time, reduced visual acuity. Loss of peripheral vision and glare recovery. Sensory-motor incoordination. Impaired balance and drowsiness." << endl;
	}
	else if (bac>0.18 && bac< 0.30)
	{
		cout << "Confusion, disorientation, mental confusion, dizziness exaggerated emotional states, disturbances of vision and of perception of color, form, motion and dimensions Increased pain threshold Increased muscular incoordination; staggering gait; slurred speech apathy, lethargy " << endl;	}
	else if (bac>0.25 &&bac< 0.40)
	{
		cout << "In a Stupor along with general inertia; approaching loss of motor functionsm, and narkedly decreased response to stimuli Marked muscular incoordination; inability to stand or walk Vomiting; incontinence Impaired consciousness; sleep." << endl;
	}
	return;

}


