#include <iostream>
#include <iomanip>
#include <fstream>

// ./a.out ./filename s1 s2  ====> filename.replace
int main(void)
{
    std::ifstream   ifs("./src/filename");
    std::ofstream   ofs("./src/filename.replace");
    std::string     line;
    //ifs >> line;

    while (std::getline(ifs, line, '\n'))
    {
        std::cout << line;
        ofs << line;
        ofs << "\n";
    }

    // replace s1 by s2


    // line >> filename.replace
    return (0);
}