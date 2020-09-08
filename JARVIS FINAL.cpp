#include<iostream>                 //LIBRARY/HEADER FILES
#include<stdlib.h>
#include<windows.h>
#include<conio.h>                 //LIBRARY/HEADER FILES
#include<iomanip>
#include<string>
#include <ctime>
using namespace std;
void maindoor();
void TIME();                 //FUNCTION DECLARATIONS
void masterprotocols();
void lightcheck();
void musiccheck();
void curtaincheck();
inline void greet();
void layout();
void corridor();
void master_room();
void bathroom();                  //FUNCTION DECLARATIONS
void kitchen();
void drawing_room();
void guest_room();                 //FUNCTION DECLARATIONS
void exit();

main()                            //MAIN BODY
{
    maindoor();
}
inline void TIME()   ///time function starts
{
            // current date/time based on current system
            time_t now = time(0);
                // convert now to string form
            char* dt = ctime(&now);
            cout << " \t \t |   date and time : " << dt << endl;
}

void maindoor()
{
    char choices;      // :1: enter by key, ;2; enter by password{3 tires-failure leads to authentication codes),
    string master_pass= "asdfg!@#$%12345";           //;3; enter using masterpassword
    string ch;
    string pass= "0727";
    int attempts= 1;
    string authentication_code[6]= {"**","135790","021345","925123","910235","461626"};
input_methods:
    cout<<"\t | ^^|k|::insert key \t | ^^|p|::password \t | ^^|a|::authentication code  \t | ^^|m|::master pass ;"<<endl;
    cin>>choices;

    switch(choices)
    {
    case'm':
        char chr;
        cout<< " \t \t \t  \\\\ Enter  your master password ///////  "<<endl;//entering by using master pass
        chr = _getch();
        while (chr!=13)
        {
            pass.push_back(chr);
            cout<< '*' ;
            chr = _getch();
        }
        if(master_pass == "asdfg!@#$%12345")
        {
            cout<<endl;
            cout<<"PROCESSING ..."<<endl;
            Beep(100,400);
            cout<<"\t \t \t Access Granted ";
            Beep(300,900);
            Beep(523,900);
            cin.get();
            cout<<" \t \t \t WELCOME BACK TO HOME MUNEEB. JARVIS AT YOUR SERVICE"<<endl<<endl;
            masterprotocols();
            break;
        }
        else
        {
            cout<<"\t \t Wrong Entry "<<endl;
            cout<<"\t  !!!!!!!!!! NO ACCESS !!!!!!! \t \t \t "<<endl;
            Beep(900,700);
            Beep(892,700);
            cin.get();
            goto input_methods;
        }
    case 'k':                              //MANUAL ENTRY USING ENCRYPTED KEY2
        cout<<" {you have selected to insert your encrypted key  as your breaching Method }"<<endl;
        cout<<"{THE KEY HOLE SHOWS UP}"<<endl;    //user enters the encrypted key manually..
        cout<<"Scanning key ..."<<endl;
        Beep(100,400);
        cout<<"PROCESSING ..."<<endl;
        Beep(100,400);
        Beep(400,900);
        cout<<" \t {display shows }"<<endl;
        cout<<" \t WELCOME BACK TO HOME SIR"<<endl; //display
        greet();
        break;

    case 'p':   //case::entry by user password
        cout<<" {you have selected Password as your breaching Method }"<<endl;
        cout<<" \t \t{ JARVIS SYSTEMS DISPLAY }"<<endl<<endl;   // ENTRY BY INPUTTING PASSWORD
        cout<<"\t \t ///PLEASE ENTER YOUR PASSWORD  :: ->";  //hidden keyboard shows up
        cin>>ch;
        while(ch!="0727" && attempts<=2)
        {
            cout<<"\t \t \t /////Access Denied\\\\\ "<<endl;
            Beep(900,600);
            cout<<"\t \t \t //////Try Again\\\\\\ -->";
            cin>>ch;
            cin.get();                                          //password loop
            attempts++;
            cout<<"attempts"<<attempts<<endl<<endl;
        }
        if (ch == "0727" && attempts <=3)                    //correct password
        {
            cout<<"PROCESSING ..."<<endl;
            Beep(100,400);
            cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
            Beep(400,900);
            cout<<"\t \t WELCOME BACK TO HOME SIR \t \t "<<endl;
            Beep(300,900);
            cin.get();
            greet();
            break;
        }
        else                                                  //password != correct
        {
            cout<<"\t \t Wrong Entry "<<endl;
            cout<<"\t \t USE THE AUTHENTICATION CODE INSTEAD SENT TO YOUR JARVIS MOBILE APP "<<endl;
            string authentication_input="";
            cout<<"\t \t \t //ENTER YOUR AUTHENTICATION CODE HERE -->  ";
            cin>>authentication_input;
            if(authentication_input==authentication_code[1])  //authentication code if password could not be accessed
            {
                cout<<" \t PROCESSING ..."<<endl;
                Beep(100,400);
                cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
                Beep(400,900);
                Beep(400,900);
                greet();
            }
            else if(authentication_input==authentication_code[2])
            {
                cout<<"PROCESSING ..."<<endl;
                Beep(100,400);
                cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
                Beep(400,900);
                Beep(400,900);
                greet();
            }
            else if(authentication_input==authentication_code[3])
            {
                cout<<"PROCESSING ..."<<endl;
                Beep(100,400);
                cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
                Beep(400,900);
                Beep(400,900);
                greet();
            }
            else if(authentication_input==authentication_code[4])
            {
                cout<<"PROCESSING ..."<<endl;
                Beep(100,400);
                cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
                Beep(400,900);
                Beep(400,900);
                greet();
            }
            else if(authentication_input==authentication_code[5])
            {
                cout<<"PROCESSING ..."<<endl;
                Beep(100,400);
                cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
                Beep(400,900);
                Beep(400,900);
                greet();
            }
            else if(authentication_input==authentication_code[6])
            {
                cout<<"PROCESSING ..."<<endl;
                Beep(100,400);
                cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
                Beep(400,900);
                Beep(400,900);
                greet();
            }
            else
            {
                cout<<"\t \t \t /////Access Denied\\\\\ "<<endl;
                cout<<"\t \t \t //////Try Again\\\\\\"<<endl;
                goto input_methods;
            }
            break;
        }

    case 'a':  //case::entry by authentication
        cout<<" {you have selected authentication code as your breaching Method }"<<endl;
        cout<<" \t \t{ JARVIS SYSTEMS DISPLAY }"<<endl<<endl;   // ENTRY BY INPUTTING PASSWORD
        cout<<"\t \t \t ///AUTHENTICATION CODE ::";
        string authentication_input="";
        cout<<"\t  ///PLEASE ENTER YOUR AUTHENTICATION CODE -->";
        cin>>authentication_input;
        if(authentication_input==authentication_code[1])
        {
            cout<<"PROCESSING ..."<<endl;
            Beep(100,400);
            cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
            Beep(400,900);
            Beep(400,900);
            greet();
        }
        else if(authentication_input==authentication_code[2])
        {
            cout<<"PROCESSING ..."<<endl;
            Beep(100,400);
            cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
            Beep(400,900);
            Beep(400,900);
            greet();
        }
        else if(authentication_input==authentication_code[3])
        {
            cout<<"PROCESSING ..."<<endl;
            Beep(100,400);
            cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
            Beep(400,900);
            Beep(400,900);
            greet();
        }
        else if(authentication_input==authentication_code[4])
        {
            cout<<"PROCESSING ..."<<endl;
            Beep(100,400);
            cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
            Beep(400,900);
            Beep(400,900);
            greet();
        }
        else if(authentication_input==authentication_code[5])
        {
            cout<<"PROCESSING ..."<<endl;
            Beep(100,400);
            cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
            Beep(400,900);
            Beep(400,900);
            greet();
        }
        else if(authentication_input==authentication_code[6])
        {
            cout<<"PROCESSING ..."<<endl;
            Beep(100,400);
            cout<<"\t \t \t /////Access Granted\\\\ "<<endl;
            Beep(400,900);
            Beep(400,900);
            greet();
        }
        else
        {
            cout<<"\t \t \t /////Access Denied\\\\\ "<<endl;
            cout<<"\t \t \t //////Try Again\\\\\\"<<endl;
            goto input_methods;
        }
        break;
    }
}
               //VOID MAINDOOR() ends here
