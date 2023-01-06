#include <iostream>
#include <string>
#include <tclap/CmdLine.h>
#include "sortingcpp/sorter.hpp"


int main(int argc, char** argv)
{
    sorter::Sorter sorter;
    sorter.parseCommands(argc, argv);
}