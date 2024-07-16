#include <iostream>
#include <iomanip> // Para setw
#include <cstdlib>
#include <string>
#include <exception>

const unsigned int semestres = 9999;
const unsigned int anoIngresso = 21;
const unsigned int contador = 9999;
// program create semester year first year counter_limit

std::string semester = " ";
std::string action = "";
std::string year = "";
std::string counter_limit = 0;
std::string program_name = "";
int semester_varint = 0;
int year_varint = 0;
int counter_limit = 0;


void convertSemesterAndYear();
void executeAlgorithm();
int main(int argc,char *argv[]) {
    try{
        program_name = argv[0];
        action = argv[1];
        semester = argv[2];
        year = argv[3];
        counter_limit = argv[4];

        if(action == "create"){
            convertSemesterAndYear();

            return EXIT_SUCCESS;
        }

        throw std::exception("Invalid command.");
        return EXIT_FAILURE;

    }
    catch (std::exception e){
        throw e;
    }




    

    return 0;
}


void convertSemesterAndYear(){
    std::stoi(semester);
    std::stoi(year);
}

void executeAlgorithm(){
    for (unsigned int i_sem = 1; i_sem <= semester_varint; i_sem++) {
        for (unsigned int i_contador = 1; i_contador <= contador_varint; i_contador++) {
            std::cout << std::setw(2) << std::setfill('0') << anoIngresso;
            std::cout << std::setw(4) << std::setfill('0') << i_sem;
            std::cout << std::setw(4) << std::setfill('0') << i_contador << std::endl;
        }
    }
}