void masterprotocols()  //VOID MASTERPROTOCOLS() ends here
{
masterprotocols:

    cout<<"{This protocol can only be achieved when the user enters the master password that is known by the master alone. \n";
    cout<<" when the user enters using the master key, the Jarvis will understand who entered. the jarvis will call the \n";
    cout<<" user by name. There can be distinct master passwords for different members of the house. Each member can  \n";
    cout<<" customize Jarvis from the Jarvis app, that will be made available in the future in sha Allah. hence the jarvis \n";
    cout<<" can be tailored based for different users, accordingly. \n ";
    cout<<" In the following program, we are assuming that the user has set his Jarvis to brief him as he gets back home. \n ";
    cout<<" the lights turn on  in the corridor. }"<<endl;
    string user_choice;
    string options="";
    string user_says="";
    string message="";
    bool musicswitch = 0;
// {this protocol can only be achieved when the user enters the master password that is known by the master alone. \n";
// when the user enters using the master key, the jarvis will understand who entered. the jarvis will call the user by name \n";
// there can be distinct master passwords for different members of the house. Each member can customise Jarvis from the Jarvis \n";
//app that will be made available in the future in sha Allah. hence the jarvis can be tailored based of the users, accordingly\n";
//in the followin program, we are assuming that the user has asked Jarvis to brief him as he gets back home. ";
    cout<< "\t \t     ";
    TIME();
    cout<<endl;
    cout<<"\t {being displayed}\t "<<"\t| 26*C || 32*C"<<endl<<endl;//on -display
    cout<<"\t \t ///-{JARVIS SPEAKS TO MUNEEB : }"<<endl;
    cout<<"\t you have 3 missed calls from Shahzaib and Muqeet. 1 missed call from an unknown number."<<endl;
    cout<<"\t Do you want me to get back to them ? "<<endl;
    cout<< " { ?yes? or ?no? } " <<endl;
    cout<<" ___--> ";
    cin>>user_choice;
    if (user_choice == "yes")     //start of if-else statements for the follow back option
    {
        cout<<" \t do you want me to message them or call them ? "<<endl;  // if-else statements for calls or message
        cin>>options;
        if(options=="message" || options=="MESSAGE" || options=="MESSAGE THEM" || options=="message them")
        {
            cout<<"\t who do you want me to MESSAGE, Muneeb ? "<<endl;              //message option
            cout<<" SHAHZAIB AHMED ? || MUQEET UET || UNKNOWN NUMBER   -->  ";
            cout<<" ___--> ";
            cin>>options;
            if(options=="SHAHZAIB" || options=="SHAHZAIB AHMAD" || options=="number 1" || options=="shahzaib" || options=="shahzaib ahmad")
            {
                cout<<" \t say your message after the beep .."<<endl;
                cout<<" NO SPACES.(if we had used *getline(cin,variable name),* we would take a string, but rn, we are taking words, without spaces)"<<endl;
                cout<<" ___--> ";
                Beep(300,900);
                cin>>message;
                cout<<" \t your message is :: -->  "<<message<<endl;
                cout<<" \t do you want to send it or change it"<<endl;            //messaging shahzaib
                cout<< " { ?send? or ?change? } ";
                cout<<" ___--> ";
                cin>>options;
                if(options=="send it" || "send" || "SEND")
                {
                    cout<<" \t message sent to SHAHZAIB AHMAD "<<endl;

                }
                else if(options=="change it" || "change" || "CHANGE")
                {
                    cout<<" \t say your message after the beep ..";
                    cout<<" ___--> ";
                    Beep(300,900);
                    cin>>message;
                    cout<<" \t your message is :: "<<message<<endl;
                    cout<<" \t do you want to send it or change it"<<endl;
                    cin>>options;
                    if(options=="send it" || "send" || "SEND")
                    {
                        cout<<" \t message sent to Shahzaib ahmad "<<endl;
                    }
                    else if(options=="change it" || "change" || "CHANGE")
                    {
                        cout<<" \t say your message after the beep ..";
                        cout<<" ___--> ";
                        Beep(300,900);
                        cin>>message;
                        cout<<" \t your message is :: "<<message<<endl;
                        cout<<" \t do you want to send it or change it"<<endl;
                        cout<< " { ?send? or ?change? } ";
                        cout<<" ___--> ";
                        cin>>options;
                        if(options=="send it" || "send" || "SEND")
                        {
                            cout<<" message sent to shahzaib ahmad "<<endl;
                        }
                        else if(options=="change it" || "change" || "CHANGE")
                        {
                            cout<<" \t say your message after the beep ..";
                            cout<<" ___--> ";
                            Beep(300,900);
                            cin>>message;
                            cout<<" \t your message is :: "<<message<<endl;
                            cout<<" \t message sent to shahzaib ahmad "<<endl;
                        }
                    }

                }

            }
            else if(options=="MUQEET" || options=="MUQEET UET" || options=="number 2" || options=="muqeet" || options=="muqeet uet")
            {
                cout<<" \t say your message after the beep ..";
                cout<<" NO SPACES.(if we had used *getline(cin,variable name),* we would take a string, but rn, we are taking words, without spaces)"<<endl;
                Beep(300,900);
                cin>>message;
                cout<<" \t your message is :: "<<message<<endl;
                cout<<" \t do you want to send it or change it"<<endl;         //messaging muqeet
                cout<< " { ?send? or ?change? } ";
                cout<<" ___--> ";
                cin>>options;
                if(options=="change it" || "change" || "CHANGE")
                {
                    cout<<" \t say your message after the beep ..";
                    cout<<" ___--> ";
                    Beep(300,900);
                    cin>>message;
                    cout<<" \t your message is :: "<<message<<endl;
                    cout<<" \t do you want to send it or change it"<<endl;
                    cin>>options;
                    if(options=="send it" || "send" || "SEND")
                    {
                        cout<<" \t message sent to muqeet uet "<<endl;
                    }
                    else if(options=="change it" || "change" || "CHANGE")
                    {
                        cout<<" \t say your message after the beep ..";
                        cout<<" NO SPACES.(if we had used *getline(cin,variable name),* we would take a string, but rn, we are taking words, without spaces)";
                        cout<<" ___--> ";
                        Beep(300,900);
                        cin>>message;
                        cout<<" \t your message is :: "<<message<<endl;
                        cout<<" \t sending message ... "<<endl;
                        cout<<" \t message sent to Muqeet. "<<endl;


                    }

                }
                else if(options=="send it" || "send" || "SEND IT")
                {
                    cout<<" \t message sent to MUQEET UET "<<endl;
                }

            }
            else if(options=="UNKNOWN" || options=="UNKNOWN NUMBER" || options=="number 3" || options=="unknown" || options=="unknown number")
            {
                cout<<" \t say your message after the beep ..";
                cout<<" NO SPACES.(if we had used *getline(cin,variable name),* we would take a string, but rn, we are taking words, without spaces)"<<endl;
                cout<<" ___--> ";
                Beep(300,900);
                cin>>message;
                cout<<" \t your message is :: "<<message<<endl;
                cout<<" \t do you want to send it or change it"<<endl;       //messaging unknown
                cout<< " { ?send? or ?change? } ";
                cout<<" ___--> ";
                cin>>options;
                if(options=="send it" || "send" || "SEND")
                {
                    cout<<" \t message sent to UNKNOWN NUMBER "<<endl;
                }
                else if(options=="change it" || "change" || "CHANGE")
                {
                    cout<<" \t say your message after the beep .."<<endl;
                    cout<<" ___--> ";
                    Beep(300,900);
                    cin>>message;
                    cout<<" \t your message is :: "<<message<<endl;
                    cout<<" \t do you want to send it or change it"<<endl;
                    cin>>options;
                    if(options=="send it" || "send" || "SEND")
                    {
                        cout<<" \t message sent. "<<endl;
                    }
                    else if(options=="change it" || "change" || "CHANGE")
                    {
                        cout<<" \t say your message after the beep .."<<endl;
                        cout<<" ___--> ";
                        Beep(300,900);
                        cin>>message;
                        cout<<" \t your message is :: "<<message<<endl;
                        cout<<" \t SENDING MESSAGE ..."<<endl;
                        cout<<" \t message sent. "<<endl;

                    }


                }

            }

        }

        else if(options=="call" || options=="CALL" || options=="CALL THEM" || options=="call them" ) //call option
        {
            cout<<" \t who do you want me to CALL, Muneeb ? "<<endl;
            cout<<" SHAHZAIB AHMED ? || MUQEET UET || UNKNOWN NUMBER   -->";
            cin>>options;
            if(options=="SHAHZAIB" || options=="SHAHZAIB AHMAD" || options=="number 1" || options=="shahzaib" || options=="shahzaib ahmad")
            {
                cout<<" \t record your message after the beep .."<<endl;
                cout<<" NO SPACES.(if we had used *getline(cin,variable name),* we would take a string, but rn, we are taking words, without spaces)"<<endl;
                cout<<" ___--> ";
                Beep(300,900);
                cin>>message;
                cout<<" \t the message you recorded is :: "<<message<<endl;
                cout<<" \t do you want me to send this recording or change it"<<endl;  //voice mail to shahzaib
                cout<< "\t { ?change ? or  ?send?};";
                cout<<" ___--> ";
                cin>>options;
                if(options=="send it" || "send" || "SEND")
                {
                    cout<<" \t recording sent to SHAHZAIB AHMAD "<<endl;
                }
                else if(options=="change it" || "change" || "CHANGE")
                {
                    cout<<" \t record your message after the beep .."<<endl;
                    cout<<" ___--> ";
                    Beep(300,900);
                    cin>>message;
                    cout<<" \t your message is :: "<<message<<endl;
                    cout<<" \t do you want to send it or change it "<<endl;
                    cin>>options;
                    if(options=="send it" || "send" || "SEND")
                    {
                        cout<<" \t recording sent to shahzaib ahmad "<<endl;
                    }
                    else if(options=="change it" || "change" || "CHANGE")
                    {
                        cout<<" \t record your message after the beep .."<<endl;
                        cout<<" ___--> ";
                        Beep(300,900);
                        cin>>message;
                        cout<<" \t your message is :: "<<message<<endl;
                        cout<<" \t sending your recording "<<endl;
                        cout<<" \t recording sent "<<endl;

                    }

                }


            }
            else if(options=="MUQEET" || options=="MUQEET UET" || options=="number 2" || options=="muqeet" || options=="muqeet uet")
            {
                cout<<" \t say your message after the beep .."<<endl;
                cout<<" NO SPACES.(if we had used *getline(cin,variable name),* we would take a string, but rn, we are taking words, without spaces)"<<endl;
                cout<<" ___--> ";
                Beep(300,900);
                cin>>message;
                cout<<" \t your message is :: "<<message<<endl;
                cout<<" \t do you want to send it or change it"<<endl;   //voice mail to muqeet
                cout<< " { ?send? or ?change? } ";
                cout<<" ___--> ";
                cin>>options;
                if(options=="send it" || "send" || "SEND")
                {
                    cout<<" \t message sent to muqeet uet "<<endl;
                }
                else if(options=="change it" || "change" || "CHANGE")
                {
                    cout<<" record your message after the beep .."<<endl;
                    cout<<" ___--> ";
                    Beep(300,900);
                    cin>>message;
                    cout<<" \t your message is :: "<<message<<endl;
                    cout<<" \t do you want to send it or change it"<<endl;
                    cin>>options;
                    if(options=="send it" || "send" || "SEND")
                    {
                        cout<<" \t message sent to muqeet uet "<<endl;
                    }
                    else if(options=="change it" || "change" || "CHANGE")
                    {
                        cout<<" \t record your message after the beep .."<<endl;
                        cout<<" ___--> ";
                        Beep(300,900);
                        cin>>message;
                        cout<<" \t your message is :: "<<message<<endl;
                        cout<<" \t sending your recording ..."<<endl;
                        cout<<" \t recording sent to muqeet uet "<<endl;

                    }


                }

            }
            else if(options=="UNKNOWN" || options=="UNKNOWN NUMBER" || options=="number 3" || options=="unknown" || options=="unknown number")
            {
                cout<<" \t record your message after the beep .."<<endl;
                cout<<" NO SPACES.(if we had used *getline(cin,variable name),* we would take a string, but rn, we are taking words, without spaces)"<<endl;
                cout<<" ___--> ";
                Beep(300,900);
                cin>>message;
                cout<<" \t your message is :: "<<message<<endl;
                cout<<" \t do you want to send it or change it"<<endl; //voice mail to unknown
                cout<< " { ?send? or ?change? } ";
                cout<<" ___--> ";
                cin>>options;
                if(options=="send it" || "send" || "SEND")
                {
                    cout<<" \t message sent to UNKNOWN NUMBER "<<endl;
                }
                else if(options=="change it" || "change" || "CHANGE")
                {
                    cout<<" \t record your message after the beep .."<<endl;
                    cout<<" ___--> ";
                    Beep(300,900);
                    cin>>message;
                    cout<<" \t your message is :: "<<message<<endl;
                    cout<<" \t do you want to send it or change it"<<endl;
                    cin>>options;
                    if(options=="send it" || "send" || "SEND")
                    {
                        cout<<" \t message sent to UNKNOWN NUMBER "<<endl;
                    }
                    else if(options=="change it" || "change" || "CHANGE")
                    {
                        cout<<" \t record your message after the beep .."<<endl;
                        cout<<" ___--> ";
                        Beep(300,900);
                        cin>>message;
                        cout<<" \t your message is :: "<<message<<endl;
                        cout<<" \t sending the recording "<<endl;
                        cout<<" \t message sent to UNKNOWN NUMBER "<<endl;

                    }


                }

            }

        }
    }
    else if(user_choice=="no")
    {
        cout<<" ok "<<endl;
    }                                   // end of if-else statements for the follow back option

    cout<<" \t you had a visitor at 3:24 PM, "<<endl;  //jarvis talking to muneeb
    cout<<" \t you have no schedules for today. "<<endl;
    cout<<" \t do you want me to make coffee "<<endl;   //coffee
    cout<<" \t { ?yes? or ?no? }"<<endl;
    cout<<" ___--> ";
    cin>>user_choice;
    if(user_choice=="yes")
    {
        cout<<" \t coffee will be ready in 2 minutes "<<endl;
    }
    else if(user_choice=="no")
    {
        cout<<" \t ok "<<endl;
    }
    cout<<" \t {awaiting commands ... } ";
    cout<<" \t { try saying music, ... } "<<endl;
    cin>>user_says;


    if(user_says=="music")
    {
        cout<<" \t do you want me to play music ? --"<<endl;// permission for music
        cout<<" \t { ?yes? or ?no? }"<<endl;
        cout<<" ___--> ";
        cin>>user_choice;
        if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
        {
            musicswitch=1;
            cout<<" \t what do you want me to play "<<endl;
            cout<<" ___--> ";
            cin>>user_says;
            cout<<" \t playing "<<user_says;
        }
        else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
        {
            musicswitch=0;
            cout<<" \t { music stops playing }";
        }
    }
    master_room();  //calling master room in side the master protocol

}                   ////master protocol function ends







