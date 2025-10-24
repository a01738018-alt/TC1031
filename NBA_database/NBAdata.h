/*
 * NBAdata.h
 *
 *  Created on: 24/10/2025
 *      Author: Emmanuel Garcia Lopez
 */

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstring>

using namespace std;

class NBAdata {
public:
    float _3Ppercent;
    float _2Ppercent;
    string team;
    int rk; 
    int wins;
    int losses;

    NBAdata(); 
    NBAdata(float _3Ppercent, float _2Ppercent, const string& team, int rk);
    void sortBy3Ppercent(std::vector<NBAdata> &data); //selection sort
    void sortBy2Ppercent(std::vector<NBAdata> &data); // selection sort
    void sortByWins(vector<NBAdata> &data); 
    void sortByLosses(vector<NBAdata> &data);
    void searchTeam(const vector<NBAdata> &data); 
    void accessRk(const vector<NBAdata> &data); 
    void showMenu();
    void manageMenu(vector<NBAdata> &data);
    void mergeSortBy3Ppercent(vector<NBAdata> &data, int left, int middle, int right);
    void mergeSortBy2Ppercent(vector<NBAdata> &data, int left, int middle, int right);
    void mergeSort(vector<NBAdata> &data, bool sortBy3);
    string toLowerCase(const string str);
};