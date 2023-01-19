// PASSWORD: 8055
// The code given below can also generate voice as a part of virtual assistance if you have downloaded "Espeak" application in the folder where you have saved this code.
// Some part of the code is commented , those lines are to generate the voice , if left uncommented , run time error will be thrown.
// Some headerfiles may not be supported by the old IDEs , Recommended IDE : VS Studio code.

  



#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <ctime>
#include <unistd.h>
using namespace std;
static float cost = 0;
class password
{
protected:
    char password[5] = "8055";
    char name[20];
    char flag[5];
    char command1[50];

public:
    void welcome()
    {
        // cout << "\n>>>>>>>>>>>>>>>>>>>>>> WELCOME TO THE \"E BILLING WITH VIRTUAL ASSISTANCE SOFTWARE\"<<<<<<<<<<<<<<<<<<<<<\n\n";
        // cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> I AM YOUR VIRTUAL ASSISTANT<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
        // string phrase = "hello sir ,welcome to THE E billing system";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);
    }
    void speak1()
    {
        // string phrase = "what is your name";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);
    }
    void wishme(char *p)
    {
        time_t now = time(0);
        tm *time = localtime(&now);
        if (time->tm_hour < 12)

        {
            // string phrase = "good morning dear";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);

            cout << "\n\n**********************\n";

            cout << "Good morning " << p << "!";

            cout << "\n**********************\n";
        }
        else if (time->tm_hour >= 12 && time->tm_hour <= 16)
        {
            // string phrase = "good afternoon dear";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);

            cout << "\n\n**********************\n";

            cout << "Good afternoon " << p << "!";

            cout << "\n**********************\n";
        }
        else if (time->tm_hour > 16 && time->tm_hour < 24)
        {
            // string phrase = "good evening dear";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);
            cout << "\n\n**********************\n";

            cout << "Good evening " << p << "!";

            cout << "\n**********************\n";
        }
    }

    void check_password()
    {
        system("cls");
        cout << "\nENTER YOUR PASSWORD\t";
        // string phrase = "enter password";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);

        int i = 0;
        while (1)
        {
            char ch = getch();
            if (ch == 13)
            {
                flag[i] = '\0';
                break;
            }
            else
            {
                flag[i] = ch;
                printf("X");
                i++;
            }
        }
        system("cls");

        if (strcmp(flag, password) == 0)
        {
            // string phrase = "password is correct";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);
            cout << "\n\n-------------------";
            cout << "\n\nCORRECT PASSWORD!\n";
            cout << "\n-------------------\n";
            welcome();
            speak1();
            cout << "\nWhat is your name sir/mam ?  ";
            gets(name);
            wishme(name);
        }
        else if (strcmp(flag, password) != 0)

        {
            // string phrase = "incorrect password";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);
            cout << "\n-------------------\n";
            cout << "\nINCORRECT PASSWORD !\n";
            cout << "\n-------------------\n";
            check_password();
        }
    }
};

