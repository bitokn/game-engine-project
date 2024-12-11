#include <stdio.h>
#include <stdlib.h>

#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    ofstream output_file;
    output_file.open("example.ppm");
    output_file << "P3\n"
                << "8 5\n"
                << "255";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            output_file << (1 / (i * j)) * 255;
            output_file << (1 / (i * j)) * 255;
            output_file << (1 / (i * j)) * 255;
        }
    }
    output_file.close();
    return 0;
}
