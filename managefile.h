#ifndef _MANAGE_FILE_H_
#define _MANAGE_FILE_H_

#include"ruppoption.h"
#include<fstream>   
#include<sstream>
#include<vector>
#include<string>
using namespace std;
class movie{
    public:
    //old data
        string id;
        string movie_name;
        string movie_type;
        string movie_price; 
        string duration;
        string ticket; 
    //new data(for update)
        string new_id;
        string new_movie_name;
        string new_movie_type;
        string new_movie_price;
        string new_duration;
        string new_ticket;

    public: 
        void inputdata(){
            gotoxy(9,28);foreColor(5);cout<<"ENTER MOVIE ID: ";cin>>id;fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,11);foreColor(6);cout<<"THE MOVIE's ID IS ";foreColor(5);cout<<id;
        
            gotoxy(9,28);foreColor(5);cout<<"ENTER MOVIE NAME: ";getline(cin,movie_name);fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,13);foreColor(6);cout<<"THE MOVIE's NAME IS ";foreColor(5);cout<<movie_name;
            
            gotoxy(9,28);foreColor(5);cout<<"ENTER MOVIE's GENRE: ";getline(cin,movie_type);fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,15);foreColor(6);cout<<"THE MOVIE's GENRE IS ";foreColor(5);cout<<movie_type;
            
            gotoxy(9,28);foreColor(5);cout<<"ENTER MOVIE DURATION : ";getline(cin,duration);fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,17);foreColor(6);cout<<"THE MOVIE's DURATION IS ";foreColor(5);cout<<duration<<" MINUTES";
            
            gotoxy(9,28);foreColor(5);cout<<"ENTER MOVIE PRICE: ";cin>>movie_price;fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,19);foreColor(6);cout<<"THE MOVIE's PRICE IS ";foreColor(5);cout<<movie_price<< " $ ";
            
            gotoxy(9,28);foreColor(5);cout<<"ENTER MOVIE TICKET: ";cin>>ticket;fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,21);foreColor(6);cout<<"THE MOVIE's TICKET IS ";foreColor(5);cout<<ticket<<"  TICKETS";   
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            
            gotoxy(9,28);foreColor(5);cout<<"[ESC] TO BACK TO MENU";
            gotoxy(85,28);foreColor(5);cout<<"[ENTER] TO INSERT MORE MOVIE";
        }

        void header(){
            cout<<left<<setw(20)<<"ID"<<setw(20)<<"MOVIE NAME"<<setw(20)<<"GENRE"<<setw(20)<<"DURATION"<<setw(20)<<"PRICE"<<setw(3)<<"TICKET"<<endl;
        }
        void update(){
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(9,28);foreColor(5);cout<<"ENTER NEW MOVIE ID: ";cin>>new_id;fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,11);foreColor(6);cout<<"THE NEW MOVIE's ID IS ";foreColor(5);cout<<new_id;
           
            
            gotoxy(9,28);foreColor(5);cout<<"UPDATE MOVIE NAME: ";getline(cin,new_movie_name);fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,13);foreColor(6);cout<<"THE NEW MOVIE's NAME IS ";foreColor(5);cout<<new_movie_name;
            
            gotoxy(9,28);foreColor(5);cout<<"UPDATE MOVIE's GENRE: ";getline(cin,new_movie_type);fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,15);foreColor(6);cout<<"THE NEW MOVIE's GENRE IS ";foreColor(5);cout<<new_movie_type;
            
            gotoxy(9,28);foreColor(5);cout<<"UPDATE MOVIE DURATION : ";getline(cin,new_duration);fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,17);foreColor(6);cout<<"THE NEW MOVIE's DURATION IS ";foreColor(5);cout<<new_duration<<" MINUTES";
            
            gotoxy(9,28);foreColor(5);cout<<"UPDATE MOVIE PRICE: ";cin>>new_movie_price;fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,19);foreColor(6);cout<<"THE NEW MOVIE's PRICE IS ";foreColor(5);cout<<new_movie_price<< " $ ";
            
            gotoxy(9,28);foreColor(5);cout<<"UPDATE MOVIE TICKET: ";cin>>new_ticket;fflush(stdin);cin.clear();
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            gotoxy(42,21);foreColor(6);cout<<"THE NEW MOVIE's TICKET IS ";foreColor(5);cout<<new_ticket<<"  TICKETS";   
            drawBoxDoubleLineWithBG(5,27,110,1,2);
            
            gotoxy(9,28);foreColor(5);cout<<"[ESC] TO BACK TO MENU";
            gotoxy(85,28);foreColor(5);cout<<"[ENTER] TO UPDATE MORE MOVIE";
        
        }


};
movie m;
fstream f;
void writefile(){
    f.open("movie.csv",ios::out|ios::app);
    m.inputdata();
    f<<m.id<<","<<m.movie_name<<","<<m.movie_type<<","<<m.duration<<","<<m.movie_price<<","<<m.ticket<<endl;
    gotoxy(50,24);foreColor(2);cout<<"INSERT SUCCESSFULLY";
    f.close();
}
void readfile(){
    f.open("movie.csv",ios::in);
    string line;
    if (f.fail()){
        cout<<"file not found"<<endl;
        exit(0);
    }
    if(f.good()){
            displaybox();
            gotoxy(8,7);foreColor(3);m.header();
            cout<<endl;
        while(getline(f,line)){
            stringstream ss(line);
            string displayy;
            cout<<"        ";
            while(getline(ss,displayy,',')){
                cout<<left<<setw(20)<<displayy;
                
            }
            for(int i=0;i<105;i++){
                    cout<<"-";
                }
            cout<<endl;
        }  
        escbox();
    }
    f.close();
}
void searchfile(){
    ifstream file; 
        file.open("movie.csv");
            int sid, roll2, count = 0;
            gotoxy(9,28);foreColor(5);cout << "ENTER THE MOVIE ID : ";cin >> sid;fflush(stdin);cin.clear();
            system("cls");
            vector<string> row;
            string line, word;
            displaybox();
            gotoxy(8,7);foreColor(3);m.header();cout<<endl;
            while (getline(file, line)) {
                    row.clear();
                    stringstream s(line);
                    while (getline(s, word, ',')) {
                            row.push_back(word);
                        }
                            roll2 = stoi(row[0]);
                            if (roll2 == sid) {
                                cout<<"        ";
                                count = 1;
                                cout<<left<<setw(20)<<row[0]
                                    <<setw(20)<<row[1]
                                    <<setw(20)<<row[2]
                                    <<setw(20)<<row[3]
                                    <<setw(20)<<row[4]
                                    <<setw(3)<<row[5];
                                cout<<endl;
                                cout<<"        ";
                                for(int i=0;i<105;i++){
                                    cout<<"-";
                                }
                                cout<<endl;
                                break;
                            }         
                    }
            
        if(count == 0){
             gotoxy(85,28);foreColor(4);cout << "ID NOT FOUND\n";
        }
        escbox();
            
        file.close();
}

