//
// Created by Denim Hawkgirl on 5/31/22.
//

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream fin;
    fin.open(argv[1]);
    if (!fin.is_open())
    {
        std::cout << "Invalid file!" << std::endl;
        return (1);
    }

    std::ofstream fout;
    std::string name = argv[1];

    fout.open(name + ".replace");
    std::string tmp;
    size_t index;

    while(getline(fin, tmp))
    {
        index = 0;
        while ((index = tmp.find(s1, index)) != std::string::npos)
        {
            tmp.erase(index, s1.length());
            tmp.insert(index, s2);
            index += s2.length();
        }
        fout << tmp << std::endl;
    }
    fin.close();
    fout.close();
    return 0;
}
