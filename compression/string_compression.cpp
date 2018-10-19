#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>

using namespace std;

void compress(char* str){
    int count = 0, track = 0;
    char current = str[0];
    char output[100];
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == current){
            count++;
        }

        else{
            if(count>1){
                output[track] = current;
                track++;
                output[track] = static_cast<char>(count);;
                track++;
            }
            else{
                output[track] = current;
                track++;
            }
            count = 0;
            current = str[i];
        }
    }
    strcpy(str, output);
}

int main(){
    char input[100];
    cout << "input a string: ";
    cin >> input;

   compress(input);

    cout << "compressed string: " << input;

    system("PAUSE");
    return 0;
}