void updatefile(){
    fstream fin;
    fin.open("movie.csv",ios::in);

    if (!fin.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }
    

    ofstream WriteFile("backup.csv",ios::out);

    if(!WriteFile.is_open()){
        cout<<"Error creating output file."<<endl;
        fin.close();
        return;
    }

    int ID, ID1, count = 0, i;

    gotoxy(9,28);foreColor(5);
    cout << "ENTER THE ID OF MOVIE YOU WANT TO UPDATE:";
    cin >> ID;fflush(stdin);cin.clear();

    string line, word;
    vector<string> row;

    while (getline(fin, line)) {
        row.clear();
        stringstream s(line);
        while (getline(s, word, ',')) {
            row.push_back(word);
        }

        ID1 = stoi(row[0]);

        int row_size = row.size();

        if (ID1 == ID) {
            count = 1;
            m.update(); //input newdata
            row[0]= m.new_id;
            row[1] = m.new_movie_name;
            row[2] = m.new_movie_type;
            row[3] = m.new_duration;
            row[4] = m.new_movie_price;
            row[5] = m.new_ticket;
        }
        for (i = 0; i < row_size - 1; i++) {
            WriteFile << row[i] << ",";
        }
        WriteFile << row[row_size-1] << "\n";
    }
    if(count==0){
            gotoxy(50,24);foreColor(4);cout<<"RECORD NOT FOUND";
    }else{
        gotoxy(50,24);foreColor(6);cout << "RECORD UPDATED";
    }
    fin.close();
    WriteFile.close();
    remove("movie.csv");
    rename("backup.csv", "movie.csv");
   
}
void deletefile(){
    fstream fin;
        fin.open("movie.csv", ios::in);
    
    if (!fin.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }
    ofstream fout("movie_new.csv", ios::out);
       
        int ID, roll1, count = 0;

        string line,word;
        vector<string> row;
   
    gotoxy(9,28);foreColor(5);
    cout << "ENTER THE ID OF MOVIE YOU WANT TO DELETE:";
    cin >> ID;fflush(stdin);cin.clear();

    while (getline(fin, line)) {
            row.clear();
            stringstream s(line);
            
            while (getline(s, word, ',')) {
                    row.push_back(word);
                }
            roll1 = stoi(row[0]);
            if (roll1 != ID) {
                for (size_t i = 0; i < row.size() - 1; i++) {
                    fout << row[i] << ", ";
                }
                fout << row.back() << "\n";
            }
            else {
                count = 1;
            }
        }
if (count == 1) {
    gotoxy(50,24);foreColor(6);cout << "RECORD DELETED\n";
}
else {
    gotoxy(50,24);foreColor(4);cout << "RECORD NOT FOUND\n";
}

drawBoxDoubleLineWithBG(5,27,110,1,2);
gotoxy(9,28);foreColor(5);cout<<"[ESC] TO BACK TO MENU";
gotoxy(85,28);foreColor(5);cout<<"[ENTER] TO UPDATE MORE MOVIE";
fin.close();
fout.close();
remove("movie.csv");
rename("movie_new.csv","movie.csv");
}









#endif