void master_room()   //the master bedroom function
{
    cout<<" \t ***||{ the master bedroom }||*** "<<endl;
    string user_choice;
    char choice;
    bool musicswitch=0;
    bool tvswitch=0;
    bool curtainswitch=1;
    bool lightswitch=1;
    string user_says="";
master_room:

    cout<<"(light turns on at intensity level 2/6 in the master room when the door opens. there are three levels of light intensity)"<<endl;
    cout<<"(light can be increased or decreased. the user will have to  call out Jarvis to command her.)"<<endl;
    cout<<" \t AFTER CALLING JARVIS, YOU MAY PERFORM THE FOLLOWING FUNCTION'S OR YOU MAY TYPE EXIT TO MOVE INTO OTHER LAYERS "<<endl;
    cout<<" --->   coffee, inbox, reminders, weather, time, music, light " <<endl;
    cout<<" hint : call 'jarvis' "<<endl;
    cout<< " --->" ;
    cin>>user_says;


        if(user_says=="jarvis" || user_says=="JARVIS")
        {
            cout<<" { \t try saying music, inbox, weather(const, set by programmer), time, reminders, curtains, coffee... } "<<endl;
            cout<<" ___--> ";
            cin>>user_says;
            if(user_says=="inbox")
            {
                cout<< " \t YOU HAD A VISITOR NAMED AHSAN AROUND 11 AM "<<endl;
                cout<< " \t you have no new voice mails or telegrams "<<endl;
                master_room();
            }
            else if(user_says=="weather")
            {
                cout<<"\t the sky is clear today however rain is expected tomorrow, dont forget to take an umbrella sir \t"<<endl;
                master_room();
            }
            else if(user_says=="time")
            {
                 // current date/time based on current system
            time_t now = time(0);
                // convert now to string form
            char* dt = ctime(&now);
            cout << " \t date and time : " << dt << endl;
                master_room();
            }
            else if(user_says=="reminders")
            {
                cout<<"\t its your friends kamran's birthday in 3 days sir  \t"<<endl;
                cout<<"\t you have an appointment with the dentist tomorrow \t"<<endl;
                master_room();
            }
            else if(user_says=="music")
            {
                cout<<" \t do you want me to play music ? --"<<endl;

                cin>>user_choice;
                if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                {
                    musicswitch=1;
                    cout<<" \t what do you want me to play " <<endl;
                     cout<<" ___--> ";
                    cin>>user_says;
                    cout<<" \t playing "<<user_says;
                      master_room();
                }
                else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                {
                    musicswitch=0;
                    cout<<" \t { music stops playing }";
                      master_room();
                }
            }
            else if(user_says=="TV" || user_says=="tv")
            {
                cout<<" \t do you want me to turn on the TV ? --"<<endl;
                 cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                {
                    tvswitch=1;
                    cout<<" \t { tv turns on ; user manually operates it from remote " <<endl;
                    cout<<" \t {to turn off the tv, call out Jarvis.}"<<endl;
                     cout<<" ___--> ";
                    cin>>user_choice;
                    if(user_choice=="jarvis")
                    {
                        cout<<" \t {awaits commands} ? "<<endl;
                         cout<<" ___--> ";
                        cin>>user_says;
                        if(user_says=="turn tv off" || user_says=="turn off tv " || user_says=="turn the tv off")
                            cout<<" \t {TV TURNS OFF }"<<endl;
                              master_room();
                    }

                }
                else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                {
                    tvswitch=0;
                    cout<<" \t { TV stays off }";
                      master_room();
                }
            }
            else if(user_says=="curtains" || user_says=="curtainsdown")
            {
                cout<<" \t do you want me to close the cutains ? --";
                cout<<" \t {yes or no };"<<endl;
                 cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                {
                    curtainswitch=0;
                    cout<<" \t { curtains closing };  " <<endl;
                    cout<<" \t { to open curtains, call Jarvis }"<<endl;
                     cout<<" ___--> ";
                    cin>>user_says;
                    if(user_says=="jarvis")
                    {
                        cout<<" \t {awaits commands} YES SIR ? "<<endl;
                        cout<<" ___--> ";
                        cin>>user_choice;
                        if(user_choice=="open curtains" || user_choice=="OPEN CURTAINS " || user_choice=="OPEN" || user_choice=="open" || user_choice=="opencurtains")
                        {
                            cout<<" \t do you want me to open the cutains ? --"<<endl;
                            cout<<" ___--> ";
                            cin>>user_choice;
                            if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                            {
                                curtainswitch=1;
                                cout<<" \t { curtains opening }"<<endl;
                                master_room();
                            }
                        }

                    }
                    else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                    {
                        curtainswitch=0;
                        cout<<" \t { CURTAINS REMAIN CLOSED  }";
                          master_room();
                    }
                }
            }

                        else if(user_says=="lights" || user_says=="light" || user_says=="LIGHT" || user_says=="Light" || user_says=="Lights" || user_says=="Lighting")
            {
                cout<<" \t light turned on ::: | INTENSITY (2/6) | ::: "<<endl;
                cout<<" \t do you want me to close the light or increase it ? --";
                cout<<" \t {turnoff? | increase? };"<<endl;
                 cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="close" || user_choice=="turnoff" || user_choice=="switchoff" || user_choice=="off" || user_choice=="lightsoff" || user_choice=="TURNOFF")
                {
                    lightswitch=0;
                    cout<<" \t { lights turn off };  " <<endl;
                    cout<<" \t { to turn on lights, call Jarvis }"<<endl;
                     cout<<" ___--> ";
                    cin>>user_says;
                    if(user_says=="jarvis")
                    {
                        cout<<" \t {awaits commands} YES SIR ? "<<endl;
                        cin>>user_choice;
                        if(user_choice=="turn on lights" || user_choice=="lights turn on" || user_choice=="OPEN" || user_choice=="open" || user_choice=="on" || user_choice=="lightsON" || user_choice=="lightson")
                        {
                            cout<<" \t do you want me to turn on the lights? --"<<endl;
                             cout<<" ___--> ";
                            cin>>user_choice;
                            if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                            {
                                lightswitch=1;
                                cout<<" \t { lights turn on }"<<endl;
                                  master_room();
                            }
                        }

                    }
                    else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                    {
                        lightswitch=0;
                        cout<<" \t { LIGHTS STAYS TURNED OFF  }";
                          master_room();
                    }
                }
            else if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
            {
                cout<<" \t light increased to 4/6 "<<endl;
                cout<<" \t {the light can be increased to 6/6 as well }"<<endl;
                 cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
                 {
                     cout<<" \t light increased to 6/6 "<<endl;
                       master_room();
                 }
            }

            }

            else if(user_says=="coffee")
            {
                cout<<" \t  do you want me to make coffee "<<endl;   //coffee
                 cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="yes")
                {
                    cout<<" \t coffee will be ready in 2 minutes "<<endl;
                      master_room();
                }
                else if(user_choice=="no")
                {
                    cout<<" \t ok "<<endl;
                      master_room();
                }
            }
        }
        else if(user_says=="exit" || user_says=="leaving" || user_says=="going" || user_says=="exiting")
        {
            cout<<" \t { basically motion sensors sense, rn , we will make jarvis understand by telling her }";
            corridor();
        }

}