class base_1
{
public:
    virtual void get_info() = 0;
    virtual void give_reply() = 0;
};
class get_user_details : public base_1
{
protected:
    int user_id;
    char name2[30];
    char phone_no[30];
    char email[30];

public:
    void speak4()
    {
        // string phrase = "Your data is stored successfully";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);
    }
    void get_info()
    {
        // string phrase = "we want some of your information";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);
        cout << "\nPlease enter your information :)\n\n";
        cout << "Enter your user_id.\n";
        cin >> user_id;

        cout << "Enter your name.\n";
        cin >> name2;

        cout << "Enter your phone.\n";
        cin >> phone_no;

        cout << "Enter your Email\n";
        cin >> email;

        ofstream fout;
        fout.open("user_data.txt", ios::app);
        fout << user_id << " " << name2 << " " << phone_no << " " << email << "\n";
    }
    void give_reply()
    {
        system("cls");
        cout << "\nWait while we store your information ";
        // string phrase = "just wait for few seconds";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);
        for (int i = 1; i <= 6; i++)
        {
            cout << ">";
            sleep(1);
        }

        speak4();
        cout << "\nThank you , Your data is stored successfully !\n";
    }
};
class query_window : public base_1
{
    char query[50];

public:
    void get_info()
    {
        // string phrase = "Ask your query";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);
        cout << "\nTell me your query ?\n";
        cin >> query;
    }
    void give_reply()
    {
        while (1)
        {
            get_info();
            if (strcmpi("AboutSoftware", query) == 0)
            {
                // string phrase = "This is an E-Billing system with virtual assistance";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "\n=> This is an E-Billing system with virtual assistance\n=>Version 1.0\n=>Year of launch : 2022\n";
            }
            else if (strcmpi("UseOfSoftware", query) == 0)
            {
                // // string phrase = "it has primarily 3 uses";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "\n=> This is an E-Billing system with virtual assistance\n=>Using this software you can shop in the areas of your choice\n=>You can ask queries from me\n=>You can chat with me\n";
            }
            else if (strcmpi("LanguageUsed", query) == 0)
            {
                // // string phrase = "C++ was used to create this";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "C++ was used to create this software\n";
            }
            else if (strcmpi("bye", query) == 0 || strcmpi("end", query) == 0)
            {
                // string phrase = "Thank you for coming :)";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "Thank you for coming :) \n";
                break;
            }
            else
            {
                // string phrase = "invalid input , please try again";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "\ninvalid input,please try again...\n";
            }
        }
    }
};
class chat_window : public base_1
{
    char command1[30];

public:
    void speak3()
    {
        // string phrase = "your name is";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);
    }
    void get_info()
    {
        // string phrase = "How can i help you";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);

        cout << "\nQ) How can i help you?" << endl;
        cin >> command1;
    }
    void datetime()
    {
        time_t now = time(0);
        char *dt = ctime(&now);
        cout << "=> " << dt << endl;
    }
    void give_reply()
    {
        while (1)
        {
            get_info();
            if (strcmpi("hi", command1) == 0 || strcmpi("hello", command1) == 0 || strcmpi("hey", command1) == 0)
            {
                // string phrase = "hello dear";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "\n==> hello." << endl;
            }
            else if (strcmpi("WhatIsYourName", command1) == 0 || strcmpi("WhoAreyou", command1) == 0)
            {
                // string phrase = "I AM A VIRTUAL ASSISTANT of yours";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "\n==>I am a virtual assistant of yours" << endl;
            }
            else if (strcmpi("HowAreYou", command1) == 0 || strcmpi("Whatsup", command1) == 0)
            {
                // string phrase = "i am fantastic how are you";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);

                cout << "\n==> I am fantastic ,how are you?\n"
                     << endl;
                char reply[20];
                cin >> reply;
                if (strcmpi("IAmGood", reply) == 0 || strcmpi("IAmFine", reply) == 0)
                {
                    // string phrase = "thats fantastic";
                    // string command = "espeak \"" + phrase + "\"";
                    // const char *charCommand = command.c_str();
                    // system(charCommand);

                    cout << "\n==> That's fantastic..." << endl;
                }

                else if (strcmpi("NotFine", reply) == 0 || strcmpi("NotGood", reply) == 0)
                {
                    // string phrase = "i hope you will be better again soon";
                    // string command = "espeak \"" + phrase + "\"";
                    // const char *charCommand = command.c_str();
                    // system(charCommand);

                    cout << "\n==>I hope you will be better again soon " << endl;
                }
            }
            else if (strcmpi("YourCreationTime", command1) == 0)
            {
                // string phrase = "in june 2023";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);

                cout << "\n==> IN JUNE 2023" << endl;
            }
            else if (strcmpi("technology", command1) == 0)
            {
                // string phrase = "C++ WAS USED TO CREATE ME..";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);

                cout << "\n==>C++ WAS USED TO CREATE ME.." << endl;
            }

            else if (strcmpi("bye", command1) == 0 || strcmpi("end", command1) == 0)

            {
                // string phrase = "thank you so much for coming";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);

                cout << "\n==>Bye dear...." << endl;
                break;
            }
            else if (strcmpi("date", command1) == 0 || strcmpi("time", command1) == 0)
            {
                // string phrase = "please wait dear";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);

                cout << "please wait....\n";
                datetime();
            }
            else if (strcmpi("openyoutube", command1) == 0)
            {
                // string phrase = "just a second i am opening youtube";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "==> opening youtube..... \n";
                system("start https://www.youtube.com");
            }
            else if (strcmpi("opengoogle", command1) == 0)
            {
                // string phrase = "just a second i am opening google";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "==>opening google..... \n";
                system("start https://www.google.com");
            }
            else if (strcmpi("openinstagram", command1) == 0)
            {
                // string phrase = "just a second i am opening instagram";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "==> opening instagram..... \n";
                system("start https://www.instagram.com");
            }

            else if (strcmpi("opengmail", command1) == 0)
            {
                // string phrase = "just a second i am opening gmail";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "==>opening gmail..... \n";
                system("start https://mail.google.com");
            }
            else if (strcmpi("end", command1) == 0 || strcmpi("bye", command1) == 0)
            {
                // string phrase = "thank you so much take care ";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "==>BYE DEAR...\n";
                break;
            }

            else
            {
                // string phrase = "invalid input , please try again";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
                cout << "\n==>Sorry i can't understand :(\n";
            }
        }
    }
};
class jalandhar
{
    int sneakers = 500;
    int formals = 800;
    int sandals = 400;
    int remote_control_car = 900;
    int remote_control_helicopter = 1500;
    int bicycle = 2000;
    int pastry = 40;
    int biscuit = 10;
    int milk = 20;

public:
    void calculate_cost(int choice2, int choice3)
    {
        if (choice2 == 1)
        {

            if (choice3 == 1)
                cost = cost + 500;

            else if (choice3 == 2)

                cost = cost + 800;

            else if (choice3 == 3)
                cost = cost + 400;
        }
        else if (choice2 == 2)
        {

            if (choice3 == 1)
                cost = cost + 900;

            else if (choice3 == 2)

                cost = cost + 1500;

            else if (choice3 == 3)

                cost = cost + 2000;
        }
        else if (choice2 == 3)
        {

            if (choice3 == 1)
                cost = cost + 10;

            else if (choice3 == 2)

                cost = cost + 40;

            else if (choice3 == 3)

                cost = cost + 20;
        }
        display_cost();
    }

