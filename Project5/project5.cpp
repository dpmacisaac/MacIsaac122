/*
 Name: Dominic MacIsaac
 Class: CPSC 122, Section 1
 Date Submitted: 
 Assignment:  Project 5                                                
 Description: Generates a key, encrypts a plain text, and decrypts a cipher text
 Notes: Used Stack Overflow article to figure out "noskipws" so I could include spaces (https://stackoverflow.com/questions/18870002/how-to-read-a-space-character-from-a-text-file-in-c)
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>


using namespace std;

int keyGen();
char encrypt(char ch, int key);
char decrypt(char ch, int key);
void fileOpen(fstream& file, string name, char mode);

int main(int argc, char* argv[])
{
  fstream finKey;
  fstream finT;
  fstream fout;
  int key = 0;
  char temp = ' ';
    
  if(atoi(argv[1])==0)
  {
    fileOpen(fout, argv[2], 'w');
    fout << keyGen();
  }
  
  if(atoi(argv[1])==1)
  {
    fileOpen(finKey, argv[2], 'r');
    fileOpen(finT, argv[3], 'r');
    fileOpen(fout, argv[4], 'w');
    finKey >> key;
    
    while(finT.peek() != EOF)
    {
      finT >> noskipws >>  temp;
      if(temp > 64 && temp < 91)
      {
        fout << encrypt(temp, key);
      }
      else
      {
        fout << temp;
      }
    }
  }
  
  if(atoi(argv[1])==2)
  {
    fileOpen(finKey, argv[2], 'r');
    fileOpen(finT, argv[3], 'r');
    fileOpen(fout, argv[4], 'w');
    finKey >> key;
    
    while(finT.peek() != EOF)
    {
      finT >> noskipws >>  temp;
      if(temp > 64 && temp < 91)
      {
        fout << decrypt(temp, key);
      }
      else
      {
        fout << temp;
      }
    }
  }

  return 0;
}

/*
Description: Randomly generates an integer in the range: [1..25]
Input: reference to keyFile
Output: writes a randomly generated integer in the range [1..25] to keyFile 
*/
int keyGen()
{
  int key = 0;
  srand(time(NULL));
  key = rand() % 25 + 1;
  
  return key;
}

/*
Description: Encrypts an upper case alphabetic character using the Caesar cipher
Input: upper case alphabetic character, valid key
Returns: encrypted version of ch
*/
char encrypt(char ch, int key)
{
  int chNum = 0,encryptVal = 0;
  char encryptCh = ' ';
  
  chNum = ch - 65;
  encryptVal = (chNum + key) % 26;
  encryptVal = encryptVal + 65;
  encryptCh = static_cast<char>(encryptVal);
  
  return encryptCh;
}

/*
Description: Decrypts an upper case alphabetic character using the Caesar cipher
Input: upper case alphabetic character, valid key
Returns: decrypted version of input
*/
char decrypt(char ch, int key)
{
  char decryptCh = ' ';
  int chNum = 0, decryptVal = 0;
  
  chNum = ch - 65;
  decryptVal = (chNum - key + 26) % 26;
  decryptVal = decryptVal + 65;
  decryptCh = static_cast<char>(decryptVal);
  
  return decryptCh;
}

/*
Description: function opens a file
Input: file stream object reference, name of the file, mode of open
Output: input file name is opened. 
*/
void fileOpen(fstream& file, string name, char mode)
{
  string fileType;

  if (mode == 'r')
    fileType = "input";
  if (mode == 'w')
    fileType = "output";

  if (mode == 'r')
    file.open(name, ios::in);  //available thorugh fstream
  if (mode == 'w')
    file.open(name, ios::out);  //available through fstream;
 
  if (file.fail()) //error condition 
  {
    cout << "Error opening " << fileType << " file" << endl; 
    exit(EXIT_FAILURE);
  }
}