void greet() // greet function
{
       cout<<endl<<endl;
       cout<<"\t \t WELCOME BACK TO HOME ! JARVIS IS GLAD THAT YOU MADE IT SAFELY HOME FROM YOUR TRIP "<<endl<<endl;
       corridor();
}


void layout() // layout  function starts
{

    char choice;
    cout<<endl<<endl;
    cout<<" \t \t k:kitchen | m:master bed | l: living/drawing room | g:guest room | c:corridor | b:bathroom | e:exit home "<<endl;
    cout<<endl<<endl;
    cout<<" \t {the motion sensor senses users movement } "<<endl;
    cout<<" \t lets say, the user goes in the "<<choice<<" or (press 'c') stays in corridor "<<endl;
    cout<<" ___--> ";
    cin>>choice;

    switch(choice)
    {
    case 'k':         //switch for kitchen:k
        kitchen();
        break;
    case 'm': //switch for kitchen:k
        master_room();
        break;
    case 'g'://switch for guest room:g
        guest_room();
        break;
    case 'l'://switch for drawingroom:l
        drawing_room();
        break;
    case 'b'://switch for bathroom:b
       void bathroom();
        break;
    case 'c'://switch for corridor:c
        corridor();
        break;
    case 'e'://switch for exit:e
        exit();
        break;
    }
        cout<<endl<<endl<<endl;
}


  void corridor() // corridor function
  {
            cout<<endl<<endl;
          cout<<" \t \t \t ***||{ the CORRIDOR }||*** "<<endl;
          cout<<endl<<endl;
          cout<<" {Corridor is the lobby area that has the door to every opportunity . The corridor gives the access "<<endl;
          cout<<"  to every other room and the main door too. "<<endl;
            cout<<endl;
         cout<<endl<<endl<<" ";
    TIME();
    cout<<setw(10)<<" \t \t \t |  26*C || 32*C   "<<endl<<endl;
    cout<<"\t \t \t | NO NEW NOTIFICATIONS "<<endl;
    cout<<endl<<endl;

    string user_choice;
    char choice;
    bool musicswitch=0;
    bool tvswitch=0;
    bool curtainswitch=1;
    bool lightswitch;
    string user_says="";

    cout<<" (light turns on at intensity level 2/6 in the corridor when the door opens. there are three levels of light intensity)"<<endl;
    cout<<" (light can be increased or decreased. the user will have to  call out Jarvis to command her.)"<<endl;
    cout<<" (you may want to go into other rooms or go out of the home. For that, type *** EXIT *** )"<<endl;
    cout<<" \t AFTER CALLING JARVIS, YOU MAY PERFORM THE FOLLOWING FUNCTION'S OR YOU MAY TYPE EXIT TO MOVE INTO OTHER LAYERS "<<endl;
    cout<<" --->   coffee, inbox, reminders, weather, time, music, light " <<endl;
    // tp be added alot
    cout<<" ___--> ";
    cin>>user_says;


        if(user_says=="jarvis")
        {
            cout<<"\t \t GOOD DAY SIR! HOW MAY I HELP YOU SIR?"<<endl;
            cout<<" ___--> ";
            cin>>user_says;
            if(user_says=="coffee")
            {
                cout<<" \t do you want me to make coffee "<<endl;   //coffee
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="yes")
                {
                    cout<<" \t coffee will be ready in 2 minutes "<<endl;
                      corridor();
                }
                else if(user_choice=="no")
                {
                    cout<<" \t ok "<<endl;
                      corridor();
                }
            }
                        if(user_says=="inbox")
            {
                cout<< " \t YOU HAD A VISITOR NAMED AHSAN AROUND 11 AM "<<endl;
                cout<< " \t you have no new voice mails or telegrams "<<endl;
                corridor();
            }
            else if(user_says=="weather")
            {
                cout<<"\t the sky is clear today however rain is expected tomorrow, dont forget to take an umbrella sir \t"<<endl;
                corridor();
            }

            else if(user_says=="time")
            {
                 // current date/time based on current system
            time_t now = time(0);
                // convert now to string form
            char* dt = ctime(&now);
            cout << " \t \t  | date and time : " << dt << endl;
                corridor();
            }
            else if(user_says=="reminders" || user_says=="reminder")
            {
                cout<<"\t its your friends kamran's birthday in 3 days sir  \t"<<endl;
                cout<<"\t you have an appointment with the dentist tomorrow \t"<<endl;
                corridor();
            }
            else if(user_says=="music")
            {
                cout<<" \t do you want me to play music ? --"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                {
                    musicswitch=1;
                    cout<<" \t what do you want me to play " <<endl;
                    cout<<" ___--> ";
                    cin>>user_says;
                    cout<<" \t playing "<<user_says;
                     corridor();
                }
                else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                {
                    musicswitch=0;
                    cout<<" \t { music stops playing }";
                      corridor();
                }
            }
                else if(user_says=="lights" || user_says=="light" || user_says=="LIGHT" || user_says=="Light" || user_says=="Lights" || user_says=="Lighting")
            {
                cout<<" \t light turned on ::: | INTENSITY (2/6) | ::: "<<endl;
                cout<<" \t do you want me to close the light or increase it ? --";
                cout<<" \t {turnoff? | increase? };"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="close" || user_choice=="turnoff" || user_choice=="switchoff" || user_choice=="off" || user_choice=="lightsoff" || user_choice=="TURNOFF")
                {

                    cout<<" \t { lights turn off };  " <<endl;;
                    cout<<" \t { to turn on lights, call Jarvis }"<<endl;
                    cout<<" ___--> ";
                    cin>>user_says;
                    if(user_says=="jarvis")
                    {
                        cout<<" \t {awaits commands} YES SIR ? "<<endl;
                        cout<<" ___--> ";
                        cin>>user_choice;
                        if(user_choice=="turn on lights" || user_choice=="lights turn on" || user_choice=="OPEN" || user_choice=="open" || user_choice=="on" || user_choice=="lightsON" || user_choice=="lightson")
                        {
                            cout<<" \t do you want me to turn on the lights? --"<<endl;
                            cout<<" ___--> ";
                            cin>>user_choice;
                            if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                            {
                                lightswitch=1;
                                cout<<" \t { lights turn on }"<<endl;
                                  corridor();
                            }
                        }

                    }
                    else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                    {
                        lightswitch=0;
                        cout<<" \t { LIGHTS STAYS TURNED OFF  } ";
                          corridor();
                    }
                }
            else if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
            {
                cout<<" \t light increased to 4/6 "<<endl;
                cout<<" \t { the light can be increased to 6/6 as well }"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
                 {
                     cout<<" \t light increased to 6/6 "<<endl;
                       corridor();
                 }
            }
                     else if(user_says=="set the washing machine " || user_says=="washing_machine" || user_says=="WASHING_MACHINE" || user_says=="washingmachine" || user_says=="turn_on_washingmachine")
            {
                cout<<" \t do you want to wash the clothes "<<endl;   //oven
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="yes")
                {
                     cout<<" \t select an option "<<endl;
                     cout<<" \t 1:cotton | 2:linen | 3:jeans | 4:curtains | 5:dryer | 6:rinse |  "<<endl;
                     cin>>user_choice;
                     if(user_choice=="cotton" || user_choice=="1" || user_choice=="COTTON")
                      {
                            cout<<" \t You selected cotton. "<<endl;

                      }
                    else if(user_choice=="linen" || user_choice=="2" || user_choice=="LINEN")
                        {
                             cout<<" \t You selected linen. "<<endl;

                        }
                    else if(user_choice=="jeans" || user_choice=="3" || user_choice=="JEANS")
                        {
                             cout<<" \t You selected linen. "<<endl;

                        }
                    else if(user_choice=="curtains" || user_choice=="4" || user_choice=="CURTAINS")
                        {
                             cout<<" \t You selected curtains "<<endl;

                        }
                    else if(user_choice=="dryer" || user_choice=="5" || user_choice=="DRYER")
                       {
                             cout<<" You selected dryer "<<endl;

                       }
                    else if(user_choice=="rinse" || user_choice=="6" || user_choice=="RINSE")
                       {
                             cout<<" You selected rinse "<<endl;

                       }

                    cout<<" \t what time should i set ?? "<<endl;
                    cout<<" 1: 5mins | 2: 10mins | 3: 15mins | 4: 20 mins | 5: 30mins | 6: 45mins | 7: 60mins | 8: 90mins | 9: 120mins "<<endl;
                    cout<<" ___--> " ;
                    cin>>user_choice ;
                    if(user_choice=="5_mins" || user_choice=="1" || user_choice=="5mins")
                      {
                            cout<<" \t machine timer set for 5 minutes . "<<endl;
                        corridor();
                      }
                    else if(user_choice=="10_mins" || user_choice=="2" || user_choice=="10mins")
                      {
                            cout<<" \t machine timer set for 10 minutes . "<<endl;
                         corridor();
                      }
                    else if(user_choice=="15_mins" || user_choice=="3" || user_choice=="15mins")
                     {
                            cout<<" \t machine timer set for 15 minutes . "<<endl;
                         corridor();
                      }
                    else if(user_choice=="20_mins" || user_choice=="4" || user_choice=="20mins")
                      {
                            cout<<" \t machine timer set for 20 minutes . "<<endl;
                         corridor();
                      }
                    else if(user_choice=="30_mins" || user_choice=="5" || user_choice=="30mins")
                      {
                            cout<<" \t machine timer set for 30 minutes . "<<endl;
                         corridor();
                      }
                    else if(user_choice=="45_mins" || user_choice=="6" || user_choice=="45mins")
                       {
                            cout<<" \t machine timer set for 45 minutes . "<<endl;
                         corridor();
                      }
                    else if(user_choice=="60_mins" || user_choice=="7" || user_choice=="60mins")
                     {
                            cout<<" \t machine timer set for 60 minutes . "<<endl;
                         corridor();
                      }
                    else if(user_choice=="90_mins" || user_choice=="8" || user_choice=="90mins")
                     {
                            cout<<" \t machine timer set for 90 minutes . "<<endl;
                         corridor();
                      }
                    else if(user_choice=="120_mins" || user_choice=="9" || user_choice=="120mins")
                     {
                            cout<<" \t machine timer set for 120 minutes . "<<endl;
                         corridor();
                      }
                }
                else if(user_choice=="no")
                {
                    cout<<" \t ok "<<endl;
                        corridor();
                }
            }

            }

        }
                else if(user_says=="exit" || user_says=="leaving" || user_says=="going" || user_says=="exiting" || user_says=="goto")
        {
            cout<<" \t { basically motion sensors sense, rn , we will make jarvis understand by telling her }";
            layout();

        }



} // corridor function ends here




