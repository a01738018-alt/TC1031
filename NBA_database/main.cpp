/*
 * main.cpp
 *
 *  Created on: 24/10/2025
 *      Author: Emmanuel Garcia Lopez
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "NBAdata.h"

int main() {
    ifstream archivo_entrada("nba_data.csv"); 
    if (!archivo_entrada.is_open()) {
        cerr << "Error: Could not open the file.\n";
        return 1;
    }

    vector<NBAdata> data; 
    string line;
    getline(archivo_entrada, line);

    while (getline(archivo_entrada, line)) {
        istringstream ss(line);
        NBAdata team;
        char comma; 

        ss >> team.rk >> comma;
        getline(ss, team.team, ',');
        ss >> team._3Ppercent >> comma >> team._2Ppercent >> comma >> team.wins >> comma >> team.losses;
        
        data.push_back(team);
    }

    archivo_entrada.close();

    NBAdata enter; 
    enter.manageMenu(data); 
  
   ofstream archivo_salida("reporteNBA.txt"); 
    if (archivo_salida.is_open()) {
        for (const NBAdata &team : data) {
            archivo_salida << team.rk << ", " << team.team << ", " << team._3Ppercent << ", " << team._2Ppercent << endl;
        }
        archivo_salida.close();
    } else {
        cerr << "Unable to open file to write data." << endl;
        return 1;
    }

    return 0;
} 