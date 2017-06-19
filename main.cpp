/*
 Gabriel Equitz - student id:  915254839 
 * Homework 1 - CSC 340  
 * computer code that finds the frequency of characters in a sentence and the 
 * tokens (words) of a sentence.
 * 02/11/2017
 */

#include <cstdlib>
#include <iostream>


using namespace std;

//function declarations
void getLetterFreq(string aString);
void StrToTokens(string aString);


int main(int argc, char** argv) {
 // local variable declaration
  string s ;

  //ask the user to type a sentence.
  cout << "Type a sentence and press the key Enter or just press the key Enter to use the default sentence." << endl;

  getline(cin,s);

  //if no sentence is entered use default sentence.
  if (s.length() == 0) {
    s = "Always remember that you are unique. Just like everyone else.";
    cout << s << endl;
  }

  cout << endl;



  // calling function to get the letter frequency
   getLetterFreq(s);
   
  // calling the function to display the tokens
    cout << endl;
    cout << "The tokens are : " << endl;
    StrToTokens(s);

    return 0;
}
//function that returns letter frequency
void getLetterFreq(string aString)
{
  
  int countN  ;
  
  //loop through all the letters of the alphabet
  for (char c = 'a'; c <= 'z'; c++){

    countN = 0;
    // loop through all the characters of aString
    for (int i = 0; i < aString.length(); i++){

       if (aString[i] == c || aString[i] == toupper(c))
          countN = countN + 1;

    } //close i for

    if (countN > 0) {
      cout << "The frequency of " << c << " is: " << countN << endl;

    } //close if

  } //close c for 



}
//function that splits a string into tokens
void StrToTokens(string aString) {

   int iBeg = 0;
   int iEnd;
   char aDelimiter = ' ';
   int nWord = 0; 
   string aWord[100];
    // loop through all the characters of aString
    for (int i = 0; i <= aString.length(); i++){

      if  (aString[i] == aDelimiter) {
         iEnd = i;
         //substring(start index, span)
         aWord[nWord] = aString.substr(iBeg,iEnd-iBeg);
         nWord = nWord + 1;
         
         iBeg = i+1;

      } // close if

    } // close for
   
   //stores the last token
   aWord[nWord] = aString.substr(iBeg,aString.length()-iBeg);
           
   //displays the tokens        
   for (int i = 0; i <= nWord; i++){
       cout << aWord[i] << endl;
   } // close for
    
}




