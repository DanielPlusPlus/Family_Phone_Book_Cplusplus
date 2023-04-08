#ifndef Library_h
#define Library_h
#include <wx/msgdlg.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string.h>
using namespace std;

struct Person
{
    int choose;
    int id;
    string name;
    string last_name;
    string street_name;
    unsigned int house_number;
    unsigned int postcode;
    string city;
    unsigned int phone_number;
    string relationship;
};

typedef struct PersonWx
{
    wxString choose;
    wxString id;
    wxString name;
    wxString last_name;
    wxString street_name;
    wxString house_number;
    wxString postcode;
    wxString city;
    wxString phone_number;
    wxString relationship;
}PersonWx;

struct Account
{
    int id;
    string login;
    string password;
    string file;
};

void dataBase(const string line,Person& person, int cntp);

int readDataBase(string f,vector<Person> &db);

PersonWx convertToWx(long long int i, vector<Person> db);

struct Person convertToCpp(PersonWx w);

void addPerson(vector<Person> &db,string f, int cntp, struct Person n);

void saveDataBase(vector<Person> &db,string f);

void deletePerson(vector<Person> &db,int id);

void deletePersonbyFirstLastName(vector<Person> &db,string fName,string lName);

void deletePersonbyPhoneNumber(vector<Person> &db,unsigned int phone);

void searchPerson(PersonWx w, vector<Person> &db);

void editPersonbyNAME(vector<Person> &db,int ID, string NEW_NAME);

void editPersonbyLAST_NAME(vector<Person> &db,int ID, string NEW_NAME);

void editPersonbySTREET_NAME(vector<Person> &db,int ID, string NEW_NAME);

void editPersonbyHOUSE_NUMBER(vector<Person> &db,int ID, unsigned int NEW_NAME);

void editPersonbyPOSTCODE(vector<Person> &db,int ID, unsigned int NEW_NAME);

void editPersonbyCITY(vector<Person> &db,int ID, string NEW_NAME);

void editPersonbyRELATIONSHIP(vector<Person> &db,int ID, string NEW_NAME);

void editPersonbyPHONE_NUMBER(vector<Person> &db,int ID, unsigned int NEW_NAME);

void filterPersonbyID(PersonWx w, vector<Person> &db);

void filterPersonbyNAME(PersonWx w, vector<Person> &db);

void filterPersonbyLASTNAME(PersonWx w, vector<Person> &db);

void filterPersonbySTREETNAME(PersonWx w, vector<Person> &db);

void filterPersonbyHOUSENUMBER(PersonWx w, vector<Person> &db);

void filterPersonbyPOSTCODE(PersonWx w, vector<Person> &db);

void filterPersonbyCITY(PersonWx w, vector<Person> &db);

void filterPersonbyPHONENUMBER(PersonWx w, vector<Person> &db);

void filterPersonbyRELATIONSHIP(PersonWx w, vector<Person> &db);

void sortByIDAsc(vector<Person> &db);

void sortByIDDesc(vector<Person> &db);

void sortByNAMEAsc(vector<Person> &db);

void sortByNAMEDesc(vector<Person> &db);

void sortByLASTNAMEAsc(vector<Person> &db);

void sortByLASTNAMEDesc(vector<Person> &db);

void sortBySTREETNAMEAsc(vector<Person> &db);

void sortBySTREETNAMEDesc(vector<Person> &db);

void sortByHOUSENUMBERAsc(vector<Person> &db);

void sortByHOUSENUMBERDesc(vector<Person> &db);

void sortByPOSTCODEAsc(vector<Person> &db);

void sortByPOSTCODEDesc(vector<Person> &db);

void sortByPHONENUMBERAsc(vector<Person> &db);

void sortByPHONENUMBERDesc(vector<Person> &db);

void sortByCITYAsc(vector<Person> &db);

void sortByCITYDesc(vector<Person> &db);

void sortByRELATIONSHIPAsc(vector<Person> &db);

void sortByRELATIONSHIPDesc(vector<Person> &db);
#endif