    void display_cost()
    {
        cout << "\nTotal_price=>" << cost;
    }
};

class ludhiana
{
    int diamond_necklace = 100000;
    int gold_chain = 50000;
    int earings = 5000;
    int digital_watch = 600;
    int analog_watch = 750;
    int chain_watch = 1000;
    int cricket_kit = 5000;
    int badminton = 1000;
    int sweat_band = 90;

public:
    void calculate_cost(int choice2, int choice3)
    {
        if (choice2 == 1)
        {

            if (choice3 == 1)
                cost = cost + 100000;

            else if (choice3 == 2)

                cost = cost + 50000;

            else if (choice3 == 3)

                cost = cost + 5000;
        }
        else if (choice2 == 2)
        {

            if (choice3 == 1)
                cost = cost + 600;

            else if (choice3 == 2)

                cost = cost + 750;

            else if (choice3 == 3)

                cost = cost + 1000;
        }
        else if (choice2 == 3)
        {

            if (choice3 == 1)
                cost = cost + 5000;

            else if (choice3 == 2)

                cost = cost + 1000;

            else if (choice3 == 3)

                cost = cost + 90;
        }
        display_cost();
    }

    void display_cost()
    {
        cout << "\nTotal_price=>" << cost;
    }
};

class phagwara
{
    int fever = 30;
    int headache = 20;
    int comstipation = 40;

