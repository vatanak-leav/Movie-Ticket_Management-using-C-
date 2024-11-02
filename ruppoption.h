#ifndef _RUPP_OPTION_H_
#define _RUPP_OPTION_H_

#include<iostream>
#include"ruppdesign.h"
#include"managefile.h"

using namespace std;
class option{
    private: 
        string username;
        string password;
    public: 
    
        void set_to_public(string user,string pass){
            username=user;
            password=pass;
        }
        void options(){
            do{
                boxmenu();
                smallbox();
                menutext();
                g3logo();
                setcursor(0,0);
                char option=getch();
                switch(option){
                    case '1':{
                        do{ 
                            smallbox();
                            menutext();
                            menulogin();
                            setcursor(1,0);
                            login();
                            if(username=="ruppG3" && password=="ruppG3"){
                                setcursor(0,0);
                                loginsucess();
                                menu();
                            }
                            else{
                                loginfailed();  
                            } 

                        }while(true);

                                               
                        break;
                    }
                    case '2':{
                        boxmenu();
                        aboutus();
                        getch();
                        break;
                    }
                    case '3':{
                        exit(0);
                        break;
                    }
                }
            }while(true);
        }
        void login(){
            foreColor(6);gotoxy(59,11);getline(cin,username);fflush(stdin);cin.clear();
            foreColor(6);gotoxy(59,16);getline(cin,password);fflush(stdin);cin.clear();
        }
        void menu(){
            system("cls");
            boxmenu();
            aftersucess();
            detail();
            menuoption();
        }
        void moviemanageop(){
                setcursor(0,0);
                system("cls");
                boxoption();
                logoruppg3();
                option_afterlogin();
        }
        void boxoption(){
            newbox();
            smallboxofnewbox();
            moviemanagetext();
        }
        void menuoption(){
            do{ 
                char menuop=getch();
                switch(menuop){
                    case '1':{
                        moviemanageop();
                        break;
                    }
                    case '2':{
                            boxmenu();
                            buyticket();
                            getch();
                            menu();
                        break;
                    }
                    case '3':{
                        system("cls");
                        options();
                        break;
                    }
                }
            }while(true);
            
        }
        void option_afterlogin(){
            do{ 
            
                switch(getch()){
                    case '1':{
                        setcursor(1,0);
                        do{ 
                            insert_box();
                            writefile();
                        }while(getch()!=27);
                        moviemanageop();
                        break;
                    }
                    case '2':{
                           do{
                               system("cls");
                               readfile();
                            }while(getch()!=27);
                            moviemanageop();
                        break;
                    }
                    case '3':{
                        do{  
                            
                            system("cls");
                            boxoption();
                            setcursor(1,0);
                            search();
                            searchfile();
                        }while(getch()!=27);
                        moviemanageop();
                        break;
                    } 
                    case '4':{
                        setcursor(1,0);
                        do{
                            update_box();
                            updatefile();
                        }while(getch()!=27);
                        moviemanageop();
                        break;
                    }
                    case '5':{
                        setcursor(1,0);
                        do{
                            delete_box();
                            deletefile();
                            
                        }while(getch()!=27);
                        moviemanageop();
                        break;
                    }
                    case '6':{
                        system("cls");
                        menu();
                        break;
                    }
                    case '7':{
                        system("cls");
                        options();
                        break;
                    }
                }
            }while(true);
        }
        
};



#endif