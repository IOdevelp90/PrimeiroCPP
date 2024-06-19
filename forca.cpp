#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <set>

std ::vector<std::string> retornaCoutendoArquivo(const std::string &nomeArquivo) {
    std::vector<std::string>palavras;
    std::ifstream arquivo(nomeArquivo);
    std:string palavra;

    if(arquivo.is_open()) {
        while (getline(arquivo, palavra)) {
            palavras.push_back(palavra);
        }
        arquivo.close();
    } else {
        std::cerr <<"Erro ao abrir o arquivo " <<nomeArquivo << std::endl;

}


}
