#ifndef _DESIGN_RUPP_H_
#define _DESIGN_RUPP_H_

#include<iostream>
#include"astra.h"
#include<conio.h>
#include<iomanip>


using namespace std;

void firstwelcome(){
//logo
    foreColor(4);gotoxy(50,5);cout<<" (           (    (       ";
    foreColor(4);gotoxy(50,6);cout<<" )\\ )        )\\ ) )\\ ) ";
    foreColor(4);gotoxy(50,7);cout<<"(()/(    (  (()/((()/(    ";
    foreColor(4);gotoxy(50,8);cout<<" /(_)) (_)\\  /(_))/(_))  ";
    foreColor(4);gotoxy(50,9);cout<<"(_))((_)((_)(_)) (_))     ";
    foreColor(6);gotoxy(50,10);cout<<"| _ \\| | | || _ \\| _ \\ ";
    foreColor(6);gotoxy(50,11);cout<<"|   /| |_| ||  _/|  _/    ";
    foreColor(6);gotoxy(50,12);cout<<"|_|_\\ \\___/ |_|  |_|    ";
    foreColor(6);gotoxy(46,13);cout<<"Royal University of Phnom Penh";                    
//left and right design 
    //left
    drawBoxDoubleLineWithBG(29,3,1,13,5);
    drawBoxDoubleLineWithBG(31,3,1,13,5);
    drawBoxDoubleLineWithBG(27,4,1,11,1);
    drawBoxDoubleLineWithBG(33,4,1,11,1);
    drawBoxDoubleLineWithBG(30,2,1,15,11);
    //right 
    drawBoxDoubleLineWithBG(92,3,1,13,5);
    drawBoxDoubleLineWithBG(94,3,1,13,5);
    drawBoxDoubleLineWithBG(90,4,1,11,1);
    drawBoxDoubleLineWithBG(96,4,1,11,1);
    drawBoxDoubleLineWithBG(93,2,1,15,11);
    //loading 
    char a=219;
    for(int i=1;i<=50;i++){
            foreColor(13);gotoxy(55,14);cout<<"Loading..."<<i*2<<"%";
        	foreColor(13);gotoxy(36+i,16);cout<<a<<" ";delay(150);
		}
}
//side
void loading(){
    char a=219;
    for(int i=1;i<=55;i++){        
        	foreColor(13);gotoxy(26+i,24);cout<<a<<" ";delay(150);
		}
}
// prop box 
void boxmenu(){
    //left   
    drawBoxDoubleLineWithBG(21,4,1,20,11);
    drawBoxDoubleLineWithBG(19,5,1,18,5);
    drawBoxDoubleLineWithBG(17,6,1,16,1);
    //top 
    drawBoxDoubleLineWithBG(25,4,60,1,6);
    //midlle
    drawBoxDoubleLineWithBG(25,7,60,14,11);
    //bottom
    drawBoxDoubleLineWithBG(25,23,60,1,6);
    //right
    drawBoxDoubleLineWithBG(88,4,1,20,11);
    drawBoxDoubleLineWithBG(90,5,1,18,5);
    drawBoxDoubleLineWithBG(92,6,1,16,1);
    
}
void aboutus(){
    foreColor(5);gotoxy(40,5);cout<<"ROYAL UNIVERSITY OF PHNOM PENH";
    drawBoxDoubleLineWithBG(47,8,18,1,6);
// box for name
    drawBoxDoubleLineWithBG(33,11,20,1,3);
    drawBoxDoubleLineWithBG(60,11,20,1,3);
    drawBoxDoubleLineWithBG(33,14,20,1,5);
    drawBoxDoubleLineWithBG(60,14,20,1,5);
    drawBoxDoubleLineWithBG(33,17,20,1,4);
    drawBoxDoubleLineWithBG(60,17,20,1,4);
// name group member
    foreColor(4);gotoxy(48,9);cout<<"OUR GROUP MEMBER";
    foreColor(6);gotoxy(35,12);cout<<"LEAV SOVATANAK";
    foreColor(6);gotoxy(63,12);cout<<"PHON KIMCHHEA";
    foreColor(6);gotoxy(35,15);cout<<"VENG NARA";
    foreColor(6);gotoxy(63,15);cout<<"LY MITHONA";
    foreColor(6);gotoxy(35,18);cout<<"RIN THARADY";
    foreColor(6);gotoxy(63,18);cout<<"PRAK VEASNA";
//  

    foreColor(6);gotoxy(40,24);cout<<"Press any key to go back to menu";
}
//option box //login about us and exit
void smallbox(){
    //menuleft
    drawBoxDoubleLineWithBG(27,8,15,12,5);
    //menuright 
    drawBoxDoubleLineWithBG(45,8,38,12,1);
    //hline 
    HLine(27,10,15,5,'=');
}
void menutext(){
    foreColor(6);gotoxy(50,5);cout<<"Welcome";
    foreColor(6);gotoxy(31,9);cout<<"{~Menu~}";
    foreColor(2);gotoxy(28,12);cout<<"1. Login";
    foreColor(2);gotoxy(28,15);cout<<"2. About US";
    foreColor(2);gotoxy(28,18);cout<<"3. Exit";
}
//just logo and text 
void g3logo(){
    delay(200);foreColor(1);gotoxy(48,10);cout<<"    ___  _______  ____   ___    ";
    delay(200);foreColor(1);gotoxy(48,11);cout<<"   /  / /  _____||___ \\  \\  \\   ";
    delay(200);foreColor(1);gotoxy(48,12);cout<<"  /  / |  |  __    __) |  \\  \\  ";
    delay(200);foreColor(1);gotoxy(48,13);cout<<" <  <  |  | |_ |  |__ <    >  > ";
    delay(200);foreColor(1);gotoxy(48,14);cout<<"  \\  \\ |  |__| |  ___) |  /  /  ";
    delay(200);foreColor(1);gotoxy(48,15);cout<<"   \\__\\ \\______| |____/  /__/   ";
                                            
    delay(200);foreColor(1);gotoxy(48,17);cout<<"      Movie Management System    ";
    foreColor(2);gotoxy(43,24);cout<<"Press number to select[1-3]";
}
//login text
void menulogin(){
    foreColor(5);gotoxy(46,11);cout<<"Username : ";
    drawBoxSingleLineWithBG(58,10,20,1,5);
    foreColor(5);gotoxy(46,16);cout<<"Password : ";
    drawBoxSingleLineWithBG(58,15,20,1,5);
    foreColor(5);gotoxy(40,24);cout<<"Enter username and password to login";
}
//when login success 
void loginsucess(){
    foreColor(2);gotoxy(53,20);cout<<"Login Sucessful!";
    loading();
}
void aftersucess(){
    boxmenu();
    smallbox();
    foreColor(6);gotoxy(50,5);cout<<"Welcome";
    foreColor(6);gotoxy(31,9);cout<<"{~Menu~}";
    foreColor(2);gotoxy(28,12);cout<<"1. MOVIE"; 
    foreColor(2);gotoxy(28,15);cout<<"2. SELL TICKET";
    foreColor(2);gotoxy(28,18);cout<<"3. LOGOUT";
}
void detail(){
    HLine(45,10,38,1,'=');gotoxy(51,9);foreColor(1);cout<<"Movie Management System";
    foreColor(6);gotoxy(47,12);cout<<"1. GO TO MOVIE MANAGEMENT"; 
    foreColor(6);gotoxy(47,15);cout<<"2. GO TO SELL MOVIE TICKET";
    foreColor(6);gotoxy(47,18);cout<<"3. GO BACK TO MENU";
    foreColor(2);gotoxy(42,24);cout<<"Press number to select[1-3]";
}
void newbox(){
    //top 
    drawBoxDoubleLineWithBG(5,3,110,1,2);
    //middle
    drawBoxDoubleLineWithBG(5,6,110,19,1);
    //bottom
    drawBoxDoubleLineWithBG(5,27,110,1,2);
}
void smallboxofnewbox(){
    //left
    drawBoxDoubleLineWithBG(7,7,30,17,5);
    //right
    drawBoxDoubleLineWithBG(40,7,73,17,1);
    //hline
    HLine(7,9,30,5,'=');
}
void moviemanagetext(){
    gotoxy(45,4);foreColor(6);cout<<"RUPP GROUP3 MOVIE MANAGEMENT SYSTEM";
    gotoxy(15,8);foreColor(6);cout<<"{~MOVIE MENU~}";
    gotoxy(8,11);foreColor(6);cout<<"1. ADD MOVIE";
    gotoxy(8,13);foreColor(6);cout<<"2. VIEW ALL MOVIE";
    gotoxy(8,15);foreColor(6);cout<<"3. SEARCH MOVIE";
    gotoxy(8,17);foreColor(6);cout<<"4. EDIT MOVIE";
    gotoxy(8,19);foreColor(6);cout<<"5. DELETE MOVIE";
    gotoxy(8,21);foreColor(6);cout<<"6. BACK TO MENU";
    gotoxy(8,23);foreColor(6);cout<<"7. LOGOUT";
    gotoxy(50,28);foreColor(5);cout<<"Press number to select[1-6]";
}
void logoruppg3(){
        
foreColor(4);gotoxy(51,10);    cout<<"             _____  _    _ _____  _____        ";   
foreColor(5);gotoxy(51,11);    cout<<"            |  __ \\| |  | |  __ \\|  __ \\     ";
foreColor(6);gotoxy(51,12);    cout<<"            | |__) | |  | | |__) | |__) |       ";
foreColor(7);gotoxy(51,13);    cout<<"            |  _  /| |  | |  ___/|  ___/         ";
foreColor(3);gotoxy(51,14);    cout<<"            | | \\ \\| |__| | |    | |          ";
foreColor(2);gotoxy(51,15);    cout<<"            |_|  \\_\\\\____/|_|    |_|             ";     
foreColor(1);gotoxy(51,16);    cout<<"      _____ _____   ____  _   _ _____ ____        ";
foreColor(2);gotoxy(51,17);    cout<<"     / ____|  __ \\ / __ \\| |  | |  __ \\___ \\   ";
foreColor(3);gotoxy(51,18);    cout<<"    | |  __| |__) | |  | | |  | | |__) |__) |      ";
foreColor(7);gotoxy(51,19);    cout<<"    | | |_ |  _  /| |  | | |  | |  ___/|__ <      ";
foreColor(6);gotoxy(51,20);    cout<<"    | |__| | | \\ \\| |__| | |__| | |    ___) |     ";
foreColor(5);gotoxy(51,21);    cout<<"     \\_____|_|  \\_\\_____/ \\____/|_|   |____/    ";
                                                
                                          

}