    int pizza = 100;
    int burger = 60;
    int noodles = 70;
    int jeans = 750;
    int jacket = 1800;
    int hoodie = 900;

public:
    void calculate_cost(int choice2, int choice3)
    {
        if (choice2 == 1)
        {

            if (choice3 == 1)
                cost = cost + 100;

            else if (choice3 == 2)

                cost = cost + 60;

            else if (choice3 == 3)

                cost = cost + 70;
        }
        else if (choice2 == 2)
        {

            if (choice3 == 1)
                cost = cost + 750;

            else if (choice3 == 2)

                cost = cost + 1800;

            else if (choice3 == 3)

                cost = cost + 900;
        }
        else if (choice2 == 3)
        {

            if (choice3 == 1)
                cost = cost + 30;

            else if (choice3 == 2)

                cost = cost + 20;

            else if (choice3 == 3)

                cost = cost + 40;
        }
        display_cost();
    }

    void display_cost()
    {
        cout << "\nTotal_price=>" << cost;
    }
};

class E_bill
{
    float gst;
    float carry_bag_cost;
    float offer;
    float tax;
    float total_payable_amount;
    int payment_method;
    int cvv;
    int bank;
    int pin;
    int gst_percent;

    string user_will;
    string user_name_on_card;
    string card_number;
    string net_banking_password;
    string phone_no;

public:
    void pay_method()
    {
        {
            //     string phrase = "just wait";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);
        }
        for (int i = 1; i <= 10; i++)
        {
            cout << ">";
            sleep(1);
        }
        cout << "\n\n\t >>> Payment method <<<\n-------------------------------------------\n";
        cout << "1.Debit card\n2.Net banking\n3.phonePay / googlePay / Paytm\n4.Cash\n";
        cout << "\nHow would u like to pay ?\n";
        //  string phrase = "select your payment method";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);

        cin >> payment_method;
        switch (payment_method)
        {
        case 1:
        {
            //  string phrase = "Enter your debit card details";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);
        }
            cout << "\nWhat is your first name on debit card ?\n";
            cin >> user_name_on_card;
            cout << "\nEnter card number?\n";
            cin >> card_number;
            cout << "\nEnter CVV\n";
            cin >> cvv;

            cout << " \nWait while your transaction is being processed ";
            {
                //  string phrase = "just wait for a moment";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
            }
            for (int i = 1; i <= 10; i++)
            {
                cout << ">";
                sleep(1);
            }

            cout << "\n\nTransaction successful !\n";
            {
                //  string phrase = "your transaction is successful";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
            }
            break;
        case 2:

            cout << "\n1.SBI\n2.PNB\n3.Union bank\n";
            cout << "\nSelect your bank";
            {
                //  string phrase = "select your bank";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
            }
            cin >> bank;

            cout << "\nEnter your NET BANKING password\n";
            {
                //  string phrase = "Enter your net banking password";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
            }
            cin >> net_banking_password;
            cout << " \nWait your transaction is being processed ";
            {
                //  string phrase = "just wait for a moment";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
            }
            for (int i = 1; i <= 10; i++)
            {
                cout << ">";
                sleep(1);
            }
            cout << "\n\nTransaction successful !\n";
            {
                //  string phrase = "your transaction is successful";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
            }
            break;

        case 3:
        {
            //  string phrase = "enter details of your account";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);
        }
            cout << "\nEnter your phone number\n";
            cin >> phone_no;
            cout << "\nEnter your 4 digit transaction PIN\n";
            cin >> pin;
            cout << " \nWait your transaction is being processed ";
            {
                //  string phrase = "just wait for a moment";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
            }
            for (int i = 1; i <= 10; i++)
            {
                cout << ">";
                sleep(1);
            }
            cout << "\n\nTransaction successful !\n";
            {
                //  string phrase = "your transaction is successful";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
            }
            break;

        case 4:

            cout << "\nOkay...";
            {
                //  string phrase = "ok";
                // string command = "espeak \"" + phrase + "\"";
                // const char *charCommand = command.c_str();
                // system(charCommand);
            }
        }
    }

