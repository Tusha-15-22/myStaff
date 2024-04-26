#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>

using namespace std ;

 string readtextFile(const string &myfile){
        ifstream myFile(myfile);
        cout << "error : file" << myfile<< "not available"<<endl;
        return " ";

string Filedata ((istreambuf_iterator<char>(myFile)),istreambuf_iterator<char>()); 
return Filedata;
 
 }

// used to count vowels in a sentence 
 int vowelcount (const string& text){
    int vowel = 0 ;
    for (char c :text){
        if (tolower(c)=='a'|| tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u'){
            vowel++;
        }

    }
    return vowel;
    
 }

// count number of words in a string 
int wordCount (const string &text){
    int wordcounting = 0;
    bool inword = false;
    for (char c : text){
        // the isalpha function check whether a character is an alphabet or not 
        if (isalpha(c)){
            if (!inword){
                inword = true;
                wordcounting++;
            }
        } else {inword = false;}
    }

return wordcounting;

}

// this function is responsible for reversing the answer 

string reversingthesentence(const string &text){
    string reverseDstring = text;
    for (int i = text.length()-1; i >=0; i--){
        reverseDstring +=text[i];
    }
    return reverseDstring ;

}

// function used to capitalise the second letter

string capitalisingSec_Letter( const string &text){
    string Output = "";
    string word = "";
    for (char d: text){
        if (d==' '){
            Output +=word +"";
            word = "";
            
        }else {
            word +=d;
        }
    }
    return Output;
}

// this code is used to 
//vector <string> split(const string &text, char reducer){
  //  vector <string>sente;

//}





int main (){
  ifstream myFile("myFile.txt");
  string filedata((istreambuf_iterator<char>(myFile)),istreambuf_iterator<char>());

  // printsthe no. of vowels
  cout<<"number of vowels: "<<vowelcount(filedata) <<endl;

// output the no. of words 
  cout << "the number of words: "<<wordCount(filedata)<<endl;
 
 // output the reversed statement 
  cout << "reversed statement: "<< reversingthesentence(filedata)<<endl;
 
 // output the sentence with the capitalised 
  cout << "statement with a second letter uppercased: "<< capitalisingSec_Letter(filedata)<< endl;

  return 0 ;

}