//when login failed
void loginfailed(){
    foreColor(4);gotoxy(47,20);cout<<"username or password is incorrect!";
    delay(2000);
}
void insert_box(){
    drawBoxDoubleLineWithBG(40,7,73,17,1);
    HLine(40,9,73,2,'=');
    drawBoxDoubleLineWithBG(5,27,110,1,2);
    foreColor(6);gotoxy(42,8);cout<<"INSERTING MOVIE INFORMATION... ";
}
void displaybox(){
    drawBoxDoubleLineWithBG(5,3,110,1,2);
    gotoxy(45,4);foreColor(3);cout<<"RUPP GROUP3 MOVIE MANAGEMENT SYSTEM";
    drawBoxDoubleLineWithBG(5,6,110,1,2);
}
void escbox(){
    drawBoxDoubleLineWithBG(5,30,25,1,2);
    gotoxy(8,31);foreColor(3);cout<<"[ESC] BACK TO MENU";
    
}
void search(){
    drawBoxDoubleLineWithBG(40,7,73,17,1);
    HLine(40,9,73,2,'=');
    drawBoxDoubleLineWithBG(5,27,110,1,2);
    foreColor(3);gotoxy(41,8);cout<<"SEARCHING MOVIE INFORMATION... ";
    foreColor(3);gotoxy(41,11);cout<<"  _____   ___   ____  ____      __  __ __  ____  ____    ____         ";delay(100);
    foreColor(3);gotoxy(41,12);cout<<" / ___/  /  _] /    ||    \\    /  ]|  |  ||    ||    \\  /    |      ";delay(100);
    foreColor(3);gotoxy(41,13);cout<<"(   \\_  /  [_ |  o  ||  D  )  /  / |  |  | |  | |  _  ||   __|        ";delay(100);
    foreColor(3);gotoxy(41,14);cout<<" \\__  ||    _]|     ||    /  /  /  |  _  | |  | |  |  ||  |  |        ";delay(100);
    foreColor(3);gotoxy(41,15);cout<<" /  \\ ||   [_ |  _  ||    \\ /   \\_ |  |  | |  | |  |  ||  |_ | __  __";delay(100);
    foreColor(3);gotoxy(41,16);cout<<" \\    ||     ||  |  ||  .  \\      ||  |  | |  | |  |  ||     ||  ||  |  ";delay(100);
    foreColor(3);gotoxy(41,17);cout<<"  \\___||_____||__|__||__|\\_| \\____||__|__||____||__|__||___,_||__||__|";delay(100);
    
    foreColor(3);gotoxy(65,20);cout<<"YOU'RE NOW IN SEARCHING MODE.." ;
}
void buyticket(){
    delay(200);foreColor(4);gotoxy(35,10);cout<<"  ______ _____  _____   ____  _____    ";
    delay(200);foreColor(4);gotoxy(35,11);cout<<" |  ____|  __ \\|  __ \\ / __ \\|  __ \\   ";
    delay(200);foreColor(4);gotoxy(35,12);cout<<" | |__  | |__) | |__) | |  | | |__) |  ";
    delay(200);foreColor(4);gotoxy(35,13);cout<<" |  __| |  _  /|  _  /| |  | |  _  /   ";
    delay(200);foreColor(4);gotoxy(35,14);cout<<" | |____| | \\ \\| | \\ \\| |__| | | \\ \\   ";
    delay(200);foreColor(4);gotoxy(35,15);cout<<" |______|_|  \\_\\_|  \\_\\____/|_|  \\_\\  ";

     foreColor(4);gotoxy(29,24);cout<<"This function is not available yet due the time limit";                                  
}
void update_box(){
    drawBoxDoubleLineWithBG(40,7,73,17,1);
    HLine(40,9,73,2,'=');
    drawBoxDoubleLineWithBG(5,27,110,1,2);
    foreColor(6);gotoxy(42,8);cout<<"UPDATING MOVIE INFORMATION... ";
}
void delete_box(){
    drawBoxDoubleLineWithBG(40,7,73,17,1);
    HLine(40,9,73,2,'=');
    drawBoxDoubleLineWithBG(5,27,110,1,2);
    foreColor(6);gotoxy(42,8);cout<<"DELETING MOVIE INFORMATION... ";

    foreColor(4);gotoxy(50,11);cout<<"  _____  ______ _      ______ _______ ______  ";delay(100);
    foreColor(4);gotoxy(50,12);cout<<" |  __ \\|  ____| |    |  ____|__   __|  ____| ";delay(100);
    foreColor(4);gotoxy(50,13);cout<<" | |  | | |__  | |    | |__     | |  | |__    ";delay(100);
    foreColor(4);gotoxy(50,14);cout<<" | |  | |  __| | |    |  __|    | |  |  __|  ";delay(100);
    foreColor(4);gotoxy(50,15);cout<<" | |__| | |____| |____| |____   | |  | |____ ";delay(100);
    foreColor(4);gotoxy(50,16);cout<<" |_____/|______|______|______|  |_|  |______|";delay(100);

    foreColor(4);gotoxy(65,20);cout<<"YOU'RE NOW IN DELETING MODE.." ;
}





#endif