    void carry_bag()
    {
        cout << "Do you want carry bag ?\n";
        {
            //  string phrase = "Do you want carry bag ";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);
        }
        cin >> user_will;

        if (user_will == "yes")
        {
            carry_bag_cost = 10;
        }
        else
        {
            carry_bag_cost = 0;
        }
    }

    void generate_bill()
    {

        if (cost == 0)
        {
            gst = 0;
            carry_bag_cost = 0;
            return;
        }
        carry_bag();

        if (cost >= 10, 000)
        {
            gst = ((20 * cost) / 100.0);
            gst_percent = 20;
        }
        else if (cost >= 1000 && cost < 10000)
        {
            gst = ((15 * cost) / 100.0);
            gst_percent = 15;
        }
        else if (cost >= 500 && cost < 1000)
        {
            gst = ((10 * cost) / 100.0);
            gst_percent = 10;
        }
        else if (cost < 500)
        {
            gst_percent = 5;

            gst = ((5 * cost) / 100.0);
        }

        total_payable_amount = cost + (gst + carry_bag_cost);
    }
    void display_bill()
    {
        {
            //  string phrase = "your e bill is being generated ";
            // string command = "espeak \"" + phrase + "\"";
            // const char *charCommand = command.c_str();
            // system(charCommand);
        }
        cout << "\n\n           >>> E bill <<< ";
        cout << "\n-------------------------------------------\n";
        cout << " TOTAL_SHOPPING AMOUNT => " << cost << endl;
        cout << " GST => " << gst << " (" << gst_percent << "%)" << endl;
        cout << " CARRY BAG => " << carry_bag_cost << endl
             << endl;
        cout << " FINAL AMOUNT => " << total_payable_amount << endl;
        cout << "-------------------------------------------\n";
        if (cost != 0)
        {
            pay_method();
            send_details();
        }
    }
    void send_details()
    {
        cout << "\n\nInvoice of the order is sent to your Email\n";
        // string phrase = "bill is sent to your email";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);
    }
};