void kitchen()   // kitchen function starts
{
    cout<<endl<<endl;
    cout<<" \t \t \t ***||{ the KITCHEN }||*** "<<endl;
    cout<<endl<<endl;
    char choice;
    bool lightswitch=1;
    string user_choice;
    string user_says="";
kitchen:

    cout<<" (light turns on at intensity level 2/6) " <<endl;
    cout<< " call jarvis for further commands "<<endl;
    cout<<" \t AFTER CALLING JARVIS, YOU MAY PERFORM THE FOLLOWING FUNCTION'S OR YOU MAY TYPE EXIT TO MOVE INTO OTHER LAYERS "<<endl;
      cout<<" --->hints:{   coffee, oven, dishes, light } " <<endl;
    cout<<" ___--> ";
    cin>>user_says;

        if(user_says=="jarvis")
        {
            cout<<"\t \t GOOD DAY SIR! HOW MAY I HELP YOU SIR?"<<endl;
            cout<<" ___--> ";
            cin>>user_says;

            if(user_says=="coffee" || user_says=="COFFEE")
            {
                cout<<" \t do you want me to make coffee "<<endl;   //coffee
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="yes")
                {
                    cout<<" \t coffee will be ready in 2 minutes "<<endl;
                     kitchen();
                }
                else if(user_choice=="no")
                {
                    cout<<" \t ok "<<endl;
                     kitchen();
                }
            }

                else if(user_says=="lights" || user_says=="light" || user_says=="LIGHT" || user_says=="Light" || user_says=="Lights" || user_says=="Lighting")
            {
                cout<<" \t light turned on ::: | INTENSITY (2/6) | ::: "<<endl;
                cout<<" \t do you want me to close the light or increase it ? --"<<endl;
                cout<<" \t {turnoff? | increase? };"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="close" || user_choice=="turnoff" || user_choice=="switchoff" || user_choice=="off" || user_choice=="lightsoff" || user_choice=="TURNOFF")
                {
                    lightswitch=0;
                    cout<<" \t { lights turn off };  " <<endl;
                    cout<<" \t { to turn on lights, call Jarvis }"<<endl;
                    cout<<" ___--> ";
                    cin>>user_says;
                    if(user_says=="jarvis")
                    {
                        cout<<" \t {awaits commands} YES SIR ? "<<endl;
                        cout<<" ___--> ";
                        cin>>user_choice;
                        if(user_choice=="turn on lights" || user_choice=="lights turn on" || user_choice=="OPEN" || user_choice=="open" || user_choice=="on" || user_choice=="lightsON" || user_choice=="lightson")
                        {
                            cout<<" \t do you want me to turn on the lights? --"<<endl;
                            cout<<" ___--> ";
                            cin>>user_choice;
                            if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                            {
                                lightswitch=1;
                                cout<<" \t { lights turn on }"<<endl;
                                  kitchen();
                            }
                        }

                    }
                    else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                    {
                        lightswitch=0;
                        cout<<" \t { LIGHTS STAYS TURNED OFF  }";
                          kitchen();
                    }
                }
            else if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
            {
                cout<<" \t light increased to 4/6 "<<endl;
                cout<<" \t { the light can be increased to 6/6 as well }"<<endl;
                cin>>user_choice;
                if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
                 {
                     cout<<" \t light increased to 4/6 "<<endl;
                       kitchen();
                 }
            }

            }


            else if(user_says=="set the oven" || user_says=="turn the oven on" || user_says=="oven on" || user_says=="oven" || user_says=="OVEN")
            {
                cout<<" \t do you want to use the oven "<<endl;   //oven
                cin>>user_choice;
                if(user_choice=="yes")
                {
                    cout<<" \t what time should i set ??"<<endl;
                    cout<<" 1: 5mins | 2: 10mins | 3: 15mins | 4: 20 mins | 5: 30mins | 6: 45mins | 7: 60mins | 8: 90mins | 9: 120mins "<<endl;
                    cout<<" ___--> ";
                      cin>>user_choice;
                    if(user_choice=="5_mins" || user_choice=="1" || user_choice=="5mins" )
                      {
                            cout<<" \t oven timer set for 5 minutes . "<<endl;
                        kitchen();
                      }
                    else if(user_choice=="10_mins" || user_choice=="2" || user_choice=="10mins")
                        {
                            cout<<" \t oven timer set for 10 minutes . "<<endl;
                        kitchen();
                        }
                    else if(user_choice=="15_mins" || user_choice=="3" || user_choice=="15mins")
                        {
                            cout<<" \t oven timer set for 15 minutes . "<<endl;
                        kitchen();
                        }
                    else if(user_choice=="20_mins" || user_choice=="4" || user_choice=="20mins")
                        {
                            cout<<" \t oven timer set for 20 minutes . "<<endl;
                        kitchen();
                        }
                    else if(user_choice=="30_mins" || user_choice=="5" || user_choice=="30mins")
                       {
                        cout<<" \t oven timer set for 30 minutes . "<<endl;
                        kitchen();
                       }
                    else if(user_choice=="45_mins" || user_choice=="6" || user_choice=="45mins")
                        {
                            cout<<" \t oven timer set for 45 minutes . "<<endl;
                        kitchen();
                        }
                    else if(user_choice=="60_mins" || user_choice=="7" || user_choice=="60mins")
                        {
                            cout<<" \t oven timer set for 60 minutes . "<<endl;
                        kitchen();
                        }
                    else if(user_choice=="90_mins" || user_choice=="8" || user_choice=="90mins")
                        {
                            cout<<" \t oven timer set for 90 minutes . "<<endl;
                        kitchen();
                        }
                    else if(user_choice=="120_mins" || user_choice=="9" || user_choice=="120mins")
                        {
                            cout<<" \t oven timer set for 120 minutes . "<<endl;
                        kitchen();
                        }
                }
                else if(user_choice=="no")
                {
                    cout<<" \t ok "<<endl;
                      kitchen();
                }
            }

            else if(user_says == "wash the dishes " || user_says == "dishes" || user_says == "cleandishes")
            {
                cout<< " \t dish washer turned on "<<endl;
                kitchen();
            }
        }
        else if(user_says=="exit" || user_says=="leaving" || user_says=="going" || user_says=="exiting")
        {
            cout<<" \t { basically motion sensors sense, rn , we will make jarvis understand by telling her }";
            corridor();

        }

} //kitchen function ends

