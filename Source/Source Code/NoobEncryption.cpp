//custom encryption made by a noob, inspired from cypher
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include "termcolor.hpp"
#include <thread>
#include <stdlib.h>

using namespace std;

void Debugging_text(char something)
{
    cout << something;
}
void Debugging_numbers(int something)
{
    cout << something << " ";
}

class noobEncryption
{
 public:
    char flag;
    int flag_space = 0;
    int flag_count = 0;
    int Check_file(string file_name)
    {
        int file_value;
        ifstream file_state;
        ifstream Pre_process_check;
        Pre_process_check.open("Pre-Processing_values.nob");
        if (Pre_process_check.fail() || Pre_process_check.fail())
        {
            cout << termcolor::on_red << "FATAL:" << termcolor::reset << termcolor::yellow << " Pre-Processing Values Does not exists! \n" << termcolor::reset;
            this_thread::sleep_for(0.7s);
            cout << termcolor::red << "Aborting... \n";
            this_thread::sleep_for(2s);
            exit(1);
        }
        Pre_process_check.close();
        file_state.open(file_name);
        if (file_state.fail() || file_state.bad())
        {
            file_value = -1;
            file_state.close();
            return file_value;
        }
        else
        file_value = 1;
        file_state.close();
        return file_value;
    }
   void encrypt_file(string file_name, int switch_name, int verbose)
    {
        ifstream flag_counts;
        string split_file_name;
        split_file_name = file_name.substr(0, file_name.find('.'));
        split_file_name = split_file_name.substr(0, split_file_name.find('_'));
        flag_counts.open(file_name);
     while (flag_counts >> noskipws >> flag)
        {
        flag_count++;
        }
        int encrypter_flag = flag_count;
        int encrypter_flag1 = flag_count;
        flag_counts.close();
        char To_b_enc[flag_count];
        ifstream raw_data;
        raw_data.open(file_name);
     for (int i = 0; i < flag_count; i++)
     {
        raw_data >> noskipws >>To_b_enc[i];
     }
     raw_data.close();
     ifstream count_char;
     count_char.open("Pre-Processing_values.nob");
     while (count_char >> count_char_flag)
     {
         char_count++;
     }
     char_count = char_count / 2;
     int fixer = char_count;
     if (fixer % 2 != 0)
     {
         cout << termcolor::on_red << "INTERNAL:" << termcolor::reset << termcolor::yellow << " Make pre-processing values total lines " << termcolor::green << "EVEN " << termcolor::yellow << "first then try again. \n";
         getch();
         exit(1);
     }
     ifstream assng;
     assng.open("Pre-Processing_values.nob");
     for (int n = 0; n < char_count; n++)
        {
        assng >> x[n];
        assng >> y[n];
        }
        assng.close();
        switch(switch_name){
        //Encrypt fetched character
        case 1:
        {
            if (verbose == 1){
            cout << endl << "Characeters detected: " << termcolor::green << encrypter_flag << termcolor::reset << endl;
            cout << endl << "Pre-processing values detected: " << termcolor::green << fixer << termcolor::reset << endl << endl;
            this_thread::sleep_for(1s);
            }
            string Encrypted_file = split_file_name.append("_NoobEncrypted.txt");
            ofstream data_saver;
            data_saver.open(Encrypted_file);
        cout << termcolor::red << "Encrypting...";
        this_thread::sleep_for(2s);
        cout << ".....";
        this_thread::sleep_for(1s);
        cout << "...";
        this_thread::sleep_for(1s);
        cout << "...";
        this_thread::sleep_for(1s);
        cout << "...";
        this_thread::sleep_for(1s);
        cout << "...........";
        this_thread::sleep_for(2s);
        cout << "..." << termcolor::reset << endl;
        for(int i = 0; i < encrypter_flag; i++)
        {
            for (int n = 0; n < fixer; n++)
            {
                if (To_b_enc[i] == x[n])
                   {
                      if (verbose == 1)
                       {
                           cout << To_b_enc[i] << termcolor::green << " assingned as " << termcolor::reset << y[n] << endl;
                           this_thread::sleep_for(0.1s);
                       }
                     To_b_enc[i] = y[n];
                     break;
                   }
            }
            data_saver << noskipws << To_b_enc[i];
        }
        data_saver.close();
        cout << endl;
        cout << termcolor::on_green << "File encrypted sucessfully! \n" << termcolor::reset;
        cout << termcolor::red << "NOW PROTECT YOU DATA MORE CAUTIOUSLY BECAUSE ITS NOW MORE VULNERABLE!. DO NOT MODIFY Pre-processing values anyhow or you will lose your DATA.;)\n";
        }
        break;
        //Decrypt generated data
        case 2:
            ifstream data_reader;
            data_reader.open(file_name);
            for (int i = 0; i < flag_count; i++)
                 {
                    data_reader >> noskipws >>To_b_enc[i];
                 }
            data_reader.close();
            string Decrypt_File_name = split_file_name.append("_NoobDecrypt.txt");
            ofstream data_DEsaver;
            data_DEsaver.open(Decrypt_File_name);
        auto repeat_prvnt = [=](char checker,  int y_index) -> int
        {
            int x_index;
            int a;
            int x_2 = 0;
            if (y_index == 0)
            {
                x_index = 0;
            }
            else if (y_index > 0)
            {
                x_index = y_index - 1;
            }
          while(x_2 <= x_index && x_index !=0)
          {
              if(x[x_2] == checker) // character exists previously
              {
                  a = 1;
                  break;
              }
              else if(x_2 == x_index && x[x_2] != checker) // chrarcter doesn't exists previously
              {
                  a = -1;
                  break;
              }
              x_2++;
          }
          x_2 = 0;
          return a;
        };
        cout << "Running on thread: " << termcolor::on_red << this_thread::get_id  << termcolor::reset << endl << endl;
        this_thread::sleep_for(2s);
        cout << termcolor::red << "Decrypting...";
        this_thread::sleep_for(2s);
        cout << "...";
        this_thread::sleep_for(1s);
        cout << "...";
        this_thread::sleep_for(1s);
        cout << "...";
        this_thread::sleep_for(1s);
        cout << ".." << termcolor::reset << endl;
        for(int i = 0; i < encrypter_flag1; i++)
        {
            for (int n = 0; n < fixer; n++)
            {
                if (To_b_enc[i] == y[n])
                {
                    To_b_enc[i] = x[n];
                    break;
                }
                if (n == char_count)
                    n == 0;
            }
            data_DEsaver << noskipws << To_b_enc[i];
            //cout << To_b_enc[i];
        }
        data_DEsaver.close();
        this_thread::sleep_for(5s);
        cout << termcolor::on_green << "DATA DECRYPTED!\n" << termcolor::reset;
        cout << termcolor::yellow << "File Saved as " << termcolor::reset << Decrypt_File_name;
        break;
        }
    }
    private:
    int char_count = 0;
    char count_char_flag;
    char x[100], y[100];
};
int main()
{
    SetConsoleTitle("NoobEncryption");
    noobEncryption Encryption;
    string File_name;
    string decission;
    int verbose = 0;
    int switch_name;
    this_thread::sleep_for(2s);
    cout << termcolor::green;
    cout << R"( ________    ________   ________   ________
|\   ___  \ |\   __  \ |\   __  \ |\   __  \
\ \  \\ \  \\ \  \|\  \\ \  \|\  \\ \  \|\ /_
 \ \  \\ \  \\ \  \\\  \\ \  \\\  \\ \   __  \
  \ \  \\ \  \\ \  \\\  \\ \  \\\  \\ \  \|\  \
   \ \__\\ \__\\ \_______\\ \_______\\ \_______\
    \|__| \|__| \|_______| \|_______| \|_______|
 _______    ________    ________   ________       ___    ___  ________   _________   ___   ________   ________
|\  ___ \  |\   ___  \ |\   ____\ |\   __  \     |\  \  /  /||\   __  \ |\___   ___\|\  \ |\   __  \ |\   ___  \
\ \   __/| \ \  \\ \  \\ \  \___| \ \  \|\  \    \ \  \/  / /\ \  \|\  \\|___ \  \_|\ \  \\ \  \|\  \\ \  \\ \  \
 \ \  \_|/__\ \  \\ \  \\ \  \     \ \   _  _\    \ \    / /  \ \   ____\    \ \  \  \ \  \\ \  \\\  \\ \  \\ \  \
  \ \  \_|\ \\ \  \\ \  \\ \  \____ \ \  \\  \|    \/  /  /    \ \  \___|     \ \  \  \ \  \\ \  \\\  \\ \  \\ \  \
   \ \_______\\ \__\\ \__\\ \_______\\ \__\\ _\  __/  / /       \ \__\         \ \__\  \ \__\\ \_______\\ \__\\ \__\
    \|_______| \|__| \|__| \|_______| \|__|\|__||\___/ /         \|__|          \|__|   \|__| \|_______| \|__| \|__|
                                                \|___|/                                  v.1.0.0alpha

                                                                                                                    )";
    cout << termcolor::reset << endl << termcolor::on_cyan << "Hackers choice!.....Just kidding ;)";
    this_thread::sleep_for(3s);
    cout << termcolor::reset << endl << R"(------------------------------------------------------------------------------------------------------------------------)" << endl;
    cout << endl << termcolor::yellow << "What do you want? TYPE " << termcolor::reset <<termcolor::on_green << "help me" << termcolor::reset << termcolor::yellow << " For more Commands; \n" << termcolor::reset;
    cout << termcolor::on_yellow << "Type 1 T0." << termcolor::reset << termcolor::cyan << " Encrypt DATA from text. \n" << termcolor::reset;
    cout << termcolor::on_yellow << "Type 2 T0." << termcolor::reset << termcolor::cyan << " DEcrypt DATA from text. \n";
    cout << endl << termcolor::reset << termcolor::magenta << "Your Command N00B -> ";
    getline(cin, decission);
    if (decission == "1"){
        switch_name = 1;
    cout << termcolor::blue << "Type your file name with extension \n" << termcolor::reset;
    getline(cin, File_name);
    int File_state = Encryption.Check_file(File_name);
    while(File_state == -1)
    {
        cout << endl;
        cout << termcolor::on_red << "FATAL:" << termcolor::reset << termcolor::yellow << " Something Wrong with the file. Either it is not existed or in bad state! \n" << termcolor::reset;
        cout << termcolor::blue << "Type your file name with extension \n" << termcolor::reset;
        getline(cin, File_name);
        File_state = Encryption.Check_file(File_name);
    }
    Encryption.encrypt_file(File_name, switch_name, verbose);
    getch();
    }
    else if (decission == "2"){
     switch_name = 2;
    cout << termcolor::blue << "Type your file name with extension \n" << termcolor::reset;
    getline(cin, File_name);
    int File_state = Encryption.Check_file(File_name);
    while(File_state == -1)
    {
        cout << endl;
        cout << termcolor::on_red << "FATAL:" << termcolor::reset << termcolor::yellow << " Something Wrong with the file. Either it is not existed or in bad state! \n" << termcolor::reset;
        cout << termcolor::blue << "Type your file name with extension \n" << termcolor::reset;
        getline(cin, File_name);
        File_state = Encryption.Check_file(File_name);
    }
    Encryption.encrypt_file(File_name, switch_name, verbose);
    getch();
    }
    else if(decission == "help me" || decission == "HELP ME")
    {
        system("CLS");
        cout << endl << termcolor::magenta << R"( _     _       _          ______  _______ _
| |   | |     | |        |  ___ \(_______) |
| |__ | | ____| |____    | | _ | |_____  | |
|  __)| |/ _  ) |  _ \   | || || |  ___) |_|
| |   | ( (/ /| | | | |  | || || | |_____ _
|_|   |_|\____)_| ||_/   |_||_||_|_______)_|
                |_|                         )";

    cout << endl;
    cout << termcolor::yellow << "This tab contains some commands for debugging and development purposes. Casual N00Bs " << termcolor::red << "DO NOT " << termcolor::yellow << "require this feature \n";
    cout << termcolor::reset << termcolor::green << R"(------------------------------------------------------------------------------------------------------------------------)" << termcolor::reset << endl;
    cout << termcolor::on_yellow << "Type 3 F0R." << termcolor::reset << termcolor::cyan << " Developing custom Pre-procesing values guide. \n" << termcolor::reset;
    cout << termcolor::on_yellow << "Type 4 F0R." << termcolor::reset << termcolor::cyan << " Developer{n00b-spectre} Notes!. \n" << termcolor::reset;
    cout << termcolor::on_yellow << "Type 5 T0." << termcolor::reset << termcolor::cyan << " Encrypt DATA from text " << termcolor::reset << termcolor::red << "IN VERBOSE MODE \n" << termcolor::reset;
    cout << termcolor::on_yellow << "Type 6 F0R." << termcolor::reset << termcolor::cyan << " Guide For setting up development enviroment \n" << termcolor::reset;
    cout << endl;
    cout << termcolor::yellow << "Or else, type " << termcolor::reset << termcolor::on_red << "EXIT \n\n" << termcolor::reset << endl;
    cout << termcolor::magenta << "Your Command N00B -> ";
    getline(cin,decission);
    if (decission == "3")
    {
        system("CLS");
        this_thread::sleep_for(1s);
        cout << termcolor::green << "<<<<<<<<< Guide  to develop custom pre-processing values >>>>>>>>> \n"  << termcolor::reset;
        this_thread::sleep_for(2s);
        cout << R"( 1. With any note editor {NOTEPAD++ RECOMENDED} Open Pre-Processing_values.nob
 2. Assign Custom values by taking the reference of the pre-defined values
 x[n] and y[n] are the values that the function will take as "Reference" and "Assingner" respectively
 Reference is the value that the function will fetch from the file to be encrypted and the Assingner is the value that will be assingned to the fetched value

 I Know It's getting complicated but bare with me. You are the future of this LAME project...
            X[n] = Y[n]
 meaning, If X[n] will be equal to the fetched characters from the file (To be encrypted) then the characters will be equal to Y[n] So, In layman's  term You just have to modify x[n] to equate it with y[n].
 for example, if some fetched charactersfor the file (to be encrypted) is e (x[n]), then it will be equal to h (y[n]) during encryption and vice-versa during decryption...

                  <<<<<Rough Map>>>>>

                x[n] - e h - y[n]  * n = number of characters present in file, for looping purposes. See source code for more info.
                x[n] - f m - y[n]
                x[n] - g p - y[n]

                //encrypting data
                while in loop if data[i] == x[n], then data[i] == y[n].    * i = total number of characters in file (to be encrypted) for looping purposes.

                //decrypting data
                while in loop if data[i] == y[n], then data[i] == x[n].

 Give a strong values to the characters so, that it will be hard to brute force...)";
        cout << endl << endl;
        cout << termcolor::red << "DO NOT " << termcolor:: yellow << "Assingn same values twice in 'Reference' and 'Assingner' \n";
        cout << termcolor::reset << termcolor::on_red << "EXIT";
        getch();
        exit(1);
    }
    else if (decission == "EXIT" || decission == "exit" || decission == "Exit")
    {
        cout <<  termcolor::red << "terminating...";
        this_thread::sleep_for(2s);
        exit(1);
    }
    else if (decission == "4")
    {
        system("CLS");
        this_thread::sleep_for(2s);
        cout << termcolor::blue << R"(___  ____ _  _     .._  _ ____ ___ ____ ____ ..
|  \ |___ |  | .   ''|\ | |  |  |  |___ [__  ''
|__/ |___  \/  ,     | \| |__|  |  |___ ___]
                                               )";

        cout << termcolor::reset << endl << endl;
        this_thread::sleep_for(2s);
        cout << termcolor::red << "So, You are here to know all my musings during developing this S@#T ... \n \n" << termcolor::reset;
        cout << termcolor::yellow << "All the FAQs of the pre-release version are include! \n\n" << termcolor::reset;
        cout << termcolor::magenta << " Why I named it NooEncryption? \n" << termcolor::yellow;
        cout << "Just Look at the source code and you will know why I named it as NoobEncryption \n\n" << termcolor::magenta;
        cout << "How I can use it in various real life scenerio? \n" << termcolor::yellow;
        cout << "Basically, this project was made to learn file-handling in-depth and improve my coding and keyboard typing skills. But, If you are a pro N00B and like to store important personal data in files which can be open in text format then Encryption can help. If you are using this S@#t then don't forget to hide the 'Pre-Processing_values.nob' file. \n \n" << termcolor::magenta;
        cout << "I can't Encrypt my file with this S@#T. \n" << termcolor::yellow;
        cout << "This is because the file you are trying to encrypt is not UTF-8, UTF-16, etc. encoded. Anything which can be viewed in native Text-Editor can be encrypted. If any file is in zip, rar format or anything with custom encryption cannot be encrypted. Ex: Binary Files, .zip, .rar, etc. \n \n" << termcolor::reset;
        cout << endl;
        cout << R"(Now, Some (1-2) people are asking about the GUI version of this S@#T.
 Here's the answer:
 This project was made to improve my skills and anything that will improve it, I will definitely do it. The only reason GUI was not completed because I am still Learning it.
 As soon as I will be able to write GUI Application, I will look forward to Make This S@#T's GUI version available so, that more pro N00Bs can enjoy this

 I don't know if anyone is interested in this application But, If you Made this Far then, I really Appreciate this and you are no longer a N00B...)";
    cout << endl << endl;
    cout << termcolor::on_red << "EXIT" << termcolor::reset;
    }
    else if (decission == "5")
    {
        verbose = 1;
        switch_name = 1;
    cout << termcolor::blue << "Type your file name with extension \n" << termcolor::reset;
    getline(cin, File_name);
    int File_state = Encryption.Check_file(File_name);
    while(File_state == -1)
    {
        cout << endl;
        cout << termcolor::on_red << "FATAL:" << termcolor::reset << termcolor::yellow << " Something Wrong with the file. Either it is not existed or in bad state! \n" << termcolor::reset;
        cout << termcolor::blue << "Type your file name with extension \n" << termcolor::reset;
        getline(cin, File_name);
        File_state = Encryption.Check_file(File_name);
    }
    Encryption.encrypt_file(File_name, switch_name, verbose);
    getch();
    }
    else if (decission == "6")
    {
        system("CLS");
        cout << termcolor::green << "<<<<<<Guide For setting up enviroment for developing this S@#t>>>>>> \n\n" << termcolor::reset;
        this_thread::sleep_for(2s);
        cout << R"(This is a short guide about setting up development enviroment...

Pre-requisites::

     1. Integrated Software Developement (aka IDE)
     2. A C++/C compiler (I am using MinGw x64, in this case)
     3. Time and patience to understand the source code

-----------------------------------------------------------------------------------------------------------------

Firstly, Open the source file NoobEncryption.cpp and try to understand the logics behind it
Second, Modify Anything You want and save it by pressing Ctrl+S and you are all done for compilation (varies with every compiler).
To compile the modified C++ make sure that MinGw compiler path set in the enviroment variables.
To SET in the enviroment variable go to properties of "this PC" then go to "advanced settings" then click on "Enviroment Variables".
Then under "system variables" search for "path" click on it and click on edit. A new window should Pop-up. Click on "New" then paste the bin folder path inside the Mingw directory (Normally it should be, C:/MinGw/bin), click ok/apply/close and head to main desktop
open cmd in the directory of the source file and type the command "g++ NoobEncryption.cpp -o noob", wait for compilation and you are done! (unless, you do not get any errors).

                        NOTE: g++ will only work if it's in the enviroment variable or else, you have to copy the source file to the bin folder
                             -o flag refers to custom file name

You can also link it statically, if you want...)";
        cout << endl << endl;
        cout << termcolor::yellow << "You have to move custom header files to the Compiler/include directory or else it wont work. Search online for more info about custom header \n\n";
        cout << termcolor::reset << termcolor::on_red << "Exit" << termcolor::reset;
        getch();
        exit(1);
    }
    else if (decission != "3" && decission != "4" && decission != "5" && decission != "EXIT" && decission != "exit"  && decission != "Exit" && decission != "6")
    {
        cout << termcolor::reset << termcolor::on_red << "FATAL:" << termcolor::reset << termcolor::yellow << " Unknown Choice! \n";
        this_thread::sleep_for(2s);
        cout << termcolor::red << "Aborting..." << termcolor::reset;
        this_thread::sleep_for(1s);
        exit(1);
    }
    }
 else if (decission != "1" && decission != "2" && decission != "HELP ME" && decission != "help me")
    {
        cout << termcolor::reset << termcolor::on_red << "FATAL:" << termcolor::reset << termcolor::yellow << " Unknown Choice! \n";
        this_thread::sleep_for(2s);
        cout << termcolor::red << "Aborting..." << termcolor::reset;
        this_thread::sleep_for(1s);
        exit(1);
    }
    getch();
    return 0;
}