int main()
{

    int choice;
    password obj1;
    obj1.check_password();
    get_user_details obj2;
    obj2.get_info();
    obj2.give_reply();
    while (1)
    {
        system("cls");
        cout << "\n1.Query_window\n2.shopping\n3.Chat_window\n";
        cout << "What would you like to do ?\n";
        // string phrase = "what would you like to do";
        // string command = "espeak \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);
        cin >> choice;
        if (choice == 1)
        {
            query_window obj3;
            obj3.give_reply();
        }
        else if (choice == 2)
        {

            while (1)
            {
                jalandhar o1;
                ludhiana o2;
                phagwara o3;
                E_bill o4;

                int choice1;
                int choice2;
                int choice3;
                int choice4;
                int choice5;
                int choice6;
                int choice7;
                int choice8;
                int choice9;
                int choice10;
                int choice11;
                int choice12;
                int choice13;
                while (1)
                {
                    system("cls");

                    cout << "\n\n1.Jalandhar\n2.Ludhiana\n3.Phagwara\n4.Shopping complete";
                    cout << "\n\nWhere would you like to shop ?\n";
                    // string phrase = "please choose a location for shopping";
                    // string command = "espeak \"" + phrase + "\"";
                    // const char *charCommand = command.c_str();
                    // system(charCommand);
                    cin >> choice1;

                    if (choice1 == 1)
                    {
                        while (1)
                        {
                            cout << "\n\tShops available are\n";
                            cout << "-------------------------------------\n";
                            cout << "\n1.Global Footwears\n2.Ultimate toys\n3.Shobhit confectionary\n4.Leave area";
                            //         string phrase = "please choose a shop";
                            // string command = "espeak \"" + phrase + "\"";
                            // const char *charCommand = command.c_str();
                            // system(charCommand);
                            cout << "\n\nWhere would you like to shop ?\n";
                            cin >> choice2;
                            if (choice2 == 1)
                            {
                                cout << "\nThere are these many varieties of shoes in our shop\n";
                                cout << "\n1.Sneakers (500)\n2.formals (800)\n3.Sandals (400)\n";
                                //             string phrase = "select the product";
                                // string command = "espeak \"" + phrase + "\"";
                                // const char *charCommand = command.c_str();
                                // system(charCommand);
                                cout << "\nWhat would you like to buy ?\n";
                                cin >> choice3;

                                o1.calculate_cost(choice2, choice3);
                                cout << "\nitem added to cart....\n";
                            }
                            else if (choice2 == 2)
                            {
                                cout << "\nThere are these many varieties of toys in our shop\n";
                                cout << "\n1.Remote control car (900)\n2.Remote control helicopter (1500)\n3.Bicycle (2000)\n";
                                //              string phrase = "select the product";
                                // string command = "espeak \"" + phrase + "\"";
                                // const char *charCommand = command.c_str();
                                // system(charCommand);
                                cout << "\n\nWhat would you like to buy ?\n";
                                cin >> choice4;
                                o1.calculate_cost(choice2, choice4);
                                cout << "\nitem added to cart....\n";
                            }
                            else if (choice2 == 3)
                            {
                                cout << "\nThere are these many varieties of eatables in our shop\n";
                                cout << "\n1.Biscuits (10)\n2.pastry (40)\n3.milk (40)\n";
                                //              string phrase = "select the product";
                                // string command = "espeak \"" + phrase + "\"";
                                // const char *charCommand = command.c_str();
                                // system(charCommand);
                                cout << "\nWhat would you like to buy ?\n";
                                cin >> choice5;
                                o1.calculate_cost(choice2, choice5);
                                cout << "\nitem added to cart....\n";
                            }
                            else if (choice2 == 4)
                            {
                                system("cls");
                                break;
                            }
                        }

                        o1.display_cost();
                    }

                    else if (choice1 == 2)
                    {
                        while (1)
                        {

                            cout << "\nShops available are\n";
                            cout << "\n1.Tanishq jwellery\n2.Sonata watches\n3.Gupta sports\n4.Leave area\n";
                            string phrase = "please choose a location for shopping";
                            // string command = "espeak \"" + phrase + "\"";
                            // const char *charCommand = command.c_str();
                            // system(charCommand);
                            cout << "\n\nWhere would you like to shop ?\n";
                            cin >> choice6;

                            if (choice6 == 1)
                            {
                                cout << "\nThere are these many varieties of jwellery in our shop\n";
                                cout << "\n1.Diamond Necklace (1,00,000)\n2. Gold chain (50,000)\n3.Earings (5000)\n";
                                cout << "\nWhat would you like to buy ?\n";
                                //              string phrase = "select the product";
                                // string command = "espeak \"" + phrase + "\"";
                                // const char *charCommand = command.c_str();
                                // system(charCommand);
                                cin >> choice7;
                                o2.calculate_cost(choice6, choice7);
                                cout << "\nitem added to cart....\n";
                            }
                            else if (choice6 == 2)
                            {
                                cout << "\nThere are these many varieties of Watches in our shop\n";
                                cout << "\n1.Digital watch (600)\n2.Analog watch (750)\n3.Chain watch (1000)\n";
                                cout << "\nWhat would you like to buy ?\n";
                                //              string phrase = "select the product";
                                // string command = "espeak \"" + phrase + "\"";
                                // const char *charCommand = command.c_str();
                                // system(charCommand);
                                cin >> choice8;
                                o2.calculate_cost(choice6, choice8);
                                cout << "\nitem added to cart....\n";
                            }
                            else if (choice6 == 3)
                            {
                                cout << "\nThere are these many varieties of sport equipments in our shop\n";
                                cout << "\n1.Cricket kit (5000)\n2.Badminton (1000)\n3.sweat band (90)\n";
                                cout << "\nWhat would you like to buy ?\n";
                                //              string phrase = "select the product";
                                // string command = "espeak \"" + phrase + "\"";
                                // const char *charCommand = command.c_str();
                                // system(charCommand);
                                cin >> choice9;
                                o2.calculate_cost(choice6, choice9);
                                cout << "\nitem added to cart....\n";
                            }
                            else if (choice6 == 4)
                            {
                                system("cls");
                                break;
                            }
                        }
                        o2.display_cost();
                    }

                    else if (choice1 == 3)
                    {
                        while (1)
                        {
                            cout << "\nShops available are\n";
                            cout << "\n1.The Food court\n2.Fashion clothes collection\n3. Sanjay medical store\n4.Leave area\n";
                            cout << "\n\nWhere would you like to shop ?\n";
                            //          string phrase = "please choose a location for shopping";
                            // string command = "espeak \"" + phrase + "\"";
                            // const char *charCommand = command.c_str();
                            // system(charCommand);
                            cin >> choice10;
                            if (choice10 == 1)
                            {
                                cout << "\nThere are these many varieties of food in our shop\n";
                                cout << "\n1.Pizza (100)\n2.Burger (60)\n3.Noodles (70)\n";
                                cout << "\nWhat would you like to buy ?\n";
                                //             string phrase = "select the product";
                                // string command = "espeak \"" + phrase + "\"";
                                // const char *charCommand = command.c_str();
                                // system(charCommand);
                                cin >> choice11;
                                o3.calculate_cost(choice10, choice11);
                                cout << "\nitem added to cart....\n";
                            }
                            else if (choice10 == 2)
                            {
                                cout << "\nThere are these many varieties of clothes in our shop\n";
                                cout << "\n1.Jeans (750)\n2.Jacket (1800)\n3.Hoodie (900)\n";
                                cout << "What would you like to buy ?\n";
                                //             string phrase = "select the product";
                                // string command = "espeak \"" + phrase + "\"";
                                // const char *charCommand = command.c_str();
                                // system(charCommand);
                                cin >> choice12;
                                o3.calculate_cost(choice10, choice12);
                                cout << "\nitem added to cart....\n";
                            }
                            else if (choice10 == 3)
                            {
                                cout << "\nWe have Medicines for in our shop\n";
                                cout << "\n1.DOLO 650 (fever) (30) \n2.Saradon (headache) (20)\n3.Entroquinal (constipation) (40)\n";
                                cout << "\nWhat would you like to buy ?\n";
                                //             string phrase = "select the product";
                                // string command = "espeak \"" + phrase + "\"";
                                // const char *charCommand = command.c_str();
                                // system(charCommand);
                                cin >> choice13;
                                o3.calculate_cost(choice10, choice13);
                                cout << "\nitem added to cart....\n";
                            }
                            else if (choice10 == 4)
                            {
                                system("cls");
                                break;
                            }
                        }
                        o3.display_cost();
                    }
                    if (choice1 == 4)
                    {

                        o4.generate_bill();
                        o4.display_bill();

                        cout << "\nThank you for shopping , do visit next time.....\n";
                        //     string phrase = "Thank you for shopping ";
                        // string command = "espeak \"" + phrase + "\"";
                        // const char *charCommand = command.c_str();
                        // system(charCommand);
                        break;
                    }
                }
            }
        }

        else if (choice == 3)
        {

            chat_window obj5;
            obj5.give_reply();
        }
    }
}