void drawing_room()   // DRAWING ROOM function starts
{
    cout<<endl<<endl;
        cout<<" \t ***||{ the DRAWING ROOM | LOUNGE }||*** "<<endl;
    char choice;
    bool musicswitch=0;
    bool tvswitch=0;
    bool curtainswitch=1;
    bool lightswitch=1;
drawing_room:
    string user_choice="";

    cout<<" \t (light turns on at intensity level 2/6) " <<endl;
    string user_says="";
    cout<<" \t AFTER CALLING JARVIS, YOU MAY PERFORM THE FOLLOWING FUNCTION'S OR YOU MAY TYPE EXIT TO MOVE INTO OTHER LAYERS "<<endl;
    cout<<" --->hints:{   music , TV , curtains , lights} " <<endl;
    cout<<" ___--> ";
    cin>>user_says;

  if(user_says=="jarvis")
        {
            cout<<"\t GOOD DAY SIR! HOW MAY I HELP YOU SIR?"<<endl;
            cout<<" ___--> ";
            cin>>user_says;
            if(user_says=="music")
            {
                cout<<" \t do you want me to play music ? --"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                {
                    musicswitch=1;
                    cout<<" \t what do you want me to play " <<endl;
                    cout<<" ___--> ";
                    cin>>user_says;
                    cout<<" \t playing "<<user_says;
                     drawing_room();
                }
                else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                {
                    musicswitch=0;
                    cout<<" \t { music stops playing }";
                     drawing_room();
                }
            }
                else if(user_says=="lights" || user_says=="light" || user_says=="LIGHT" || user_says=="Light" || user_says=="Lights" || user_says=="Lighting")
            {
                cout<<" \t light turned on ::: | INTENSITY (2/6) | ::: "<<endl;
                cout<<" \t do you want me to close the light or increase it ? --";
                cout<<" \t {turnoff? | increase? };";
                cin>>user_choice;
                if(user_choice=="close" || user_choice=="turnoff" || user_choice=="switchoff" || user_choice=="off" || user_choice=="lightsoff" || user_choice=="TURNOFF")
                {
                    lightswitch=0;
                    cout<<" \t { lights turn off };  "<<endl;
                    cout<<" \t { to turn on lights, call Jarvis }"<<endl;
                    cout<<" ___--> ";
                    cin>>user_says;
                    if(user_says=="jarvis")
                    {
                        cout<<" \t {awaits commands} YES SIR ? "<<endl;
                        cout<<" ___--> ";
                        cin>>user_choice;
                        if(user_choice=="turn on lights" || user_choice=="lights turn on" || user_choice=="OPEN" || user_choice=="open" || user_choice=="on" || user_choice=="lightsON" || user_choice=="lightson")
                        {
                            cout<<" \t do you want me to turn on the lights? --"<<endl;
                            cout<<" ___--> ";
                            cin>>user_choice;
                            if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                            {
                                lightswitch=1;
                                cout<<" \t { lights turn on }"<<endl;
                                 drawing_room();
                            }
                            else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                            {
                          lightswitch=0;
                          cout<<" \t { LIGHTS STAYS TURNED OFF  }";
                          drawing_room();
                            }
                        }

                    }
                    else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                    {
                        lightswitch=0;
                        cout<<" \t { LIGHTS STAYS TURNED OFF  }";
                          drawing_room();
                    }
                }
            else if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
            {
                cout<<" \t light increased to 4/6 "<<endl;
                cout<<" \t { the light can be increased to 6/6 as well }"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
                 {
                     cout<<" \t light increased to 4/6 "<<endl;
                       drawing_room();
                 }
            }

            }
            else if(user_says=="TV" || user_says=="tv")
            {
                cout<<" \t do you want me to turn on the TV ? --"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                {
                    tvswitch=1;
                    cout<<" \t { tv turns on ; user manually operates it from remote "<<endl;
                    cout<<" \t {to turn off the tv, call out Jarvis.}"<<endl;
                    cout<<" ___--> ";
                    cin>>user_choice;
                    if(user_choice=="jarvis")
                    {
                        cout<<" \t {hint: tvoff ? "<<endl;
                        cin>>user_says;
                        if(user_says=="turn tv off" || user_says=="turn off tv " || user_says=="turn the tv off" || user_says=="tvoff")
                            cout<<" \t {TV TURNS OFF }"<<endl;
                              drawing_room();
                    }

                }
                else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                {
                    tvswitch=0;
                    cout<<" \t { TV stays off }";
                      drawing_room();
                }
            }
            else if(user_says=="curtains" || user_says=="curtains down")
            {
                cout<<" \t Do you want me to close the cutains ? --";
                cout<<" \t {yes or no };";
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                {
                    curtainswitch=0;
                    cout<<" \t { curtains closing };  " <<endl;
                    cout<<" \t { to open curtains, call Jarvis }"<<endl;
                    cout<<" ___--> ";
                    cin>>user_says;
                    if(user_says=="jarvis")
                    {
                        cout<<" \t {awaits commands} YES SIR ? "<<endl;
                        cout<<" ___--> ";
                        cin>>user_choice;
                        if(user_choice=="open curtains" || user_choice=="OPEN CURTAINS " || user_choice=="OPEN" || user_choice=="opencurtain" || user_choice=="opencurtains")
                        {
                            cout<<" \t do you want me to open the cutains ? --"<<endl;
                            cout<<" ___--> ";
                            cin>>user_choice;
                            if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                            {
                                curtainswitch=1;
                                cout<<" \t { curtains opening }"<<endl;
                                drawing_room();
                            }
                        }

                    }
                    else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                    {
                        curtainswitch=0;
                        cout<<" \t { CURTAINS REMAIN CLOSED  }";
                          drawing_room();
                    }
                }
            }
                 else if(user_says=="weather")
            {
                cout<<" \t the sky is clear today however rain is expected tomorrow, dont forget to take an umbrella sir \t"<<endl;
                drawing_room();
            }
            else if(user_says=="time")
            {
                 // current date/time based on current system
            time_t now = time(0);
                // convert now to string form
            char* dt = ctime(&now);
            cout << " \t date and time : " << dt << endl;
                drawing_room();
            }
        }
                else if(user_says=="exit" || user_says=="leaving" || user_says=="going" || user_says=="exiting")
        {
            cout<<" \t {basically motion sensors sense, rn , we will make jarvis understand by telling her }";
            corridor();

        }


} //drawingroom function ends here


