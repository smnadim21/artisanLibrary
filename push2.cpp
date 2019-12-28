#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
//    cout << "You have entered " << argc
//         << " arguments:" << "\n";
//
//    for (int i = 0; i < argc; ++i)
//        cout << argv[i] << "\n";

    cout << "git status" << endl;
     printf("\x1B[31mTexting\033[0m\t\t");
    system("git status");
    cout << "git add ." << endl;
    system("git add .");

    string command = "git commit -m \"";
    for (int i = 1; i < argc; ++i)\
    {
        command += argv[i];
        command += " ";
    }

    command += " by smnadim21\"";

    cout << command << endl;
    system(command.c_str());
    system("git push");


    return 0;
}