void guest_room() //GUESTROOM function starts
{
        cout<<" \t ***||{ the GUEST ROOM }||*** "<<endl;
    char choice;
    bool musicswitch=0;
    bool tvswitch=0;
    bool curtainswitch=1;
    bool lightswitch=1;
    string user_choice="";
guest_room:

    cout<<" \t (light turns on at intensity level 2/6) " <<endl;
    cout<<" ___--> ";
    string user_says="";
    cout<<" \t AFTER CALLING JARVIS, YOU MAY PERFORM THE FOLLOWING FUNCTION'S OR YOU MAY TYPE EXIT TO MOVE INTO OTHER LAYERS "<<endl;
    cout<<" --->hints:{   music , TV , curtains , lights} " <<endl;
    cout<<" ___--> ";
    cin>>user_says;

        if (user_says == "jarvis" )
        {
            cout<<"\t \t  HOW MAY I HELP YOU SIR"<<endl;
            cout<<" ->hints:{   music , TV , curtains , lights} " <<endl;
            cout<<" ___--> ";
            cin>>user_says;
            if(user_says=="weather")
            {
                cout<<" \t the sky is clear today however rain is expected tomorrow, dont forget to take an umbrella sir \t"<<endl;
                guest_room();
            }
            else if(user_says=="time")
            {
                 // current date/time based on current system
            time_t now = time(0);
                // convert now to string form
            char* dt = ctime(&now);
            cout << " \t date and time : " << dt << endl;
                guest_room();
            }
                else if(user_says=="lights" || user_says=="light" || user_says=="LIGHT" || user_says=="Light" || user_says=="Lights" || user_says=="Lighting")
            {
                cout<<" \t light turned on ::: | INTENSITY (2/6) | ::: "<<endl;
                cout<<" \t do you want me to close the light or increase it ? --"<<endl;
                cout<<" \t {turnoff? | increase? };"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="close" || user_choice=="turnoff" || user_choice=="switchoff" || user_choice=="off" || user_choice=="lightsoff" || user_choice=="TURNOFF")
                {
                    lightswitch=0;
                    cout<<" \t { lights turn off };  " <<endl;
                    cout<<" \t { to turn on lights, call Jarvis }"<<endl;
                    cout<<" ___--> ";
                    cin>>user_says;
                    if(user_says=="jarvis")
                    {
                        cout<<" \t {awaits commands} YES SIR ? "<<endl;
                        cout<<" ___--> ";
                        cin>>user_choice;
                        if(user_choice=="turn on lights" || user_choice=="lights turn on" || user_choice=="OPEN" || user_choice=="open" || user_choice=="on" || user_choice=="lightsON" || user_choice=="lightson")
                        {
                            cout<<" \t do you want me to turn on the lights? --";
                            cin>>user_choice;
                            if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                            {
                                lightswitch=1;
                                cout<<" \t { lights turn on }"<<endl;
                                 guest_room();
                            }
                        }

                    }
                    else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                    {
                        lightswitch=0;
                        cout<<" \t { LIGHTS STAYS TURNED OFF  }";
                          guest_room();
                    }
                }
            else if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
            {
                cout<<" \t light increased to 4/6 "<<endl;
                cout<<" \t { the light can be increased to 6/6 as well }"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="increase" || user_choice=="increaselight" || user_choice=="INCREASE" || user_choice=="brighten" || user_choice=="INCREASE INTENSITY" || user_choice=="increase light")
                 {
                     cout<<" \t light increased to 4/6 "<<endl;
                       guest_room();
                 }
            }

            }
            else if(user_says=="TV" || user_says=="tv")
            {
                cout<<" \t do you want me to turn on the TV ? "<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                {
                    tvswitch=1;
                    cout<<" \t { tv turns on ; user manually operates it from remote " ;
                    cout<<" \t {to turn off the tv, call out Jarvis.}"<<endl;
                    cin>>user_choice;
                    if(user_choice=="jarvis")
                    {
                        cout<<" \t {awaits commands--tvoff} ? "<<endl;
                        cin>>user_says;
                        if(user_says=="turn tv off" || user_says=="turn off tv " || user_says=="turn the tv off" || user_says=="tvoff")
                            cout<<" \t {TV TURNS OFF }"<<endl;
                              guest_room();
                    }

                }
                else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                {
                    tvswitch=0;
                    cout<<" \t { TV stays off }";
                      guest_room();
                }
            }
            else if(user_says=="curtains" || user_says=="curtains down")
            {
                cout<<" \t do you want me to close the cutains ? --"<<endl;
                cout<<" \t {yes or no };"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                {
                    curtainswitch=0;
                    cout<<" \t { curtains closing };  "<<endl ;
                    cout<<" \t { to open curtains, call Jarvis }"<<endl;
                    cout<<" ___--> ";
                    cin>>user_says;
                    if(user_says=="jarvis")
                    {
                        cout<<" \t {awaits commands} YES SIR ? "<<endl;
                        cout<<" ___--> ";
                        cin>>user_choice;
                        if(user_choice=="open curtains" || user_choice=="OPEN CURTAINS " || user_choice=="OPEN" || user_choice=="open")
                        {
                            cout<<" \t do you want me to open the cutains ? --"<<endl;
                            cout<<" ___--> ";
                            cin>>user_choice;
                            if(user_choice=="YES" || user_choice=="Yes" || user_choice=="yes" || user_choice=="y")
                            {
                                curtainswitch=1;
                                cout<<" \t { curtains opening }"<<endl;
                                guest_room();
                            }
                        }

                    }
                    else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                    {
                        curtainswitch=0;
                        cout<<" \t { CURTAINS REMAIN CLOSED  }";
                          guest_room();
                    }
                }
            }
        }
                        else if(user_says=="exit" || user_says=="leaving" || user_says=="going" || user_says=="exiting")
        {
            cout<<" \t { basically motion sensors sense, rn , we will make jarvis understand by telling her }"<<endl;
            corridor();

        }

}
void bathroom()
{
        cout<<" \t \t \t ***||{ BATHROOM }||*** "<<endl;
bathroom:
    cout<<" \t light turned on" <<endl;
    bool lightswitch=1;
    string user_choice="";

    cout<<" \t (light turns on , EXHAUST FAN TURNS ON, AIR FRESHNER FRESHENS AIR ) " <<endl;
    string user_says="";
    cout<<" --->hints: {call jarvis} " <<endl;
    cout<<" ___--> ";
    cin>>user_says;

        if (user_says == "jarvis")
        {
            cout<<"\t HOW MAY I HELP YOU SIR"<<endl;
            cout<<" --->hints:{  washingmachine , set_bathroom_temperature_to_normal , jacuzi , lightsoff} " <<endl;
            cout<<" ___--> ";
            cin>>user_says;
            if(user_says== "set_bathroom_temperature_to_normal")
            {
                cout<<" \t (done sir)  "<<endl;
            }

         else if(user_says=="set the washing machine " || user_says=="washing_machine" || user_says=="WASHING_MACHINE" || user_says=="washingmachine" || user_says=="turn_on_washingmachine")
            {
                cout<<" \t do you want to wash the clothes "<<endl;   //washing machine
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="yes")
                {
                    cout<<" \t select an option "<<endl;
                     cout<<" \t 1:cotton | 2:linen | 3:jeans | 4:curtains | 5:dryer | 6:rinse |  "<<endl;
                     cin>>user_choice;
                     if(user_choice=="cotton" || user_choice=="1" || user_choice=="COTTON")
                      {
                            cout<<" \t You selected cotton. "<<endl;

                      }
                    else if(user_choice=="linen" || user_choice=="2" || user_choice=="LINEN")
                        {
                             cout<<" \t You selected linen. "<<endl;

                        }
                    else if(user_choice=="jeans" || user_choice=="3" || user_choice=="JEANS")
                        {
                             cout<<" \t You selected linen. "<<endl;

                        }
                    else if(user_choice=="curtains" || user_choice=="4" || user_choice=="CURTAINS")
                        {
                             cout<<" \t You selected curtains "<<endl;

                        }
                    else if(user_choice=="dryer" || user_choice=="5" || user_choice=="DRYER")
                       {
                             cout<<" \t You selected dryer "<<endl;

                       }
                    else if(user_choice=="rinse" || user_choice=="6" || user_choice=="RINSE")
                       {
                             cout<<" \t You selected rinse "<<endl;

                       }

                    cout<<" \t what time should i set ??"<<endl;
                    cout<<" \t 1: 5mins | 2: 10mins | 3: 15mins | 4: 20 mins | 5: 30mins | 6: 45mins | 7: 60mins | 8: 90mins | 9: 120mins "<<endl;
                      cout<<" ___--> ";
                      cin>>user_choice;
                    if(user_choice=="5_mins" || user_choice=="1" || user_choice=="5mins" )
                      {
                            cout<<" \t machine timer set for 5 minutes . "<<endl;
                        bathroom();
                      }
                    else if(user_choice=="10_mins" || user_choice=="2" || user_choice=="10mins")
                      {
                            cout<<" \t machine timer set for 10 minutes . "<<endl;
                        bathroom();
                      }
                    else if(user_choice=="15_mins" || user_choice=="3" || user_choice=="15mins")
                     {
                            cout<<" \t machine timer set for 15 minutes . "<<endl;
                        bathroom();
                      }
                    else if(user_choice=="20_mins" || user_choice=="4" || user_choice=="20mins")
                      {
                            cout<<" \t machine timer set for 20 minutes . "<<endl;
                        bathroom();
                      }
                    else if(user_choice=="30_mins" || user_choice=="5" || user_choice=="30mins")
                      {
                            cout<<" \t machine timer set for 30 minutes . "<<endl;
                        bathroom();
                      }
                    else if(user_choice=="45_mins" || user_choice=="6" || user_choice=="45mins")
                       {
                            cout<<" \t machine timer set for 45 minutes . "<<endl;
                        bathroom();
                      }
                    else if(user_choice=="60_mins" || user_choice=="7" || user_choice=="60mins")
                     {
                            cout<<" \t machine timer set for 60 minutes . "<<endl;
                        bathroom();
                      }
                    else if(user_choice=="90_mins" || user_choice=="8" || user_choice=="90mins")
                     {
                            cout<<" \t machine timer set for 90 minutes . "<<endl;
                        bathroom();
                      }
                    else if(user_choice=="120_mins" || user_choice=="9" || user_choice=="120mins")
                     {
                            cout<<" \t machine timer set for 120 minutes . "<<endl;
                        bathroom();
                      }
                }
                else if(user_choice=="no")
                {
                    cout<<" ok "<<endl;
                       bathroom();
                }
            }

            else if(user_says == "jacuzi")
            {
                cout<<" \t do you want me to prepare your jacuzi ? --"<<endl;
                cout<<" \t {yes or no };"<<endl;
                cout<<" ___--> ";
                cin>>user_choice;
                if(user_choice=="yes")
                {
                    cout<<" \t select an option "<<endl;
                     cout<<" \t 1:cold | 2:warm | 3:hot | 4:sauna | 5:jacuzi | "<<endl;
                     cout<<" ___--> ";
                     cin>>user_choice;
                     if(user_choice=="cold" || user_choice=="1" || user_choice=="COLD")
                      {
                            cout<<" \t You selected cold "<<endl;
                            cout<<" \t gettin prepared "<<endl;
                            cout<<" \t ready in 5 minutes "<<endl;
                            bathroom();

                      }
                    else if(user_choice=="warm" || user_choice=="2" || user_choice=="WARM")
                        {
                             cout<<" \t You selected warm "<<endl;
                               cout<<" \t gettin prepared "<<endl;
                            cout<<" \t ready in 5 minutes "<<endl;
                          bathroom();
                        }
                    else if(user_choice=="hot" || user_choice=="3" || user_choice=="HOT")
                        {
                             cout<<" \t You selected hot "<<endl;
                              cout<<" \t gettin prepared "<<endl;
                            cout<<" \t ready in 5 minutes "<<endl;
                          bathroom();
                        }
                    else if(user_choice=="sauna" || user_choice=="4" || user_choice=="SAUNA")
                        {
                             cout<<" \t You selected sauna "<<endl;
                             cout<<" \t gettin prepared "<<endl;
                            cout<<" \t ready in 5 minutes "<<endl;
                          bathroom();
                        }
                    else if(user_choice=="jacuzi" || user_choice=="5" || user_choice=="JACUZI")
                       {
                             cout<<" \t You selected jacuzi "<<endl;
                             cout<<" \t gettin prepared "<<endl;
                            cout<<" \t ready in 5 minutes "<<endl;
                          bathroom();
                       }
                }
                     else if(user_choice=="NO" || user_choice=="No" || user_choice=="no" || user_choice=="n")
                    {
                        cout<<" \t { ok  }";
                          bathroom();
                    }
            }
            else if(user_says == "lights off " || user_says == "lightsoff ")
            {
                cout<< " \t (turning lights off; )"<<endl;
            }
        }
         else if(user_says=="exit" || user_says=="leaving" || user_says=="going" || user_says=="exiting")
        {
            cout<<"{ basically motion sensors sense, rn , we will make jarvis understand by telling her }";
            corridor();
        }

}
void lightcheck()
{
    bool lightswitch;
    if(lightswitch==1)
    {
         cout<<" \t \t \t light is turned on. "<<endl;
    }
    else if(lightswitch==0)
    {

         cout<<" \t \t \t light is turned off. "<<endl;
    }

}
void musiccheck()
{
    bool musicswitch;
    if(musicswitch==1)
    {
         cout<<" \t \t \t music is turned on. "<<endl;
    }
    else if(musicswitch==0)
    {

         cout<<" \t \t \t music is turned off. "<<endl;
    }

}
void curtaincheck()
{
    bool curtainswitch;
    if(curtainswitch==1)
    {
         cout<<" \t \t \t curtain is turned on. "<<endl;
    }
    else if(curtainswitch==0)
    {

         cout<<" \t \t \t curtain is turned off. "<<endl;
    }

}



void exit()
{
        cout<<" \t ***||{ the MAIN DOOR }||*** "<<endl;
    cout<<" \t (lights turned off) " <<endl;
    cout<<" \t (all rooms locked) " <<endl;
    cout<<" \t HAVE A SAFE TRIP SIR " <<endl;
    exit(0);
}
